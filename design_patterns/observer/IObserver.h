#pragma once

class IObserver
{
public:
    virtual void Update(const float data) = 0;
};
