#include "Singleton.h"
#include <iostream>

Singleton &Singleton::GetInstance()
{
    static Singleton instance;
    return instance;
}

void Singleton::DoSomething()
{
    std::cout << "Singleton::DoSomething()" << std::endl;
}