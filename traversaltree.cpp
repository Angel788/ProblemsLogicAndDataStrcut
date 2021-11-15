#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d){
            data=d;
            left=nullptr;
            right=nullptr;
        }
};
void postOrder(Node *root){
    if(root!=nullptr){
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->data;
    }
}
void preOrder(Node *root){
    if(root!=nullptr){
        cout<<root->data;
        preOrder(root->left);
        preOrder(root->right);
    }
}
void inOder(Node *root){
    if(root!=nullptr){
        inOder(root->left);
        cout<<root->data;
        inOder(root->right);
    }
}
int main() {
    
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }
  
    myTree.postOrder(root);

    return 0;
}
