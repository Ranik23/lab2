#ifndef LAB2_VECTOR_H
#define LAB2_VECTOR_H

#include "Comparable.h"
#include "Container.h"
#include <iterator>

template<Comparable T>
class MyVector : public Container<T> {
private:

    T* data;
    size_t capacity;
    size_t length;

public:

    class Iterator {
    public:

        using difference_type = std::ptrdiff_t;
        using value_type = T;
        using pointer = T*;
        using reference = T&;
        using iterator_category = std::bidirectional_iterator_tag;

        Iterator(T* ptr);

        bool operator==(const Iterator& other) const;
        bool operator!=(const Iterator& other) const;


        Iterator& operator++();
        Iterator operator++(int);
        Iterator& operator--();
        Iterator operator--(int);

        Iterator operator+(std::iter_difference_t<Iterator> c) const;
        Iterator operator-(std::iter_difference_t<Iterator> c) const;
        Iterator operator+(const Iterator& other) const;
        Iterator operator-(const Iterator& other) const;

        reference operator*();
        pointer operator->();

        Iterator& operator+=(std::iter_difference_t<Iterator> c);
        Iterator& operator-=(std::iter_difference_t<Iterator> c);

        bool operator>=(const Iterator& other) const;
        bool operator<=(const Iterator& other) const;

        bool operator>(const Iterator& other) const;
        bool operator<(const Iterator& other) const;

        std::iter_reference_t<Iterator> operator[](std::iter_difference_t<Iterator>);

    private:
        T* ptr;
    };

    Iterator begin() const;
    Iterator end() const;

    MyVector();
    MyVector(size_t n);
    MyVector(Container<T>& other);
    MyVector(const MyVector<T>& other);
    MyVector(const std::initializer_list<T>& list);
    ~MyVector();
    void push_back(const T& value) override;
    void push_front(const T& value) override;
    bool is_empty() const override;
    void pop_back() override;
    void pop_front() override;
    void clean() override;
    void print() override;
    size_t size() const override;
    T& operator[](int index) override;
    const T& operator[](int index) const override;
    bool operator==(const MyVector<T>& other) const ;
};


#include "../sources/Vector.tpp"

#endif //LAB2_VECTOR_H
