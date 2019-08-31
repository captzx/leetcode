/*
 * @lc app=leetcode id=257 lang=cpp
 *
 * [257] Binary Tree Paths
 *
 * https://leetcode.com/problems/binary-tree-paths/description/
 *
 * algorithms
 * Easy (46.99%)
 * Likes:    991
 * Dislikes: 75
 * Total Accepted:    242.5K
 * Total Submissions: 516.2K
 * Testcase Example:  '[1,2,3,null,5]'
 *
 * Given a binary tree, return all root-to-leaf paths.
 * 
 * Note: A leaf is a node with no children.
 * 
 * Example:
 * 
 * 
 * Input:
 * 
 * ⁠  1
 * ⁠/   \
 * 2     3
 * ⁠\
 * ⁠ 5
 * 
 * Output: ["1->2->5", "1->3"]
 * 
 * Explanation: All root-to-leaf paths are: 1->2->5, 1->3
 * 
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        std::vector<std::string> result;

        if(root == nullptr) return result;

        std::string path;
        binaryTreePaths(root, path, result);
        
        return result;
    }
    void binaryTreePaths(TreeNode* root, string path, vector<string>& result){
        if(root == nullptr) return;

        if(!path.empty()) path += "->";
        path+= to_string(root->val);
        
        if(root->left == nullptr && root->right == nullptr) {
            result.push_back(path);
            return;
        }
        else{
            if(root->left) binaryTreePaths(root->left, path, result);
            if(root->right)binaryTreePaths(root->right, path, result);
        }
    }
    // √ Accepted
    // √ 209/209 cases passed (8 ms)
    // √ Your runtime beats 23.39 % of cpp submissions
    // √ Your memory usage beats 68.42 % of cpp submissions (11.8 MB)
};

