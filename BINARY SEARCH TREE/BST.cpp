#include<iostream>
#include<vector>
using namespace std;

class node{
public:
    int val;
    node* left;
    node* right;
    node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

node* insertBST(node* root,int val){
    if(root == NULL) return new node(val);

    if(val < root->val) root->left = insertBST(root->left,val);
    else root->right = insertBST(root->right,val);

    return root;
}

node* BuildBST(vector<int> arr){
    node* root = NULL;
    for(int val : arr){
        root = insertBST(root,val);
    }
    return root;
}

void inorder(node* root){
    if(root == NULL) return;

    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}

int main() {
    vector<int> arr = {3,2,1,5,4,6};

    node* root = BuildBST(arr);
    inorder(root);
    cout<<endl;
    
return 0;
}