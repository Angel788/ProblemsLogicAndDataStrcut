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
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> nums;
        if(root!=nullptr){
            queue<TreeNode*>Queue;
            Queue.append(root);
            while(!Queue.empty()){
                int size=Queue.size();
                for(int i=1;i<=size;i++){
                    auto node=Queue.front();
                    Queue.pop();
                    if(i==size) nums.push_back(node.val);
                    if(node.left!=nullptr) Queue.append(node.left);
                    if(node.right!=nullptr) Queue.append(node.right);
                }
            }
        }
        return nums;
    }
};

