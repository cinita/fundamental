#include "singleton/SingletonMain.h"
#include "observer/ObserverMain.h"
#include <string>
#include <iostream>

void execute(void (*executor)(void), const std::string &name)
{
    std::cout << "****** " << name << " begin ******" << std::endl;
    executor();
    std::cout << "****** " << name << " end ******" << std::endl
              << std::endl;
}

int main(int argc, char const *argv[])
{
    execute(SingtonMain, "singleton");
    execute(ObserverMain, "observer");

    return 0;
}
