#pragma once

#include "Singleton.h"
#include <iostream>

void SingtonMain()
{
    auto s0 = &Singleton::GetInstance();
    s0->DoSomething();
    std::cout << "s0 = " << s0 << std::endl;

    auto s1 = &Singleton::GetInstance();
    s1->DoSomething();
    std::cout << "s1 = " << s1 << std::endl;
}
