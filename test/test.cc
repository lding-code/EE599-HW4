#include "gtest/gtest.h"
#include <string>
#include <iostream>
#include <vector>

#include "src/lib/solution.h"
#include "src/lib/MaxHeap.h"
#include "src/lib/BST.h"

TEST(HelloWorldShould, ReturnHelloWorld) {
    Solution solution;

    std::string actual = solution.HelloWorld();
    std::string expected = "HelloWorld";

    EXPECT_EQ(expected, actual);
}

TEST(FilterShould1, ReturnFilter1) {
    Solution solution;

    std::vector<int> input = {1, 2, 3, 4, 5};
    std::vector<int> actual = solution.Filter(input);
    std::vector<int> expected = {2, 4};

    EXPECT_EQ(expected, actual);
}

TEST(FilterShould2, ReturnFilter2) {
    Solution solution;

    std::vector<int> input = {1};
    std::vector<int> actual = solution.Filter(input);
    std::vector<int> expected = {};

    EXPECT_EQ(expected, actual);
}

TEST(MapShould1, ReturnMap1) {
    Solution solution;

    std::vector<int> input = {1, 2, 3, 4, 5};
    std::vector<int> actual = solution.Map(input);
    std::vector<int> expected = {1, 4, 9, 16, 25};

    EXPECT_EQ(expected, actual);
}

TEST(MapShould2, ReturnMap2) {
    Solution solution;

    std::vector<int> input = {-1, -2, -3, -4, -5};
    std::vector<int> actual = solution.Map(input);
    std::vector<int> expected = {1, 4, 9, 16, 25};

    EXPECT_EQ(expected, actual);
}

TEST(ReduceShould1, ReturnReduce1) {
    Solution solution;

    std::vector<int> input = {1, 2, 3, 4, 5};
    int actual = solution.Reduce(input);
    int expected = 15;

    EXPECT_EQ(expected, actual);
}

TEST(RedeuceShould2, ReturnReduce2) {
    Solution solution;

    std::vector<int> input = {};
    int actual = solution.Reduce(input);
    int expected = 0;

    EXPECT_EQ(expected, actual);
}


// Q2 Get Parent Index
TEST(MaxHeapShould1, ReturnMaxHeap1) {
    MaxHeap maxheap;


    maxheap.push(1);
    maxheap.push(2);
    maxheap.push(3);
    maxheap.push(4);

    
    int actual = maxheap.GetParentIndex(1);
    int expected = 0;

    EXPECT_EQ(expected, actual);
}

// Q2 Get Left Index
TEST(MaxHeapShould2, ReturnMaxHeap2) {
    MaxHeap maxheap;


    maxheap.push(1);
    maxheap.push(2);
    maxheap.push(3);
    maxheap.push(4);

    
    int actual = maxheap.GetLeftIndex(0);
    int expected = 1;

    EXPECT_EQ(expected, actual);
}

// Q2 Get Right Index
TEST(MaxHeapShould3, ReturnMaxHeap3) {
    MaxHeap maxheap;


    maxheap.push(1);
    maxheap.push(2);
    maxheap.push(3);
    maxheap.push(4);

    
    int actual = maxheap.GetRightIndex(0);
    int expected = 2;

    EXPECT_EQ(expected, actual);
}

// Q2 Get Largest Child Index
TEST(MaxHeapShould4, ReturnMaxHeap4) {
    MaxHeap maxheap;


    maxheap.push(1);
    maxheap.push(2);
    maxheap.push(3);
    maxheap.push(4);

    
    int actual = maxheap.GetLargestChildIndex(0);
    int expected = 1;

    EXPECT_EQ(expected, actual);
}

// Q2 Top
TEST(MaxHeapShould5, ReturnMaxHeap5) {
    MaxHeap maxheap;


    maxheap.push(1);
    maxheap.push(2);
    maxheap.push(3);
    maxheap.push(4);

    
    int actual = maxheap.top();
    int expected = 4;

    EXPECT_EQ(expected, actual);
}

// Q2 Push root value
TEST(MaxHeapShould6, ReturnMaxHeap6) {
    MaxHeap maxheap;


    maxheap.push(1);
    maxheap.push(2);
    maxheap.push(3);
    maxheap.push(4);

    maxheap.push(5);

    int actual = maxheap.top();
    int expected = 5;

    EXPECT_EQ(expected, actual);
}

// Q2 Pop root value
TEST(MaxHeapShould7, ReturnMaxHeap7) {
    MaxHeap maxheap;


    maxheap.push(1);
    maxheap.push(2);
    maxheap.push(3);
    maxheap.push(4);

    maxheap.pop();

    int actual = maxheap.top();
    int expected = 3;

    EXPECT_EQ(expected, actual);
}

// Q3 insert keys and find it
TEST(BSTShould1, ReturnBST1) {
    BST bst;

    bst.push(7);

    bool actual = bst.find(7);
    bool expected = true;

    EXPECT_EQ(expected, actual);
}

// Q3 insert keys and find it
TEST(BSTShould2, ReturnBST2) {
    std::vector<int> input = {2, 1, 3};
    BST bst {input};

    bool actual = bst.find(1);
    bool expected = true;

    EXPECT_EQ(expected, actual);
}

// Q3 insert find key that doesn't exist
TEST(BSTShould3, ReturnBST3) {
    std::vector<int> input = {2, 1, 3};
    BST bst {input};

    bool actual = bst.find(4);
    bool expected = false;

    EXPECT_EQ(expected, actual);
}

// Q3 erase key
TEST(BSTShould4, ReturnBST4) {
    std::vector<int> input = {2, 1, 3};
    BST bst {input};

    bool actual = bst.erase(2);
    bool expected = true;

    EXPECT_EQ(expected, actual);
}

// Q3 erase key on empty tree
TEST(BSTShould5, ReturnBST5) {
    std::vector<int> input = {};
    BST bst {input};

    bool actual = bst.erase(2);
    bool expected = false;

    EXPECT_EQ(expected, actual);
}

// Q3 find key on nested tree
TEST(BSTShould6, ReturnBST6) {
    std::vector<int> input = {57, 62, 91, 44, 26, 73, 50, 42, 24, 83, 68, 15, 3, 87, 66, 8};
    BST bst {input};

    bool actual = bst.find(42);
    bool expected = true;

    EXPECT_EQ(expected, actual);
}

// Q3 erase a key and find it on ensted tree
TEST(BSTShould7, ReturnBST7) {
    std::vector<int> input = {57, 62, 91, 44, 26, 73, 50, 42, 24, 83, 68, 15, 3, 87, 66, 8};
    BST bst {input};

    bool result = bst.erase(42);

    bool actual = bst.find(42);
    bool expected = false;

    EXPECT_EQ(expected, actual);
}

// Q4 display 1, 2, 3
TEST(BSTDisplayShould1, ReturnBSTDisplay1) {
    std::vector<int> input = {1, 2, 3};
    BST bst {input};

    std::vector<int> actual = bst.toVector();
    std::vector<int> expected = {1, 2, 3};

    EXPECT_EQ(expected, actual);
}

// Q4 display example
TEST(BSTDisplayShould2, ReturnBSTDisplay2) {
    std::vector<int> input = {8, 3, 1, 10, 14, 13, 6, 7, 4};
    BST bst {input};

    std::vector<int> actual = bst.toVector();
    std::vector<int> expected = {8, 3, 10, 1, 6, 14, 4, 7, 13};

    EXPECT_EQ(expected, actual);
}

// Q5 example
TEST(HeapSortShould1, ReturnHeapSort1) {
    Solution solution;
    std::vector<int> input = {5, 9, 3, 1, 7};
    
    solution.HeapSort(input);

    std::vector<int> actual = input;
    std::vector<int> expected = {1, 3, 5, 7, 9};

    EXPECT_EQ(expected, actual);
}

// Q5 one more test
TEST(HeapSortShould2, ReturnHeapSort2) {
    Solution solution;
    std::vector<int> input = {3, 2, 1};
    
    solution.HeapSort(input);

    std::vector<int> actual = input;
    std::vector<int> expected = {1, 2, 3};

    EXPECT_EQ(expected, actual);
}

// Q5 empty input
TEST(HeapSortShould3, ReturnHeapSort3) {
    Solution solution;
    std::vector<int> input = {};
    
    solution.HeapSort(input);

    std::vector<int> actual = input;
    std::vector<int> expected = {};

    EXPECT_EQ(expected, actual);
}

// Q6 example 1
TEST(FindLargestShould1, ReturnFindLargest1) {
    Solution solution;
    std::vector<int> input = {0, 2, 1, 5, 6, 3};

    int actual = solution.FindLargest(input, 2);
    int expected = 5;

    EXPECT_EQ(expected, actual);
}

// Q6 example 2
TEST(FindLargestShould2, ReturnFindLargest2) {
    Solution solution;
    std::vector<int> input = {-2, 3, 01, 2, 5, 6, 10};

    int actual = solution.FindLargest(input, 3);
    int expected = 5;

    EXPECT_EQ(expected, actual);
}