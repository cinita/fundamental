#pragma once

#include "IObserver.h"
#include <string>
#include <iostream>

class ObserverImpl : public IObserver
{

public:
    ObserverImpl(const std::string &name) : m_name(name) {}

    void Update(const float data)
    {
        std::cout << "stock changed: "
                  << "name=" << m_name << ", price=" << data << std::endl;
    }

private:
    const std::string m_name;
};
