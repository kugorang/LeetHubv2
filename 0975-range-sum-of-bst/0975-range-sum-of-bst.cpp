/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    int lowValue;
    int highValue;
    int sum = 0;
public:
    void findValue(TreeNode *node)
    {
        if (node->val >= lowValue && node->val <= highValue)
            sum += node->val;

        if (node->left)
            findValue(node->left);

        if (node->right)
            findValue(node->right);
    }

    int rangeSumBST(TreeNode* root, int low, int high)
    {
        lowValue = low;
        highValue = high;
        findValue(root);

        return sum;
    }
};