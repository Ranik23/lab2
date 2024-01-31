#include "../include/operating.h"
#include "../include/ShellSort.h"
#include "../include/PyramidicSort.h"
#include "../include/TimeCompare.h"
#include <random>
#include <string>
#include <iostream>
#include <fstream>
#include <random>

template <typename T>
bool checkInput(T& input) {
    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return false;
    }
    return true;
}

template <typename Array>
void operatingfunction()
{
    Array other;

    using T = typename Array::Iterator::value_type;

    while (true)
    {
        T value;
        int direction_choice;

        std::cout << "1. Push Back | 2. Push Front | 3. Pop Back | 4. Pop Front | 5. Empty ? | 6. Size | 7. Exit | 8. Print | ";
        std::cout << "9. ShellSort | 10. PyramidicSort | 11. Compare | 12. Graphic | 13. Random Sequence" << std::endl;

        int flag;
        do {
            std::cin >> flag;

            if (!checkInput(flag)) {
                std::cerr << "Invalid input for flag. Please enter a valid option.\n";
            }
        } while (!checkInput(flag));

        switch (flag)
        {
        case 1:
            do {
                std::cout << "Value - ";
                std::cin >> value;
                if (!checkInput(value)) {
                    std::cerr << "Invalid input for value. Please enter a valid value.\n";
                }
            } while (!checkInput(value));
            other.push_back(value);
            break;
        case 2:
            do {
                std::cout << "Value - ";
                std::cin >> value;
                if (!checkInput(value)) {
                    std::cerr << "Invalid input for value. Please enter a valid value.\n";
                }
            } while (!checkInput(value));
            other.push_front(value);
            break;
        case 3:
            other.pop_back();
            break;
        case 4:
            other.pop_front();
            break;
        case 5:
            std::cout << (other.is_empty() == 1 ? "Empty" : "Not Empty") << std::endl;
            break;
        case 6:
            std::cout << "Size - " << other.size() << std::endl;
            break;
        case 8:
            other.print();
            break;
        case 9:{
            std::cout << "1. Возрастающая | 2. Убывающая - ";
            std::cin >> direction_choice;
            if (direction_choice == 1) {
                ShellSort(other.begin(), other.end(), std::greater<T>());
            }else {
                ShellSort(other.begin(), other.end(), std::less<T>());
            }
            other.print();
            break;
        }
        case 10:{
            std::cout << "1. Возрастающая | 2. Убывающая - ";
            std::cin >> direction_choice;
            if (direction_choice == 1) {
                pyramidicSort(other.begin(), other.end(), std::greater<T>());
            }else {
                pyramidicSort(other.begin(), other.end(), std::less<T>());
            }
            other.print();
            break;
        }
        case 11:
            compare<Array>(10000);
            break;
        case 12:
        {
            std::ofstream outputFile("sorting_times.csv");

            if (!outputFile.is_open())
            {
                std::cerr << "Error opening file for writing." << std::endl;
            }

            outputFile << "N,ShellSort,PyramidicSort\n";

            for (int N = 1; N <= 10000; N += 800)
            {
                auto durations = compare<Array>(N);
                outputFile << static_cast<int>(N) << "," << static_cast<long long>(durations.first) << "," << static_cast<long long>(durations.second) << "\n";
            }
            outputFile.close();
            break;
        }
        case 13: {
            
            other.clean();
            std::cout << "1. Возрастающая | 2. Убывающая  - ";
            int direction;
            std::cin >> direction;

            std::random_device rd;

            std::mt19937 generator(rd());

            std::uniform_int_distribution<int> distribution(1, 10);

            int sequence_size = distribution(generator);

            if (direction == 1) {
                
                for (int i = 0; i < sequence_size; ++i) {
                    if (i == 0) other.push_back(generateRandomValue<T>());
                    else {
                        T random_value = generateRandomValue<T>();
                        while (other[i - 1] >= random_value) {
                            random_value = generateRandomValue<T>();
                        }
                        other.push_back(random_value);
                    }
                }
            } else {
                for (int i = 0; i < sequence_size; ++i) {
                    if (i == 0) other.push_back(generateRandomValue<T>());
                    else {
                        T random_value = generateRandomValue<T>();
                        while (other[i - 1] <= random_value) {
                            random_value = generateRandomValue<T>();
                        }
                        other.push_back(random_value);
                    }
                }
            }
            break;
        }
        case 7:
            exit(0);
        default:
            std::cerr << "Invalid operation. Please choose a valid option.\n";
        }
    }
}
