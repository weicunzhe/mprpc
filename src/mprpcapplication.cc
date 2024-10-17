#include "mprpcapplication.h"

void MprpcApplication::Init(int argc, char **argv) {

};
MprpcApplication &MprpcApplication::GetInstatnce()
{
    static MprpcApplication app;
    return app;
}