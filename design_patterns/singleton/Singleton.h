#pragma once

class Singleton
{
public:
    static Singleton &GetInstance();
    void DoSomething();

private:
    Singleton(){}
    ~Singleton(){}
    Singleton(const Singleton &);
    Singleton &operator=(const Singleton &);
};
