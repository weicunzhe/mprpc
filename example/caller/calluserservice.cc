#include <iostream>
#include "mprpcapplication.h"
#include "user.pb.h"
#include "mprpcchannel.h"

int main(int argc, char **argv)
{
    // 整个程序启动以后,想使用mprpc框架来享受rpc服务调用,一定需要先调用框架的初始化函数
    MprpcApplication::Init(argc, argv);

    // 演示调用远程发布的rpc方法Login
    xiong::UserServiceRpc_Stub stub(new MprpcChannel());
    // rpc方法的请求参数
    xiong::LoginRequest request;
    request.set_name("zhang san");
    request.set_pwd("123456");
    // rpc方法的响应
    xiong::LoginResponse response;
    // 发起rpc方法的调用 同步的rpc调用过程 MprpcChannel::callmethod
    stub.Login(nullptr, &request, &response, nullptr); // RpcChannel->RpcChannel::callMethod 集中来做所有rpc方法调用的参数序列化和网络发送

    // 一次rpc调用完成, 读调用的结果
    if (0 == response.result().errcode())
    {
        std::cout << "rpc login response success:" << response.sucess() << std::endl;
    }
    else
    {
        std::cout << "rpc login response error : " << response.result().errmsg() << std::endl;
    }

    xiong::RegisterRequest register_request;
    register_request.set_id(2000);
    register_request.set_name("mprpc");
    register_request.set_pwd("666666");
    xiong::RegisterResponse register_response;

    // 以同步的方式发起rpc调用请求,等待返回结果
    stub.Register(nullptr, &register_request, &register_response, nullptr);
    if (0 == response.result().errcode())
    {
        std::cout << "rpc register response success:" << response.sucess() << std::endl;
    }
    else
    {
        std::cout << "rpc register response error : " << response.result().errmsg() << std::endl;
    }

    return 0;
}