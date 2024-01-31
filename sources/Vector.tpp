#include "../include/Vector.h"

#include <list>
#include <cstdlib>
#include <chrono>
#include <iterator>
#include <random>
#include <iostream>

template<Comparable T>
void MyVector<T>::print() {

    auto it = this->begin();

    while (it != this->end()) {
        std::cout << *it << " ";
        ++it;
    }
    
    std::cout << std::endl;
}

template<Comparable T>
void MyVector<T>::clean() {
    int size = this->size();
    while (size > 0) {
        this->pop_back();
        size -= 1;
    }
}

template<Comparable T>
MyVector<T>::MyVector() : data(nullptr), capacity(0), length(0) {}

template<Comparable T>
MyVector<T>::MyVector(const std::initializer_list<T>& list) : MyVector() {
    for (auto i = list.begin(); i != list.end(); ++i) {
        push_back(*i);
    }
}

template <Comparable T>
MyVector<T>::MyVector(size_t n) : MyVector() {
    std::random_device rd;

    std::mt19937 gen(rd());

    std::uniform_int_distribution<T> distribution(std::numeric_limits<T>::min(), std::numeric_limits<T>::max());

    for (size_t i = 0; i < n; ++i) {
        T randomValue = distribution(gen);
        this->push_back(randomValue);
    }
}

template<Comparable T>
MyVector<T>::MyVector(const MyVector<T>& other) : MyVector() {
    for (auto c = other.begin(); c != other.end(); ++c) {
        push_back(*c);
    }
}

template<Comparable T>
MyVector<T>::~MyVector() {
    delete[] data;
}

template<Comparable T>
void MyVector<T>::push_back(const T& value) {
    if (length >= capacity) {
        capacity = capacity == 0 ? 1 : capacity * 2;

        T* newData = new T[capacity];

        for (size_t i = 0; i < length; ++i) {
            newData[i] = data[i];
        }

        delete[] data;
        data = newData;
    }

    data[length] = value;
    length += 1;
}

template<Comparable T>
void MyVector<T>::push_front(const T& value) {
    if (length >= capacity) {
        capacity = capacity == 0 ? 1 : capacity * 2;

        T* newData = new T[capacity];

        for (size_t i = 0; i < length; ++i) {
            newData[i + 1] = data[i];
        }

        delete[] data;
        data = newData;
    } else {
        for (size_t i = length; i > 0; --i) {
            data[i] = data[i - 1];
        }
    }

    data[0] = value;
    ++length;
}

template<Comparable T>
bool MyVector<T>::is_empty() const {
    return length == 0;
}

template<Comparable T>
void MyVector<T>::pop_back() {
    if (!is_empty()) {
        length -= 1;
    }
}

template<Comparable T>
void MyVector<T>::pop_front() {
    if (!is_empty()) {
        for (size_t i = 0; i < length - 1; ++i) {
            data[i] = data[i + 1];
        }
        length -= 1;
    }
}

template<Comparable T>
size_t MyVector<T>::size() const {
    return length;
}

template<Comparable T>
T& MyVector<T>::operator[](int index) {
    if (index < 0 || index >= static_cast<int>(length)) {
        throw std::out_of_range("Index out of range.");
    }

    return data[index];
}

template<Comparable T>
const T& MyVector<T>::operator[](int index) const {
    if (index < 0 || index >= static_cast<int>(length)) {
        throw std::out_of_range("Index out of range.");
    }

    return data[index];
}

template<Comparable T>
MyVector<T>::Iterator MyVector<T>::begin() const {
    return MyVector<T>::Iterator(data);
}

template<Comparable T>
MyVector<T>::Iterator MyVector<T>::end() const {
    return MyVector<T>::Iterator(data + length);
}

template<Comparable T>
MyVector<T>::Iterator::Iterator(T* ptr) : ptr(ptr) {}

template<Comparable T>
bool MyVector<T>::Iterator::operator==(const typename MyVector<T>::Iterator& other) const {
    return ptr == other.ptr;
}

template<Comparable T>
bool MyVector<T>::Iterator::operator!=(const Iterator& other) const {
    return !(*this == other);
}

template<Comparable T>
typename MyVector<T>::Iterator& MyVector<T>::Iterator::operator++() {
    ++ptr;
    return *this;
}

template<Comparable T>
typename MyVector<T>::Iterator MyVector<T>::Iterator::operator++(int) {
    Iterator temp = *this;
    ++(*this);
    return temp;
}

template<Comparable T>
typename MyVector<T>::Iterator& MyVector<T>::Iterator::operator--() {
    --ptr;
    return *this;
}

template<Comparable T>
typename MyVector<T>::Iterator MyVector<T>::Iterator::operator--(int) {
    Iterator temp = *this;
    --(*this);
    return temp;
}

template<Comparable T>
typename MyVector<T>::Iterator MyVector<T>::Iterator::operator+(const std::iter_difference_t<typename MyVector<T>::Iterator> c) const {
    Iterator result = *this;  

    for (std::iter_difference_t<Iterator> i = 0; i < c; ++i) {
        ++result;
    }

    return result;
}

template<Comparable T>
typename MyVector<T>::Iterator MyVector<T>::Iterator::operator-(const std::iter_difference_t<typename MyVector<T>::Iterator> c) const {
    Iterator result = *this; 

    for (std::iter_difference_t<Iterator> i = 0; i < c; ++i) {
        --result;
    }

    return result;
}

template<Comparable T>
typename MyVector<T>::Iterator MyVector<T>::Iterator::operator+(const MyVector<T>::Iterator& other) const {
    Iterator temp = *this;
    temp.ptr += other.ptr;
    return temp;
}

template<Comparable T>
typename MyVector<T>::Iterator MyVector<T>::Iterator::operator-(const MyVector<T>::Iterator& other) const {
    Iterator temp = *this;
    temp.ptr -= other.ptr;
    return temp;
}

template<Comparable T>
typename MyVector<T>::Iterator::reference MyVector<T>::Iterator::operator*() {
    return *ptr;
}

template<Comparable T>
typename MyVector<T>::Iterator::pointer MyVector<T>::Iterator::operator->() {
    return ptr;
}

template<Comparable T>
typename MyVector<T>::Iterator& MyVector<T>::Iterator::operator+=(const std::iter_difference_t<typename MyVector<T>::Iterator> c) {
    for (std::iter_difference_t<Iterator> i = 0; i < c; ++i) {
        ++(*this);
    }

    return *this;
}

template<Comparable T>
typename MyVector<T>::Iterator& MyVector<T>::Iterator::operator-=(const std::iter_difference_t<typename MyVector<T>::Iterator> c) {
    for (std::iter_difference_t<Iterator> i = 0; i < c; ++i) {
        --(*this);
    }

    return *this;
}

template<Comparable T>
bool MyVector<T>::Iterator::operator>=(const typename MyVector<T>::Iterator& other) const {
    return ptr >= other.ptr;
}

template<Comparable T>
bool MyVector<T>::Iterator::operator<=(const typename MyVector<T>::Iterator& other) const {
    return ptr <= other.ptr;
}

template<Comparable T>
bool MyVector<T>::Iterator::operator>(const typename MyVector<T>::Iterator& other) const {
    return ptr > other.ptr;
}

template<Comparable T>
bool MyVector<T>::Iterator::operator<(const typename MyVector<T>::Iterator& other) const {
    return ptr < other.ptr;
}

template<Comparable T>
typename std::iter_reference_t<typename MyVector<T>::Iterator> MyVector<T>::Iterator::operator[](const std::iter_difference_t<typename MyVector<T>::Iterator> n) {
    auto temp = ptr;
    for (std::ptrdiff_t i = 0; i < n; ++i) {
        temp += 1;
    }
    return *temp;
}

template<Comparable T>
bool MyVector<T>::operator==(const MyVector<T>& other) const {
    if (other.size() != this->size()) return false;
    for (int i = 0; i < other.size(); ++i) {
        if (other[i] != (*this)[i]) return false;
    }   
    return true;
}