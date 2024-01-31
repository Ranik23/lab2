#include <gtest/gtest.h>
#include "../include/Vector.h"  

TEST(MyVectorTest, ConstructorWithSize) {
    MyVector<int> vec(5);
    EXPECT_EQ(vec.size(), 5);
}

TEST(MyVectorTest, DefaultConstructor) {
    MyVector<int> vec;
    EXPECT_EQ(vec.size(), 0);
}

TEST(MyVectorTest, InitializerListConstructor) {
    MyVector<int> vec = {1, 2, 3, 4, 5};
    EXPECT_EQ(vec.size(), 5);
    EXPECT_EQ(vec[0], 1);
    EXPECT_EQ(vec[4], 5);
}

TEST(MyVectorTest, PushBackAndSize) {
    MyVector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    EXPECT_EQ(vec.size(), 2);
    EXPECT_EQ(vec[0], 10);
    EXPECT_EQ(vec[1], 20);
}


TEST(MyVectorIteratorTest, IteratorComparison) {
    MyVector<int> vector;
    vector.push_back(1);
    vector.push_back(2);

    auto it1 = vector.begin();
    auto it2 = vector.begin();
    auto it3 = ++vector.begin();

    EXPECT_EQ(it1, it2);
    EXPECT_NE(it1, it3);
    EXPECT_LT(it1, it3);
    EXPECT_LE(it1, it2);
    EXPECT_GT(it3, it1);
    EXPECT_GE(it3, it2);
}


TEST(MyVectorIteratorTest, IteratorSubscript) {
    MyVector<int> vector;
    vector.push_back(1);
    vector.push_back(2);
    vector.push_back(3);

    auto it = vector.begin();

    EXPECT_EQ(it[0], 1);
    EXPECT_EQ(it[2], 3);
}

TEST(MyVectorIteratorTest, IteratorAdvance) {
    MyVector<int> vector;
    vector.push_back(1);
    vector.push_back(2);
    vector.push_back(3);

    auto it = vector.begin();
    std::advance(it, 2);

    EXPECT_EQ(*it, 3);
}

TEST(MyVectorIteratorTest, IteratorDistance) {
    MyVector<int> vector;
    vector.push_back(1);
    vector.push_back(2);
    vector.push_back(3);

    auto it1 = vector.begin();
    auto it2 = vector.end();

    EXPECT_EQ(std::distance(it1, it2), 3);
}

TEST(MyVectorIteratorTest, IteratorIncrementDecrement) {
    MyVector<int> vector;
    vector.push_back(1);
    vector.push_back(2);
    vector.push_back(3);

    auto it = vector.begin();
    EXPECT_EQ(*it, 1);

    ++it;
    EXPECT_EQ(*it, 2);

    it++;
    EXPECT_EQ(*it, 3);

    --it;
    EXPECT_EQ(*it, 2);

    it--;
    EXPECT_EQ(*it, 1);
}

TEST(MyVectorIteratorTest, IteratorComparisonWithDifferentVectors) {
    MyVector<int> vector1;
    vector1.push_back(1);
    vector1.push_back(2);

    MyVector<int> vector2;
    vector2.push_back(1);
    vector2.push_back(2);

    auto it1 = vector1.begin();
    auto it2 = vector2.begin();

    EXPECT_NE(it1, it2);
    EXPECT_LT(it1, it2);
    EXPECT_LE(it1, it2);
    EXPECT_GT(it2, it1);
    EXPECT_GE(it2, it1);
}



