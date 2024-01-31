#include "../include/LinkedList.h"

#include <list>
#include <cstdlib>
#include <chrono>
#include <iterator>
#include <random>
#include <iostream>

template <Comparable T>
LinkedList<T>::Iterator LinkedList<T>::begin() const {
    return LinkedList<T>::Iterator(head);
}

template <Comparable T>
LinkedList<T>::Iterator LinkedList<T>::end() const {
    return LinkedList<T>::Iterator(nullptr);
}


template <Comparable T>
LinkedList<T>::LinkedList() : head(nullptr), tail(nullptr), _size(0) {}

template <Comparable T>
LinkedList<T>::LinkedList(size_t n) : LinkedList() {
    std::random_device rd;
    
    std::mt19937 gen(rd());
    
    std::uniform_int_distribution<T> distribution(std::numeric_limits<T>::min(), std::numeric_limits<T>::max());

    for (size_t i = 0; i < n; ++i) {
        T randomValue = distribution(gen);
        this->push_back(randomValue);
    }
}

template <Comparable T>
LinkedList<T>::LinkedList(const LinkedList<T>& other) : LinkedList() {

    for (auto otherIterator = other.begin(); otherIterator != other.end(); ++otherIterator) {
        push_back(*otherIterator);
    }
}


template <Comparable T>
LinkedList<T>::LinkedList(std::initializer_list<T> list) : LinkedList() {
    for (T value : list) {
        this->push_back(value);
    }
}

template <Comparable T>
LinkedList<T>::~LinkedList() {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

template <Comparable T>
void LinkedList<T>::push_back(const T& value) {
    Node* newNode = new Node(value);
    if (tail == nullptr) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        newNode->back = tail;
        tail = newNode;
    }
    _size++;
}

template <Comparable T>
void LinkedList<T>::clean() {
    int size = this->size();
    while (size > 0) {
        this->pop_back();
        size -= 1;
    }
}

template <Comparable T>
void LinkedList<T>::push_front(const T& value) {
    Node* newNode = new Node(value);
    if (head == nullptr) {
        head = tail = newNode;
    } else {
        newNode->next = head;
        head->back = newNode;
        head = newNode;
    }
    _size++;
}

template <Comparable T>
bool LinkedList<T>::is_empty() const {
    return _size == 0;
}

template <Comparable T>
void LinkedList<T>::pop_back() {
    if (is_empty()) {
        throw std::runtime_error("LinkedList is empty.");
    }

    if (head == tail) {
        delete tail;
        head = tail = nullptr;
    } else {
        Node* temp = head;
        while (temp->next != tail) {
            temp = temp->next;
        }
        delete tail;
        tail = temp;
        tail->next = nullptr;
    }
    _size--;
}

template <Comparable T>
void LinkedList<T>::pop_front() {
    if (is_empty()) {
        throw std::runtime_error("LinkedList is empty.");
    }

    Node* temp = head;
    head = head->next;
    delete temp;
    _size--;
}

template<Comparable T>
void LinkedList<T>::print() {

    auto it = this->begin();

    while (it != this->end()) {
        std::cout << *it << " ";
        ++it;
    }
    std::cout << std::endl;
}

template <Comparable T>
size_t LinkedList<T>::size() const {
    return _size;
}

template <Comparable T>
T& LinkedList<T>::operator[](int index) {
    if (index < 0 || index >= static_cast<int>(_size)) {
        throw std::out_of_range("Index out of range.");
    }
    Node* current = head;
    for (int i = 0; i < index; i++) {
        current = current->next;
    }
    return current->data;
}

template <Comparable T>
const T& LinkedList<T>::operator[](int index) const {
    if (index < 0 || index >= static_cast<int>(_size)) {
        throw std::out_of_range("Index out of range.");
    }

    Node* current = head;
    for (int i = 0; i < index; i++) {
        current = current->next;
    }
    return current->data;
}


template<Comparable T>
LinkedList<T>::Iterator::Iterator(Node* ptr) : ptr(ptr) {}

template<Comparable T>
bool LinkedList<T>::Iterator::operator==(const typename LinkedList<T>::Iterator& other) const {
    return ptr == other.ptr;
}

template<Comparable T>
bool LinkedList<T>::Iterator::operator!=(const typename LinkedList<T>::Iterator& other) const {
    return !(*this == other);
}

template<Comparable T>
typename LinkedList<T>::Iterator& LinkedList<T>::Iterator::operator++() {
    if (ptr) {
        ptr = ptr->next;
    }
    return *this;
}

template<Comparable T>
typename LinkedList<T>::Iterator LinkedList<T>::Iterator::operator++(int) {
    Iterator temp = *this;  
    ++(*this);  
    return temp;  
}


template<Comparable T>
typename LinkedList<T>::Iterator& LinkedList<T>::Iterator::operator--() {
    if (ptr) {
        ptr = ptr->back;
    }
    return *this;
}


template<Comparable T>
typename LinkedList<T>::Iterator LinkedList<T>::Iterator::operator--(int) {
     Iterator temp = *this;
    --(*this);
    return temp;
}

template<Comparable T>
typename LinkedList<T>::Iterator LinkedList<T>::Iterator::operator+(const std::iter_difference_t<typename LinkedList<T>::Iterator> c) const {
    Iterator temp = *this;
    for (int i = 0; i < c; ++i) {
        if (temp.ptr) {
            temp.ptr = temp.ptr->next;
        } else {
            break; 
        }
    }
    return temp;
}

template<Comparable T>
typename LinkedList<T>::Iterator LinkedList<T>::Iterator::operator-(const std::iter_difference_t<typename LinkedList<T>::Iterator> c) const {
    Iterator temp = *this;
    for (int i = 0; i < c; ++i) {
        if (temp.ptr) {
            temp.ptr = temp.ptr->back;
        } else {
            break;
        }
    }
    return temp;
}

template<Comparable T>
typename LinkedList<T>::Iterator LinkedList<T>::Iterator::operator+(const typename LinkedList<T>::Iterator& other) const {
    Iterator temp = *this;
    temp.ptr += other.ptr;
    return temp;
}

template<Comparable T>
typename LinkedList<T>::Iterator LinkedList<T>::Iterator::operator-(const typename LinkedList<T>::Iterator& other) const {
    Iterator temp = *this;
    temp.ptr -= other.ptr;
    return temp;
}

template<Comparable T>
typename LinkedList<T>::Iterator::reference LinkedList<T>::Iterator::operator*() {
    return ptr->data;
}

template<Comparable T>
typename LinkedList<T>::Iterator::pointer LinkedList<T>::Iterator::operator->() {
    return ptr;
}

template<Comparable T>
typename LinkedList<T>::Iterator& LinkedList<T>::Iterator::operator+=(const std::iter_difference_t<typename LinkedList<T>::Iterator> c) {
    ptr += c;
    return *this;
}

template<Comparable T>
typename LinkedList<T>::Iterator& LinkedList<T>::Iterator::operator-=(const std::iter_difference_t<typename LinkedList<T>::Iterator> c) {
    ptr -= c;
    return *this;
}

template<Comparable T>
bool LinkedList<T>::Iterator::operator>=(const typename LinkedList<T>::Iterator& other) const {
    return ptr >= other.ptr;
}

template<Comparable T>
bool LinkedList<T>::Iterator::operator<=(const typename LinkedList<T>::Iterator& other) const {
    return ptr <= other.ptr;
}

template<Comparable T>
bool LinkedList<T>::Iterator::operator>(const typename LinkedList<T>::Iterator& other) const {
    return ptr > other.ptr;
}

template<Comparable T>
bool LinkedList<T>::Iterator::operator<(const typename LinkedList<T>::Iterator& other) const {
    return ptr < other.ptr;
}

template<Comparable T>
std::iter_reference_t<typename LinkedList<T>::Iterator> LinkedList<T>::Iterator::operator[](const std::iter_difference_t<typename LinkedList<T>::Iterator> n) {
    auto temp = ptr;
    for (int i = 0; i < n; ++i) temp = temp->next;
    return temp->data;
}
