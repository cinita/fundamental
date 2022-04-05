#pragma once

#include "ObserverImpl.h"
#include "SubjectImpl.h"
#include <memory>

void ObserverMain()
{
    auto jack = std::make_shared<ObserverImpl>("jack");
    auto mike = std::make_shared<ObserverImpl>("mike");

    auto stock_center = std::make_shared<SubjectImpl>();
    stock_center->Add(jack.get());
    stock_center->Add(mike.get());
    stock_center->Opening();
}