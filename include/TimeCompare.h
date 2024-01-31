#ifndef LAB2_TIMECOMPARE_H
#define LAB2_TIMECOMPARE_H

#include "Container.h"
#include "ShellSort.h"
#include "PyramidicSort.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>
#include "LinkedList.h"
#include "Vector.h"


template<typename Array>
std::pair<long long, long long> compare(int n);

#include "../sources/TimeCompare.tpp"

#endif