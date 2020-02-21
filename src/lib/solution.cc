#include "solution.h"

#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <queue>

std::string Solution::HelloWorld() {
    return "HelloWorld";
}

std::vector<int> Solution::Filter(std::vector<int> &input) {
    std::vector<int> output(input.size());
    auto it = std::copy_if(input.begin(), input.end(), output.begin(), [](auto i) {return (i%2) == 0;});
    output.resize(std::distance(output.begin(), it));
    return output;
}

std::vector<int> Solution::Map(std::vector<int> &input) {
    std::vector<int> output(input.size());
    std::transform(input.begin(), input.end(), output.begin(), [](int i){return i*i;});
    return output;
}

int Solution::Reduce(std::vector<int> &input) {
    int sum = 0;
    sum = std::accumulate(input.begin(), input.end(), sum);
    return sum;
}

void Solution::HeapSort(std::vector<int> &input) {
    std::priority_queue<int> heap;
    for (auto it = input.begin(); it != input.end(); it++) {
        heap.push(*it);
    }
    for (auto it = input.rbegin(); it != input.rend(); it++) {
        *it = heap.top();
        heap.pop();
    }
}

int Solution::FindLargest(std::vector<int> &input, int k) {
    std::priority_queue<int> heap;
    for (auto it = input.begin(); it != input.end(); it++) {
        heap.push(*it);
    }
    for (int i = 1; i < k; i++) {
        heap.pop();
    }
    return heap.top();
}