#include "zookeeperUtil.h"
#include "mprpcapplication.h"
#include <iostream>

ZkClient::ZkClient() : m_zhandle(nullptr) {

                       };
ZkClient::~ZkClient()
{
    if (m_zhandle != nullptr)
    {
        zookeeper_close(m_zhandle);
    }
};
// zkclient启动连接zkserver
void ZkClient::Start()
{
    std::string host = MprpcApplication::GetInstatnce().GetConfig().Load("zookeeperip");
    std::string port = MprpcApplication::GetInstatnce().GetConfig().Load("zookeeperport");
    std::string connstr = host + ":" + port;
    
};
// 在zkserver上根据指定的path创建znode节点
void ZkClient::Create(const char *path, const char *data, int datalen, int state) {};
// 根据参数指定的znode节点路径，或者znode节点的值
std::string ZkClient::GetData(const char *path)
{
    return "";
};