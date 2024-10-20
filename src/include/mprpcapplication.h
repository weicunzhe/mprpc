#ifndef MPRPCAPPLICATION_H
#define MPRPCAPPLICATION_H

#include "mprpcconfig.h"

// mprpc框架的基础类
class MprpcApplication
{

public:
    static void Init(int argc, char **argv);
    static MprpcApplication &GetInstatnce();
    static MprpcConfig &GetConfig();
private:
    static MprpcConfig m_config;

    MprpcApplication(){};
    MprpcApplication(const MprpcApplication &) = delete;
    MprpcApplication(MprpcApplication &&) = delete;
};

#endif
