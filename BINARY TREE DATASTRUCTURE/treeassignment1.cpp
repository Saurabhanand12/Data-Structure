// ///////////////////1. Find the product of all values in Binary Tree///////////////////////////////////////////////////
// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int val;
//     node* left;
//     node* right;
//     node(int val){
//         this->val = val;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// void display(node* root){
//     if(root == NULL) return ;
//     cout<<root->val<<" ";
//     display(root->left);
//     display(root->right);
// }
// int product(node* root){
//     if(root == NULL) return 1;
//     int leftp = product(root->left);
//     int rightp = product(root->right);
//     return root->val *leftp * rightp;
// }

// int main() {
//     node* a = new node(1);
//     node* b = new node(2);
//     node* c = new node(3);
//     node* d = new node(4);
//     node* e = new node(5);
//     node* f = new node(6);
//     node* g = new node(7);

//     a -> left = b;
//     a -> right = c;
//     b -> left = d;
//     b-> right = e;
//     c -> left = f;
//     c -> right = g;
//     display(a);
//     cout<<endl;
//     cout<<product(a)<<endl;

// return 0;
// }
////////2. Find the min value in Binary Tree////////////////////////////////////////////////////////////////////////
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
//         this->right = NULL;
//     }
// };
// void display(node* root){
//     if(root == NULL) return ;
//     cout<<root->val<<" ";
//     display(root->left);
//     display(root->right);
// }
// int min(node* root){
//     if(root == NULL) return INT_MAX;
//     int left = min(root->left);
//     int right = min(root->right);
//     return min(root->val, min(left,right));
// }

// int main() {
//     node* a = new node(-1);
//     node* b = new node(2);
//     node* c = new node(3);
//     node* d = new node(4);
//     node* e = new node(5);
//     node* f = new node(6);
//     node* g = new node(7);

//     a -> left = b;
//     a -> right = c;
//     b -> left = d;
//     b-> right = e;
//     c -> left = f;
//     c -> right = g;
//     display(a);
//     cout<<endl;
//     cout<<min(a)<<endl;

// return 0;
// }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////3 BALANCE BINARY TREE /////////////////////////////////////////////////////////////////////////////////////////////////////////
// class Solution {
// public:
//     int level(TreeNode* root){
//         if(root == NULL) return 0;
//         return 1 + max(level(root->left), level(root->right));
//     }
//     bool isBalanced(TreeNode* root) {
//        if(root == NULL)  return true;
//        int leftl =   level(root->left);
//        int rightl =  level(root->right);
//        int bal = abs(leftl - rightl);        //abs is use for positive value
//        if(bal > 1) return false;
//        bool leftans = isBalanced(root->left);
//         if(leftans==false) return false;
//         bool rightans= isBalanced(root->right);
//         if(rightans==false) return false;
//        return true;
//     }
// };
/////4 symmetric  Tree/////////////////////////////////////////////////////////////////////////////////////////////////////////////
// class Solution {
// public:
//     TreeNode* invertTree(TreeNode* root) {
//         if(root == NULL ) return NULL;
//         TreeNode* temp = root->left;
//         root->left = root->right;
//         root->right = temp;
//         invertTree(root->left);
//         invertTree(root->right);
//         return root;
//     }
//     bool isSameTree(TreeNode* p, TreeNode* q) {
//         if(p == NULL && q == NULL) return true;
//         if(p == NULL || q == NULL ) return false;
//         if(p->val != q->val) return false;
//         return isSameTree(p->left, q->left) && isSameTree(p->right, q->right); 
//     }
//     bool isSymmetric(TreeNode* root) {
//         if(root == NULL) return root;
//         invertTree(root->left);
//         bool flag = isSameTree(root->left,root->right);
//         invertTree(root->left);
//         return flag;
//     }
// };