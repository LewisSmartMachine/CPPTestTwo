#include <stdio.h>
#include <iostream>

main()
{
    int a = 10;
    std::cout << "This version is aiming for branch two " << std::endl;
    for (int i = 0; i < 10; i++)
    {
        a++;
    }
    std::cout << a << std::endl;
}