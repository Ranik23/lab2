#include <gtest/gtest.h>
#include <vector>
#include <functional>
#include "../include/PyramidicSort.h"
#include "../include/Vector.h"
#include "../include/LinkedList.h"


TEST(PyramidicSortTest, SortsVectorInAscendingOrder) {
    MyVector<int> vec = {4, 2, 7, 1, 5, 3};
    pyramidicSort(vec.begin(), vec.end(), std::greater<int>());
    EXPECT_EQ(vec, (MyVector<int>{1, 2, 3, 4, 5, 7}));
}

TEST(PyramidicSortTest, SortsVectorInDescendingOrder) {
    MyVector<int> vec = {4, 2, 7, 1, 5, 3};
    pyramidicSort(vec.begin(), vec.end(), std::less<int>());
    EXPECT_EQ(vec, (MyVector<int>{7, 5, 4, 3, 2, 1}));
}

TEST(PyramidicSortTest, HandlesEmptyRange) {
    MyVector<int> vec;
    pyramidicSort(vec.begin(), vec.end(), std::less<int>());
    EXPECT_TRUE(vec.is_empty());
}

TEST(PyramidicSortTest, SortsVectorWithEqualElements) {
    MyVector<int> vec = {4, 2, 7, 1, 5, 3, 1, 2, 4};
    pyramidicSort(vec.begin(), vec.end(), std::less<int>());
    EXPECT_EQ(vec, (MyVector<int>{7, 5, 4, 4, 3, 2, 2, 1, 1}));
}

TEST(PyramidicSortTest, HandlesSingleElementVector) {
    MyVector<int> vec = {42};
    pyramidicSort(vec.begin(), vec.end(), std::less<int>());
    EXPECT_EQ(vec, (MyVector<int>{42}));
}

TEST(PyramidicSortTest, HandlesVectorWithRepeatedElements) {
    MyVector<int> vec = {4, 2, 7, 1, 5, 3, 4, 2, 7};
    pyramidicSort(vec.begin(), vec.end(), std::less<int>());
    EXPECT_EQ(vec, (MyVector<int>{7, 7, 5, 4, 4, 3, 2, 2, 1}));
}

TEST(PyramidicSortTest, SortsAlreadySortedVector) {
    MyVector<int> sortedVec = {1, 2, 3, 4, 5};
    pyramidicSort(sortedVec.begin(), sortedVec.end(), std::greater<int>());
    EXPECT_EQ(sortedVec, (MyVector<int>{1, 2, 3, 4, 5}));
}

TEST(PyramidicSortTest, SortsWithEqualElements) {
    MyVector<int> equalElementsVec = {2, 2, 2, 2, 2};
    pyramidicSort(equalElementsVec.begin(), equalElementsVec.end(), std::less<int>());
    EXPECT_EQ(equalElementsVec, (MyVector<int>{2, 2, 2, 2, 2}));
}

TEST(PyramidicSortTest, ShortSequence) {
    MyVector<int> vec = {0, 1, 2, 3};
    pyramidicSort(vec.begin(), vec.end(), std::less<int>());
    EXPECT_EQ(vec, (MyVector<int>{3, 2, 1, 0}));
}

TEST(PyramidicSortTest, ShortSequence2) {
    MyVector<int> vec = {0, 1, 1, 1};
    pyramidicSort(vec.begin(), vec.end(), std::less<int>());
    EXPECT_EQ(vec, (MyVector<int>{1, 1, 1, 0}));
}

