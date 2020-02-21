#include "MaxHeap.h"

#include <string>
#include <vector>
#include <algorithm>
#include <numeric>


MaxHeap::MaxHeap() {
    data_ = {};
}

int MaxHeap::GetParentIndex(int i) {
    return (i - 1) / 2;
}

int MaxHeap::GetLeftIndex(int i) {
    return i * 2 + 1;
}

int MaxHeap::GetRightIndex(int i) {
    return (i + 1) * 2;
}

int MaxHeap::GetLargestChildIndex(int i) {
    if (data_[GetLeftIndex(i)] > data_[GetRightIndex(i)]) {
        return GetLeftIndex(i);
    }
    else {
        return GetRightIndex(i);
    }
}

int MaxHeap::GetLeft(int i) {
    return data_[GetLeftIndex(i)];
}

int MaxHeap::GetRight(int i) {
    return data_[GetRightIndex(i)];
}

int MaxHeap::GetParent(int i) {
    return data_[GetParentIndex(i)];
}

int MaxHeap::top() {
    return data_[0];
}

void MaxHeap::TrickleUp(int i) {
    int node = i;
    int temp = 0;
    while (data_[node] > GetParent(node) && node > 0) {
        temp = data_[GetParentIndex(node)];
        data_[GetParentIndex(node)] = data_[node];
        data_[node] = temp;
        node = GetParentIndex(node);
    }
}

void MaxHeap::TrickleDown(int i) {
    int node = i;
    int newNode = node;
    int temp = 0;
    while (data_[node] < data_[GetLargestChildIndex(node)] && i < data_.size()) {
        newNode = GetLargestChildIndex(node);
        temp = data_[newNode];
        data_[newNode] = data_[node];
        data_[node] = temp;
        node = newNode;
    }
}

void MaxHeap::push(int v) {
    data_.push_back(v);
    TrickleUp(data_.size() - 1);
}

void MaxHeap::pop() {
    data_[0] = data_[data_.size() - 1];
    data_.pop_back();
    TrickleDown(0);
}