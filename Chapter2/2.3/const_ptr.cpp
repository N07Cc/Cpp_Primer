#include <iostream>

int main()
{
    int a = 1, b = 2;
    const int *p1 = &a;
    int *const p2 = &b;

    // *p1 += 1; // error
    std::cout << a << std::endl;
    p1 = &b;
    std::cout << *p1 << std::endl;
    *p2 += 1;
    std::cout << b << std::endl;
    // p2 = &a; // error
    std::cout << a << std::endl;

    return 0;
}