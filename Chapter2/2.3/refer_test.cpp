#include <iostream>

int main(int argc, char const *argv[])
{
    int ival = 1024;
    int &refVal = ival;

    std::cout << ival << std::endl;
    std::cout << &ival << std::endl;
    std::cout << refVal << std::endl;
    std::cout << &refVal << std::endl;

    return 0;
}
