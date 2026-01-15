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
// void preorder(node* root){            /// TC = O(n) AND SP = O(h) ~ O(n)~ O(LOGn) FOR ALL CASES
//     if(root == NULL ) return ;                 // FOR CALL STACK IN RECURSION
//     cout<<root->val<<" ";
//     preorder(root->left);
//     preorder(root->right);
// }
// void inorder(node* root){
//     if(root == NULL ) return ;
//     inorder(root->left);
//     cout<<root->val<<" ";
//     inorder(root->right);
// }
// void postorder(node* root){
//     if(root == NULL ) return ;
//     postorder(root->left);
//     postorder(root->right); 
//     cout<<root->val<<" ";
// }
// void nthlevel(node* root,int curr,int level){
//     if(root == NULL ) return ;
//     if(curr == level)  cout<<root->val<<" ";
//     nthlevel(root->left,curr+1,level);
//     nthlevel(root->right,curr+1,level);
// }

// int main() {
//     node* a = new node(1);
//     node* b = new node(2);
//     node* c = new node(3);
//     node* d = new node(4);
//     node* e = new node(5);
//     node* f = new node(6);
//     node* g = new node(7);

//     a->left = b;
//     a->right = c;
//     b->left = d;
//     b->right = e;
//     c->left = f; 
//     c->right = g;

    // preorder(a);
    // cout<<endl;
    // inorder(a);
    // cout<<endl;
    // postorder(a);
    // cout<<endl;
//     nthlevel(a,1,3);
//     cout<<endl;

// return 0;
// }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
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
// int levels(node* root){
//     if(root == NULL) return 0;
//     return 1 + max(levels(root->left) , levels(root->right));
// }
// void nthlevel(node* root,int curr,int level){
//     if(root == NULL ) return ;
//     if(curr == level){                                    // PRINT SINGLE LEVEL NODE
//         cout<<root->val<<" ";
//         return;
//     }
//     nthlevel(root->left,curr+1,level);
//     nthlevel(root->right,curr+1,level);
// }
// void nthlevelrev(node* root,int curr,int level){
//     if(root == NULL ) return ;
//     if(curr == level){                                   // USE nthlevelrev FOR REVERSE IN nthlevel;
//         cout<<root->val<<" ";
//         return;
//     }
//     nthlevelrev(root->right,curr+1,level);
//     nthlevelrev(root->left,curr+1,level);
// }
// void levelorder(node* root){
//     int n = levels(root);                
//     for(int i=1;i<=n;i++){
//        nthlevel(root,1,i);                           
//         cout<<endl;
//     }
// }
// void levelorderqueue(node* root){       // BFS  //VIMP
//     queue<node*> q;
//     q.push(root);
//     while(q.size() > 0){
//         node* temp = q.front();
//         q.pop();
//         cout<<temp->val<<" ";
//         if(temp->left != NULL) q.push(temp->left);
//         if(temp->right != NULL) q.push(temp->right);
//     }
//     cout<<endl;
// }

// int main() {
//     node* a = new node(1);
//     node* b = new node(2);
//     node* c = new node(3);
//     node* d = new node(4);
//     node* e = new node(5);
//     node* f = new node(6);
//     node* g = new node(7);

//     a->left = b;
//     a->right = c;
//     b->left = d;
//     b->right = e;
//     c->left = f; 
//     c->right = g;

//     // nthlevel(a,1,1);
//     // nthlevel(a,1,2);
//     // nthlevel(a,1,3);
//     // cout<<endl;
//     // nthlevelrev(a,1,3);
//     // cout<<endl;
//     // levelorder(a);
//     levelorderqueue(a);

// return 0;
// }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////  Level Order Traversal /////////////////////////////////////////
// class Solution {
// public:
//     int levels(TreeNode* root){
//     if(root == NULL) return 0;
//     return 1 + max(levels(root->left) , levels(root->right));
//     }
//     void nthlevel(TreeNode* root,int curr,int level,vector<int>& v){
//     if(root == NULL ) return ;
//     if(curr == level){                                   
//         v.push_back(root->val);
//         return;
//     }
//     nthlevel(root->left,curr+1,level,v);
//     nthlevel(root->right,curr+1,level,v);
//     }
//     void lorder(TreeNode* root,vector<vector<int>>& ans){
//     int n = levels(root);                
//     for(int i=1;i<=n;i++){
//         vector<int> v;
//         nthlevel(root,1,i,v);  
//         ans.push_back(v);                        
//         cout<<endl;
//     }
// }
//     vector<vector<int>> levelOrder(TreeNode* root) {
//         vector<vector<int>> ans;
//         lorder(root,ans);
//         return ans;
//     }
// };

