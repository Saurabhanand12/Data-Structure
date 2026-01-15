// //// HEAPIFY ALGORITHM 
// #include<iostream>
// using namespace std;
// void print(int arr[] , int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// void heapify(int i,int arr[],int n){            /// using min heap
//     while(true){
//         int left = 2*i,right = 2*i+1;
//         if(left>= n) break;
//         if(right >= n ){
//             if(arr[i] > arr[left]){
//                 swap(arr[i],arr[left]);
//                 i = left;
//             }
//             break;
//         }
//         if(arr[left] < arr[right]){
//             if(arr[i] > arr[left]){
//                 swap(arr[i],arr[left]);
//                 i = left;
//             }
//             else break;
//         }
//         else{
//             if(arr[i] > arr[right]){
//                 swap(arr[i],arr[right]);
//                 i = right;
//             }
//             else break;
//         }
//     }
// } 

// int main() {
//     int arr[] = {-1,10,2,14,11,1,4};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     print(arr,n);
//     for(int i=n/2;i>=1;i--){
//         heapify(i,arr,n);
//     }
//     print(arr,n);

// return 0;
// }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
///// CONVERT BINARY SEARCH TREE TO MIN HEAP
// #include<iostream>
// #include<vector>
// #include<queue>
// using namespace std;
// class node{
// public: 
//     int val;
//     node* left;
//     node* right;
//     node(int val){
//         this -> val = val;
//         this ->left = NULL;
//         this ->right = NULL;
//     }
// };
// void preorder(node* root,vector<int>& arr, int& i){
//     if(root==NULL) return;
//     root->val = arr[i++];
//     preorder(root->left,arr,i);
//     preorder(root->right,arr,i);
// }

// void inorder(node* root, vector<int>& arr){
//     if(root==NULL) return;
//     inorder(root->right,arr);
//     arr.push_back(root->val);
//     inorder(root->left,arr);
// }
// void levelorder(node* root){       // BFS  
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
//     node* a = new node(10);
//     node* b = new node(5);
//     node* c = new node(16);
//     node* d = new node(1);
//     node* e = new node(8);
//     node* f = new node(12);
//     node* g = new node(20);
//     a->left = b; 
//     a->right = c;
//     b->left = d; 
//     b->right = e;
//     c->left = f; 
//     c->right = g;
//     vector<int> arr; //reverse inorder
//     inorder(a,arr);
//     levelorder(a);

//     int i=0;
//     preorder(a,arr,i);
//     ///print level order bst -> max heap
//     levelorder(a);
// return 0;
// }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////// CHECK IF BINARY TREE IS A MAXHEAP OR NOT 
// #include<iostream>
// #include<queue>
// using namespace std;
// class node{
// public: 
//     int val;
//     node* left;
//     node* right;
//     node(int val){
//         this -> val = val;
//         this ->left = NULL;
//         this ->right = NULL;
//     }
// };
// bool isMax(node* root){
//     if(root == NULL) return true;
//     if(root->left != NULL && root->val < root->left->val) return false;
//     if(root->right != NULL && root->val < root->right->val) return false;
//     return isMax(root->left) && isMax(root->right);
// }
// int sizeoftree(node* root){
//     if(root == NULL) return 0;
//     return 1 + sizeoftree(root->left) + sizeoftree(root->right);
// }
// bool isCBT(node* root){       // BFS  
//     int size = sizeoftree(root);
//     int count =0;
//     queue<node*> q;
//     q.push(root);
//     while(count < size){
//         node* temp = q.front();
//         q.pop();
//         count++;
//         if(temp != NULL){
//             q.push(temp->left);
//             q.push(temp->right);
//         }
//     }
//     if(q.size() > 0){
//         node* temp = q.front();
//         if(temp != NULL) return false;
//         q.pop();
//     }
//     return true;
// }
// int main() {
//     node* a = new node(20);
//     node* b = new node(15);
//     node* c = new node(10);
//     node* d = new node(8);
//     node* e = new node(11);
//     node* f = NULL;
//     node* g = new node(6);
//     a->left = b; 
//     a->right = c;
//     b->left = d; 
//     b->right = e;
//     c->left = f; 
//     c->right = g;
    
//     if(isCBT(a) && isMax(a)) cout<<"TREE IS A MAX HEAP"<<endl;
//     else cout<<"TREE IS NOT A MAX HEAP"<<endl;
// return 0;
// }