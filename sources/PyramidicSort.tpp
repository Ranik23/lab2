#include "../include/PyramidicSort.h"
#include <iterator>
#include <queue>

template<typename RandomIt, typename Compare>
void pyramidicSort(RandomIt first, RandomIt last, Compare comp) {
    
    using value_type = typename std::iterator_traits<RandomIt>::value_type;

    std::priority_queue<value_type, std::vector<value_type>, Compare> queue(comp);

    for (auto current = first; current != last; ++current) {
        queue.push(*current);
    }

    for (auto current = first; current != last; ++current) {
        *current = queue.top();
        queue.pop();
    }
}

