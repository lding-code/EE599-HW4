#include <iostream>


#include "src/lib/solution.h"

#include "src/lib/MaxHeap.h"

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

int main(int argc, char* argv[]) {
    Solution solution;
    std::cout << solution.HelloWorld() << std::endl;

    MaxHeap maxheap;


    TreeNode *ptra = new TreeNode(1);
    TreeNode *ptrb = new TreeNode(2);
    (*ptra).left = ptrb;
    delete ptrb;
    std::cout << "pointer test" << std::endl;
    if (ptra == nullptr) {
        std::cout << "nullptr" << std::endl;
    }
    else {
        std::cout << "not nullptr" << std::endl;
    }
    
    return EXIT_SUCCESS;
}