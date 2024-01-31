#include <gtest/gtest.h>
#include <vector>
#include <functional>
#include "../include/ShellSort.h"
#include "../include/Vector.h"

TEST(ShellSortTest, SortsVectorInAscendingOrder) {
    MyVector<int> vec = {4, 2, 7, 1, 5, 3};
    ShellSort(vec.begin(), vec.end(), std::greater<int>());
    EXPECT_EQ(vec, (MyVector<int>{1, 2, 3, 4, 5, 7}));
}

TEST(ShellSortTest, SortsVectorInDescendingOrder) {
    MyVector<int> vec = {4, 2, 7, 1, 5, 3};
    ShellSort(vec.begin(), vec.end(), std::less<int>());
    EXPECT_EQ(vec, (MyVector<int>{7, 5, 4, 3, 2, 1}));
}

TEST(ShellSortTest, HandlesEmptyRange) {
    MyVector<int> vec;
    ShellSort(vec.begin(), vec.end(), std::less<int>());
    EXPECT_TRUE(vec.is_empty());
}

TEST(ShellSortTest, SortsAlreadySortedVector) {
    MyVector<int> vec = {1, 2, 3, 4, 5, 7};
    ShellSort(vec.begin(), vec.end(), std::greater<int>());
    EXPECT_EQ(vec, (MyVector<int>{1, 2, 3, 4, 5, 7}));
}

TEST(ShellSortTest, SortsVectorWithEqualElements) {
    MyVector<int> vec = {4, 2, 7, 1, 5, 3, 1, 2, 4};
    ShellSort(vec.begin(), vec.end(), std::less<int>());
    EXPECT_EQ(vec, (MyVector<int>{7, 5, 4, 4, 3, 2, 2, 1, 1}));
}

TEST(ShellSortTest, HandlesSingleElementVector) {
    MyVector<int> vec = {42};
    ShellSort(vec.begin(), vec.end(), std::less<int>());
    EXPECT_EQ(vec, (MyVector<int>{42}));
}

TEST(ShellSortTest, ShortSequence) {
    MyVector<int> vec = {0, 1, 2, 3};
    ShellSort(vec.begin(), vec.end(), std::less<int>());
    EXPECT_EQ(vec, (MyVector<int>{3, 2, 1, 0}));
}

TEST(ShellSortTest, ReverseSortedSequence) {
    MyVector<int> reverseSortedVec = {5, 4, 3, 2, 1};
    ShellSort(reverseSortedVec.begin(), reverseSortedVec.end(), std::greater<int>());
    EXPECT_EQ(reverseSortedVec, (MyVector<int>{1, 2, 3, 4, 5}));
}

TEST(ShellSortTest, AllEqualElements) {
    MyVector<int> equalElementsVec = {2, 2, 2, 2, 2};
    ShellSort(equalElementsVec.begin(), equalElementsVec.end(), std::less<int>());
    EXPECT_EQ(equalElementsVec, (MyVector<int>{2, 2, 2, 2, 2}));
}
