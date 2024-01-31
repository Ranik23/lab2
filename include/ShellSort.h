#ifndef LAB2_SHELLSORT_H
#define LAB2_SHELLSORT_H

template<typename RandomIt, class Compare>
void ShellSort(RandomIt first, RandomIt end, Compare comp);

#include "../sources/ShellSort.tpp"

#endif //LAB2_SHELLSORT_H
