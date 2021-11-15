/* Definition for a binary tree node.
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };*/
class Solution {
public:
    vector<TreeNode*> generateTrees(int n) {
       return helper(1,n);
    }
    vector<TreeNode *> helper(int start,int end){
        vector<TreeNode *>ans;
        if(start>end){
            ans.push_back(NULL);
            return ans;
        }
        if(end==start){
            TreeNode *node=new TreeNode(start);
            ans.push_back(node);
            return ans;
        }
        for(int i=start;i<=end;i++){
            vector<TreeNode *> left=helper(start,i-1);
            vector<TreeNode *> right=helper(i+1,end);
            for(auto l:left){
                for(auto r:right){
                    TreeNode *node=new TreeNode(i);
                    node->left=l;
                    node->right=r;
                    ans.push_back(node);
                }
            }
        }
        return ans;
    }
};