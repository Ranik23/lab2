#include <random>
#include <iostream>

template <typename T>
T generateRandomValue() {
    std::random_device rd;
    std::mt19937 gen(rd());

    if constexpr (std::is_integral<T>::value) {
        std::uniform_int_distribution<T> distribution(std::numeric_limits<T>::min(), std::numeric_limits<T>::max());
        return distribution(gen);
    } else if constexpr (std::is_same<T, std::string>::value) {
        
        std::uniform_int_distribution<size_t> lengthDistribution(1, 10);
        std::uniform_int_distribution<char> charDistribution('a', 'z');

        size_t length = lengthDistribution(gen);
        std::string result;

        for (size_t i = 0; i < length; ++i) {
            result.push_back(charDistribution(gen));
        }

        return result;
    } else {
        static_assert(std::is_integral<T>::value || std::is_same<T, std::string>::value, "не поддерживаемый тип для сравнений");
    }
}