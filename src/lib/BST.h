#include <vector>


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};


class BST {
public:
    BST();

    BST(std::vector<int> initial_values);

    ~BST();

    void push(int key);
    bool find(int key);
    bool erase(int key);

    std::vector<int> toVector();

private:
    TreeNode *root_;
    bool empty_;
};