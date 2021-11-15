/**#include <bits/stdcc++.h>
/**
 * Definition for a binary tree node.
* struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 **/
class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum=0;
        if(root==nullptr) return sum;
        return calculateSum(root,low.high,sum);
    }
    int calculateSum(TreeNode *root,int low,int high,int sum){
        if(root==nullptr) return sum;
        if(root->val>=low && root->val<=high) sum+=root->val;
        calculateSum(root->left,low,high,sum);
        calculateSum(root->right,low,high,sum);
        return sum;
    }
};

