#include <stdio.h>
#include <iostream>

main()
{
    int a = 10;
    std::cout << "hello world" << std::endl;
    for (int i = 0; i < 10; i++)
    {
        a++;
    }
    std::cout << a << std::endl;
}