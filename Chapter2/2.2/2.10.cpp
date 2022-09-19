#include <iostream>

std::string global_str;
int global_int;

int main()
{
    std::string local_str;
    int local_int;
    std::cout << global_str << std::endl;   //空串
    std::cout << global_int << std::endl;   //0
    std::cout << local_str << std::endl;    //空串
    std::cout << local_int << std::endl;    //随机值

    return 0;
}