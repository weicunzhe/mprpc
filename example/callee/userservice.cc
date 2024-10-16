#include <iostream>

/*
UserService原来是一个本地服务，提供了两个进程内的本地方法Login和GetFriendLists
*/
class UserService
{
public:
    bool Login(std::string name, std::string pwd)
    {
        std::cout << "doing local service: Login\n";
        std::cout << "name:" << name << " pwd:" << pwd << std::endl;
    }
};

int main()
{
    
    return 0;
}