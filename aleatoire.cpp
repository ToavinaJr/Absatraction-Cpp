#include <iostream>
#include <ctime>
#include <cstdlib>

int main()
{
    srand( time(0) );

    for (int i(0); i<10; i++)
    {
        std::cout << std::rand() % 10 << std::endl;
    }

}