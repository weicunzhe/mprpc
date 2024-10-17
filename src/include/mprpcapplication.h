#ifndef MPRPCAPPLICATION_H
#define MPRPCAPPLICATION_H

// mprpc框架的基础类
class MprpcApplication
{

public:
    static void Init(int argc, char **argv);
    static MprpcApplication &GetInstatnce()
    {
        static MprpcApplication app;
        return app;
    }

private:
    MprpcApplication(){};
    MprpcApplication(const MprpcApplication &) = delete;
    MprpcApplication(MprpcApplication &&) = delete;
};

#endif
