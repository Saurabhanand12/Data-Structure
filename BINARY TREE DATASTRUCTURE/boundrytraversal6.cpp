// #include<iostream>
// #include<queue>
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
// node* construct(int arr[] , int n){
//     queue<node*> q;
//     node* root = new node(arr[0]);
//     q.push(root);
//     int i=1;
//     int j=2;
//     while(q.size() > 0 && i< n){
//         node* temp = q.front();
//         q.pop();
//         node* l;
//         node* r;
//         if(arr[i] != INT_MIN) l = new node(arr[i]);
//         else l = NULL;
//         if(j != n && arr[j] != INT_MIN) r = new node(arr[j]);
//         else r = NULL;

//         temp->left = l;
//         temp->right = r;

//         if(l != NULL) q.push(l);
//         if(r != NULL) q.push(r);

//         i += 2;
//         j += 2;
//     }
//     return root;
// }
// int levels(node* root){
//     if(root == NULL) return 0;
//     return 1 + max(levels(root->left) , levels(root->right));
// }
// void nthlevel(node* root,int curr,int level){
//     if(root == NULL ) return ;
//     if(curr == level){                                    
//         cout<<root->val<<" ";
//         return;
//     }
//     nthlevel(root->left,curr+1,level);
//     nthlevel(root->right,curr+1,level);
// }
// void levelorder(node* root){
//     int n = levels(root);                
//     for(int i=1;i<=n;i++){
//        nthlevel(root,1,i);                           
//         cout<<endl;
//     }
// }
// void leftboundary(node* root){
//     if(root == NULL) return;
//     if(root->left == NULL && root->right == NULL) return;
//     cout<<root->val<<" ";
//     leftboundary(root->left);
//     if(root->left == NULL)  leftboundary(root->right);
// }
// void bottomboundary(node* root){
//     if(root == NULL) return;
//     if(root->left == NULL && root->right == NULL)  cout<<root->val<<" ";
//     bottomboundary(root->left);
//     bottomboundary(root->right);
// }
// void rightboundary(node* root){
//     if(root == NULL) return;
//     if(root->left == NULL && root->right == NULL) return;
//     rightboundary(root->right);
//     if(root->right == NULL)  rightboundary(root->left);
//     cout<<root->val<<" ";
// }

// int main() {
//     int arr[] = {1,2,3,4,5,INT_MIN,6,7,INT_MIN,8,INT_MIN,9,10,INT_MIN,11,INT_MIN ,12,INT_MIN,13,INT_MIN,14,15,16,INT_MIN,17,INT_MIN,INT_MIN,18,INT_MIN,19,INT_MIN,INT_MIN,INT_MIN,20,21,22,23,INT_MIN,24,25,26,27,INT_MIN,28,INT_MIN,INT_MIN };
//     int n = sizeof(arr) / sizeof(arr[0]);
//     node* root = construct(arr,n);
   
//     // levelorder(root);
//     leftboundary(root);
//     bottomboundary(root);
//     rightboundary(root->right);

// return 0;
// }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//// BINARY TREE RIGHT SIDE VIEW /////////////////////////////////////////
// class Solution {
// public:
//     int levels(TreeNode* root){
//     if(root == NULL) return 0;
//     return 1 + max(levels(root->left) , levels(root->right));
//     }
//     void nthlevel(TreeNode* root,int curr,int level,vector<int>& ans){
//         if(root == NULL ) return ;
//         if(curr == level){                                    
//             ans[curr] = root->val;
//             return;
//         }
//         nthlevel(root->left,curr+1,level,ans);                     // FIRST METHOD
//         nthlevel(root->right,curr+1,level,ans);  
//     }
//     void levelorder(TreeNode* root,vector<int>& ans){
//         int n = ans.size();                
//         for(int i=0;i<n;i++){
//             nthlevel(root,0,i,ans);                           
//             cout<<endl;
//         }
//     }
//     vector<int> rightSideView(TreeNode* root) {
//         vector<int> ans(levels(root) ,0);
//         levelorder(root,ans);
//         return ans; 
//     }
// };
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// class Solution {
// public:
//     int levels(TreeNode* root){
//     if(root == NULL) return 0;
//     return 1 + max(levels(root->left) , levels(root->right));
//     }
//     void preorder(TreeNode* root,vector<int>& ans,int level){
//         if(root == NULL)  return;                                 // SECOND METHODE
//         ans[level] = root->val;
//         preorder(root->left,ans,level+1);
//         preorder(root->right,ans,level+1);
//     }
//     vector<int> rightSideView(TreeNode* root) {
//         vector<int> ans(levels(root) ,0);
//         preorder(root,ans,0);
//         return ans;
//     }
// };