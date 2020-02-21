#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H


#include <string>
#include <vector>


class Solution {

public:
    std::string HelloWorld();
    std::vector<int> Filter(std::vector<int> &input);
    std::vector<int> Map(std::vector<int> &input);
    int Reduce(std::vector<int> &input);
    void HeapSort(std::vector<int> &input);
    int FindLargest(std::vector<int> &input, int k);
};

#endif