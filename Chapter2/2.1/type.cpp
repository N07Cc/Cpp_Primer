#include <iostream>

int main()
{
    std::cout << L'a' << std::endl; // wchar_t
    std::cout << u8"hi!" << std::endl; // utf-8
    std::cout << 42ULL << std::endl; // unsigned long long
    std::cout << 1E-3F << std::endl; // float
    std::cout << 3.14159L <<std::endl; // long double

    return 0;
}