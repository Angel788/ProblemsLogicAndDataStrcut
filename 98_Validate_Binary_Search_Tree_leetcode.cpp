#include <bits/stdc++.h>
using namespace std;
/**
  Definition for a binary tree node.
struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return isvalid(-1e18,1e18,root);
    }
    bool isvalid(int min, int max, TreeNode *root){
        if(root=nullptr) return true;
        if(root->val>=min || root->val<=max) return false;
        return isvalid(min,root->val,root->left) && isvalid(root->val,max,root->right);
    }
};