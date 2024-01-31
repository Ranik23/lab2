#ifndef LAB2_CONTAINER_H
#define LAB2_CONTAINER_H

#include <chrono>
#include "Comparable.h"
#include <iterator>

template <Comparable T>
class Container
{
public:
    virtual bool is_empty() const = 0;
    virtual void pop_back() = 0;
    virtual void pop_front() = 0;
    virtual size_t size() const = 0;
    virtual T &operator[](int index) = 0;
    virtual const T &operator[](int index) const = 0;
    virtual void push_back(const T &value) = 0;
    virtual void push_front(const T &value) = 0;
    virtual void print() = 0;
    virtual void clean() = 0;
};


#endif
