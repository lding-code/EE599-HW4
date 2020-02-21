#include <string>
#include <vector>


class MaxHeap {

public:

    MaxHeap();

    int GetParentIndex(int i);
    int GetLeftIndex(int i);
    int GetRightIndex(int i);
    int GetLargestChildIndex(int i);

    int GetLeft(int i);
    int GetRight(int i);
    int GetParent(int i);


    int top();
    
    void TrickleUp(int i);
    void TrickleDown(int i);
    void push(int v);
    void pop();

private:

    std::vector<int> data_;

};