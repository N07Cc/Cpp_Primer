#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item, sum;
    if (std::cin >> sum)
    {
        int cnt = 1;
        while (std::cin >> item)
        {
            if (item.isbn() == sum.isbn())
            {
                cnt++;
                sum += item;
            }else
            {
                std::cout << sum << std::endl;
                sum = item;
                cnt = 1;
            }
            
        }
        std::cout << sum << std::endl;
    }
    
}
