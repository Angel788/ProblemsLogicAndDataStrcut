#include<bits/stdc++.h>
#include <algorithm>
using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
                }

               return root;
           }
        }

/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/
    void topView(Node * root) {
       queue<pair<int,Node *>> qtree;
       multimap<int,int> vaalues;
       qtree.push(make_pair(0,root));
       while(!qtree.empty()){
           auto i=qtree.front();
           qtree.pop();
           if(!vaalues.count(i.first)){
               vaalues.insert(make_pair(i.first,i.second->data));
           }
           if(i.second->left!=nullptr){
               qtree.push(make_pair((i.first)-1,i.second->left));
           }
           if(i.second->right!=nullptr){
               qtree.push(make_pair((i.first)+1,i.second->right));
           }
       }
       for(auto &elem:vaalues){
           cout<<elem.second<<" ";
       }
       cout<<endl;
   }

}; //END OF SOLUTION

int main() {
    
    SOLUTION MYTREE;
    NODE* ROOT = NULL;
    
    INT T;
    INT DATA;

    STD::CIN >> T;

    WHILE(T-- > 0) {
        STD::CIN >> DATA;
        ROOT = MYTREE.INSERT(ROOT, DATA);
    }
  
    MYTREE.TOPVIEW(ROOT);

    RETURN 0;
}

