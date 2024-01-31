#include "../include/TimeCompare.h"
#include "../include/random.h"


template<typename Array>
std::pair<long long, long long> compare(int n) {

    using T = typename Array::Iterator::value_type;

    Array vec;

    for (int i = 0; i < n; ++i) {
        vec.push_back(generateRandomValue<T>());
    }

    Array vec2 = vec;

    auto startTime = std::chrono::high_resolution_clock::now();
    ShellSort(vec.begin(), vec.end(), std::less<T>());
    auto endTime = std::chrono::high_resolution_clock::now();

    auto durationShell = std::chrono::duration_cast<std::chrono::milliseconds>(endTime - startTime).count();
    std::cout << "Time taken by ShellSort: " << durationShell << " milliseconds" << std::endl;

    startTime = std::chrono::high_resolution_clock::now();
    pyramidicSort(vec2.begin(), vec2.end(), std::less<T>());
    endTime = std::chrono::high_resolution_clock::now();

    auto durationPyramid = std::chrono::duration_cast<std::chrono::milliseconds>(endTime - startTime).count();
    std::cout << "Time taken by pyramidicSort: " << durationPyramid << " milliseconds" << std::endl;

    return {durationShell, durationPyramid};
}
