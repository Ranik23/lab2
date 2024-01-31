#include <iostream>
#include "include/LinkedList.h"
#include "include/Vector.h"
#include "include/Vector.h"
#include "include/operating.h"
#include "include/ShellSort.h"
#include "include/PyramidicSort.h"

int main()
{

    std::cout << "Choose A Container :  1. Vector  |  2. LinkedList" << std::endl;
    int user_choice1;

    std::cin >> user_choice1;

    std::cout << "Choose A Type : 1. int | 2. char | 3. string" << std::endl;

    int user_choice2;
    std::cin >> user_choice2;

    while (true)
    {

        switch (user_choice1)
        {
        case 1:
            switch (user_choice2)
            {
            case 1:
            {
                operatingfunction<MyVector<int>>();
                break;
            }
            case 2:
            {
                operatingfunction<MyVector<char>>();
                break;
            }
            case 3:
            {
                operatingfunction<MyVector<std::string>>();
                break;
            }
            default:
                std::cout << "Invalid Type" << std::endl;
                break;
            }
        case 2:
            switch (user_choice2)
            {
            case 1:
            {   
                operatingfunction<LinkedList<int>>();
                break;
            }
            case 2:
            {
                operatingfunction<LinkedList<char>>();
                break;
            }
            case 3:
            {
                operatingfunction<LinkedList<std::string>>();
                break;
            }
            default:
                std::cout << "Invalid Type" << std::endl;
                break;
            }
        }

        if (user_choice1 == 3)
            break;
    }
}