// #include<iostream>
// #include<climits>
// using namespace std;
// class node{
//     public:
//     int val;
//     node* left;
//     node* right;
//     node(int val){
//         this->val = val;
//         this->left = NULL;
//         this-> right =NULL;
//     }
// };
// void displaytree(node* root){
//     if(root == NULL ) return ;                          // BASE CASE 
//     cout<<root->val<<" ";
//     displaytree(root->left);                            // LEFT CALL
//     displaytree(root->right);                           // RIGHT CALL
// }
// int sum(node* root){
//     if(root == NULL) return 0;                                  ///SUM
//     return root->val + sum(root->left) + sum(root->right);
// }
// int size(node* root){                                             //SIZE
//     if(root == NULL) return 0;
//     return 1 + size(root->left) + size(root->right);        
// }
// int max(node* root){
//     if(root == NULL) return INT_MIN;                              // MAX
//     int lmax = max(root->left);
//     int rmax = max(root->right);
//     return max(root->val,max(lmax,rmax));
// }
// int levels(node* root){                                            //LEVEL
//     if(root == NULL) return 0;
//     return 1 + max(levels(root->left) , levels(root->right));
// }

// int main() {
//     node* a = new node(1);
//     node* b = new node(2);
//     node* c = new node(3);
//     node* d = new node(4);
//     node* e = new node(5);
//     node* f = new node(6);
//     node* g = new node(20);

//     a->left = b;
//     a->right = c;
//     b->left = d;
//     b->right = e;
//     c->left = f; 
//     c->right = g;

//     displaytree(a);
//     cout<<endl;

//     cout<<sum(a)<<endl;
//     cout<<size(a)<<endl; 
//     cout<<max(a)<<endl;
//     cout<<levels(a)<<endl; 

// return 0;
// }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// // DIAMETER OF BINARY TREE///////
// class Solution {
// public:
//     int levels(TreeNode* root){
//         if(root == NULL) return 0;
//         return 1 + max(levels(root->left) , levels(root->right));
//     }
//     void helper(TreeNode* root,int &maxdia){
//         if(root ==NULL) return ;
//         int dia =levels(root->left) + levels(root->right);
//         maxdia = max(maxdia,dia);
//         helper(root->left,maxdia);
//         helper(root->right,maxdia);
//     }
//     int diameterOfBinaryTree(TreeNode* root) {
//         int maxdia =0;
//         helper(root,maxdia);
//         return maxdia;
//     }
// };
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// ////// SAME TREE ///////////////////////////////////////////////////*** */ 
// class Solution {
// public:
    // bool isSameTree(TreeNode* p, TreeNode* q) {
    //     if(p == NULL && q == NULL) return true;
    //     if(p == NULL || q == NULL ) return false;
        
    //     if(p->val != q->val) return false;
    //     bool leftans = isSameTree(p->left , q->left);
    //     if(leftans == false) return false;
    //     bool rightans = isSameTree(p->right , q->right);
    //     if(rightans == false) return false;
    //     return true;
    // }
// };
