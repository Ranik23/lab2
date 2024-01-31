#include "../include/ShellSort.h"
#include <iterator>

template<typename RandomIt, class Compare>
void ShellSort(RandomIt begin, RandomIt end, Compare comp) {

    int n = std::distance(begin, end);

    for (int gap = n / 2; gap > 0; gap /= 2) {

        for (int i = gap; i < n; ++i) {
            auto temp = *(begin + i);
            int j = i;

            while (j >= gap && comp(*(begin + j - gap), temp)) {
                *(begin + j) = *(begin + j - gap);
                j -= gap;
            }

            *(begin + j) = temp;
        }
    }
}

