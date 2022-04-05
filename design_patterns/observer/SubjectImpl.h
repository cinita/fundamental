#pragma once

#include "ISubject.h"
#include "IObserver.h"
#include <atomic>
#include <vector>
#include <mutex>
#include <algorithm>
#include <thread>
#include <chrono>

class SubjectImpl : public ISubject
{
public:
    SubjectImpl() : m_price(0.0f), m_count(0) {}

    void Add(IObserver *observer)
    {
        std::lock_guard<std::mutex> lock(m_mutex);
        auto r = std::find(m_obversers.begin(), m_obversers.end(), observer);
        if (r == m_obversers.end())
        {
            m_obversers.push_back(observer);
        }
    }

    void Remove(IObserver *observer)
    {
        std::lock_guard<std::mutex> lock(m_mutex);
        std::remove(m_obversers.begin(), m_obversers.end(), observer);
    }

    void Notify()
    {
        for (auto &&observer : m_obversers)
        {
            observer->Update(m_price);
        }
    }

    void Opening()
    {
        while (m_count < 10)
        {
            ++m_count;
            m_price = std::rand() % 10;
            std::this_thread::sleep_for(std::chrono::seconds(1));
            Notify();
        }
    }

private:
    std::atomic<float> m_price;
    std::vector<IObserver *> m_obversers;
    std::mutex m_mutex;
    std::atomic<std::size_t> m_count;
};
