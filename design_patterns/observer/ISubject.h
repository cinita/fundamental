#pragma once

class IObserver;

class ISubject
{
public:
    virtual void Add(IObserver *observer) = 0;
    virtual void Remove(IObserver *observer) = 0;
    virtual void Notify() = 0;
};
