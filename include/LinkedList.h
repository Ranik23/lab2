#ifndef LAB2_LINKEDLIST_H
#define LAB2_LINKEDLIST_H

#include "Comparable.h"
#include "Container.h"
#include <iterator>

template <Comparable T>
class LinkedList : public Container<T> {
private:

    struct Node {
        T data;
        Node* next;
        Node* back;
        Node(const T& val) : data(val), next(nullptr), back(nullptr) {}
    };

    Node* head;
    Node* tail;
    size_t _size;

public:
    

    class Iterator {
    public:

        using difference_type = std::ptrdiff_t;
        using value_type = T;
        using pointer = T*;
        using reference = T&;
        using iterator_category = std::bidirectional_iterator_tag;

        explicit Iterator(Node* ptr);

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
        Node* ptr;
    };

    Iterator begin() const;
    Iterator end() const;

    LinkedList();
    LinkedList(Container<T>& other);
    LinkedList(const LinkedList<T>& other);
    explicit LinkedList(size_t n);
    LinkedList(std::initializer_list<T> list);
    ~LinkedList();

    void push_back(const T& value) override;
    void push_front(const T& value) override;
    [[nodiscard]] bool is_empty() const override;
    void clean() override;
    void pop_back() override;
    void pop_front() override;
    void print() override;
    size_t size() const override;
    T& operator[](int index) override;
    const T& operator[](int index) const override;
};

#include "../sources/LinkedList.tpp"

#endif //LAB2_LINKEDLIST_H;
