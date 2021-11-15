//#include <bits/stdc++.h>
/**
 * Definition for a binary tree node.
struct TreeNode {
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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> paths;
        vector<int> path;
        int curr_sum=0;
        if(root!=nullptr)
            aux(root,paths,path,targetSum,curr_sum);
        return paths;    
    }
    void aux(TreeNode *root,vector<vector<int>> &paths,vector<int> &path,int sum,int curr_sum){
        if(root!=nullptr){
        curr_sum+=root->val;
        path.push_back(root->val);
        if(root->left==nullptr && root->right==nullptr && curr_sum==sum){
             paths.push_back(path);
            path.pop_back();
            return;
        }
        else{
            if(root->left!=nullptr)aux(root->left, paths, path, sum, curr_sum);
            if(root->right!=nullptr)aux(root->right, paths, path, sum,curr_sum);
        }
            path.pop_back();
        }
    }
};
