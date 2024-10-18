#include <iostream>
#include <string>
#include "user.pb.h"
#include "mprpcapplication.h"
#include "rpcprovider.h"
#include "google/protobuf/compiler/importer.h"

/*
UserService原来是一个本地服务，提供了两个进程内的本地方法Login和GetFriendLists
*/
class UserService : public xiong::UserServiceRpc // 使用在rpc服务端发布端 (rpc服务提供者)
{
public:
    bool Login(std::string name, std::string pwd)
    {
        std::cout << "doing local service: Login\n";
        std::cout << "name:" << name << " pwd:" << pwd << std::endl;
        return true;
    }

    /*
    重写基类UserServiceRpc的虚函数 下面这些方法都是框架直接调用的
    1. caller ===> Login(LoginRequest) => muduo => callee
    2. callee ===> Login(LoginRequest) =>交给下面重写的这个Login方法上
    */
    void Login(::google::protobuf::RpcController *controller,
               const ::xiong::LoginRequest *request,
               ::xiong::LoginResponse *response,
               ::google::protobuf::Closure *done)
    {
        // 框架给业务上报了请求参数LoginRequest,应用获取相应数据做本地业务
        std::string name = request->name();
        std::string pwd = request->pwd();

        // 做本地业务
        bool login_result = Login(name, pwd);

        // 把响应写入 包括错误码、错误消息、返回值
        xiong::ResultCode *code = response->mutable_result();
        code->set_errcode(0);
        code->set_errmsg("");
        response->set_sucess(login_result);

        // 执行回调操作
        done->Run();
    }
};

int main(int argc, char **argv)
{
    // 调用框架的初始化操作 provider -i config.conf
    MprpcApplication::Init(argc, argv);

    // provider是一个rpc网络服务对象，把UserService对象发布到rpc节点上
    RpcProvider provider;
    provider.NotifyService(new UserService());
    
    // 启动一个rpc服务发布节点 Run以后 进程进入阻塞状态， 等待远程rpc调用请求
    provider.Run();

    return 0;
} 