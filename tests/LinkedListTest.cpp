#include <gtest/gtest.h>
#include "../include/LinkedList.h" 

TEST(LinkedListTest, BasicOperations) {
    LinkedList<int> list;

    EXPECT_TRUE(list.is_empty());
    EXPECT_EQ(list.size(), 0);

    list.push_back(10);
    list.push_back(20);

    EXPECT_FALSE(list.is_empty());
    EXPECT_EQ(list.size(), 2);
    EXPECT_EQ(list[0], 10);
    EXPECT_EQ(list[1], 20);
}

TEST(LinkedListTest, PushFrontAndPopFront) {
    LinkedList<int> list;

    list.push_front(10);
    list.push_front(20);

    EXPECT_FALSE(list.is_empty());
    EXPECT_EQ(list.size(), 2);
    EXPECT_EQ(list[0], 20);
    EXPECT_EQ(list[1], 10);

    list.pop_front();

    EXPECT_EQ(list.size(), 1);
    EXPECT_EQ(list[0], 10);

    list.pop_front();

    EXPECT_TRUE(list.is_empty());
    EXPECT_EQ(list.size(), 0);
}

TEST(LinkedListTest, PushBackAndPopBack) {
    LinkedList<int> list;

    list.push_back(10);
    list.push_back(20);

    EXPECT_FALSE(list.is_empty());
    EXPECT_EQ(list.size(), 2);
    EXPECT_EQ(list[0], 10);
    EXPECT_EQ(list[1], 20);

    list.pop_back();

    EXPECT_EQ(list.size(), 1);
    EXPECT_EQ(list[0], 10);

    list.pop_back();

    EXPECT_TRUE(list.is_empty());
    EXPECT_EQ(list.size(), 0);
}


TEST(LinkedListIteratorTest, IteratorIncrementAndDereference) {
    LinkedList<int> list;
    list.push_back(1);
    list.push_back(2);

    auto it = list.begin();

    EXPECT_EQ(*it, 1);
    ++it;
    EXPECT_EQ(*it, 2);
}

TEST(LinkedListIteratorTest, IteratorPostIncrement) {
    LinkedList<int> list;
    list.push_back(1);
    list.push_back(2);

    auto it = list.begin();
    auto temp = it++;

    EXPECT_EQ(*temp, 1);
    EXPECT_EQ(*it, 2);
}

TEST(LinkedListIteratorTest, IteratorAddition) {
    LinkedList<int> list;
    list.push_back(1);
    list.push_back(2);

    auto it = list.begin();
    it = it + 1;

    EXPECT_EQ(*it, 2);

    it = it + 1;

    EXPECT_EQ(it, list.end());
}

TEST(LinkedListIteratorTest, IteratorSubscript) {
    LinkedList<int> list;
    list.push_back(1);
    list.push_back(2);
    list.push_back(3);

    auto it = list.begin();

    EXPECT_EQ(it[0], 1);
    EXPECT_EQ(it[2], 3);
}

TEST(LinkedListIteratorTest, IteratorAdvance) {
    LinkedList<int> list;
    list.push_back(1);
    list.push_back(2);
    list.push_back(3);

    auto it = list.begin();
    std::advance(it, 2);

    EXPECT_EQ(*it, 3);
}

TEST(LinkedListIteratorTest, IteratorDistance) {
    LinkedList<int> list;
    list.push_back(1);
    list.push_back(2);
    list.push_back(3);

    auto it1 = list.begin();
    auto it2 = list.end();

    EXPECT_EQ(std::distance(it1, it2), 3);
}