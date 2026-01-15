// 1 /////// LEVEL ORDER TRAVERSAL (USING QUEUE) /////////////////////////////
// class Solution {
// public:
    // void levelo(TreeNode* root,vector<vector<int>>& ans){
    //     if(root == NULL) return;
    //     queue<TreeNode*> q;
    //     q.push(root);
    //     while(q.size() > 0){
    //         int n = q.size();
    //         vector<int> v;
    //         for(int i=0;i<n;i++){
    //             TreeNode* temp = q.front();
    //             q.pop();
    //             v.push_back(temp->val);

    //             if(temp->left != NULL) q.push(temp->left);
    //             if(temp->right != NULL) q.push(temp->right);
    //         }
    //         ans.push_back(v);
    //     }
    // } 
//     vector<vector<int>> levelOrder(TreeNode* root) {
//       vector<vector<int>> ans;
//       levelo(root,ans);
//       return ans;  
//     }
// };
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//// 2 ..... LEVEL ORDER TRAVERSAL (RIGHT OT LEFT)  ///////////////////
// #include<iostream>
// #include<climits>
// #include<queue>
// using namespace std;
// class node{
//     public: 
//     int val;
//     node* left;
//     node* right;
//     node(int val){
//       this->val = val;
//       this->left = NULL;
//       this->right = NULL;
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
//         if(arr[i] != INT_MIN)   l = new node(arr[i]);
//         else l = NULL;
//         if(j != n && arr[j] != INT_MIN)   r = new node(arr[j]);
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

// void levelorder(node* root){
//     if(root == NULL) return;
//     queue<node*> q;
//     q.push(root);
//     while(q.size() > 0){
//     node* temp = q.front();
//     q.pop();
//     cout<<temp->val<<" ";
//     if(temp->right != NULL) q.push(temp->right);
//     if(temp->left != NULL) q.push(temp->left);
//     }
//     cout<<endl;
// }

// int main() {
//     int arr[] = {1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN , 7,8,9};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     node* root = construct(arr,n);
   
//     levelorder(root);
//     cout<<endl;
// return 0;
// }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////// ZIGZAG LEVEL ORDER /////////////////////////////////////////////////////////////////
// class Solution {
// public:
//     int levels(TreeNode* root){
//         if(root == NULL) return 0;
//         return 1 + max(levels(root->left) , levels(root->right));
//     }
//     void nthlevel(TreeNode* root,int curr,int level,vector<int>& v,bool leftToright){
//         if(root == NULL ) return ;
//         if(curr == level){                                   
//             v.push_back(root->val);
//             return;
//         }
//         if(leftToright){
//             nthlevel(root->left,curr+1,level,v,leftToright);
//             nthlevel(root->right,curr+1,level,v,leftToright);
//         }
//         else{
//             nthlevel(root->right,curr+1,level,v,leftToright);
//             nthlevel(root->left,curr+1,level,v,leftToright);
//         }
        
//     }
//     void lorder(TreeNode* root,vector<vector<int>>& ans){
//         int n = levels(root);    
//         bool leftToright = true;            
//         for(int i=1;i<=n;i++){
//             vector<int> v;
//             nthlevel(root,1,i,v,leftToright);  
//             ans.push_back(v);                        
//             cout<<endl;
//             leftToright = !leftToright;
//         }
//     }
//     vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
//         vector<vector<int>> ans;
//         lorder(root,ans);
//         return ans;
//     }
// };

///////////////////////////////////////////////////
/// DIAMETER OF BINARY TREE BY USING O(N) TIME COMPLEXCITY