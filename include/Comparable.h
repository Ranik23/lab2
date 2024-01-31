
#ifndef LAB2_COMPARABLE_H
#define LAB2_COMPARABLE_H

template<typename T>
concept Comparable = requires(T a, T b) {
    a > b;
    a == b;
    a < b;
};


#endif //LAB2_COMPARABLE_H
