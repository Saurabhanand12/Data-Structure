//////// Binary Search Tree to Greater Sum Tree  ///////////////////////////////////////////  1038
// class Solution {
// public:
//     int sum =0;
//     void reverseinorder(TreeNode* root){
//         if(root == NULL) return;
//         reverseinorder(root->right);
//         root->val += sum;
//         sum = root->val;
//         reverseinorder(root->left);
//     }
//     TreeNode* bstToGst(TreeNode* root) {
//         reverseinorder(root);
//         return root;        
//     }
// };
////////////////////////////////////////////////////////////////////////////////////////////
///// Convert Sorted Array to Balanced BST /////////////////////////////////////
// class Solution {
// public:
//     TreeNode* helper(vector<int>& arr,int low,int high){
//         if(low > high) return NULL;
//         int mid = low +(high - low) /2;
//         TreeNode* root = new TreeNode(arr[mid]);
//         root->left = helper(arr,low,mid-1);
//         root->right = helper(arr,mid+1,high);
//         return root;
//     }
//     TreeNode* sortedArrayToBST(vector<int>& arr) {
//         int n= arr.size();
//         return helper(arr,0,n-1);
//     }
// };
////////////////////////////////////////////////////////////////////////////////////////////////
/////// Construct BST from preorder traversal //////////////////////////////
// class Solution {
// public:
//     TreeNode* insertIntoBST(TreeNode* root, int val) {
//        if(root == NULL ) return new TreeNode(val);
//        else if(root->val > val){
//         if(root->left == NULL){
//             TreeNode* temp = new TreeNode(val);
//             root->left = temp;
//             return root;
//         }
//         else  insertIntoBST(root->left,val);
//        }
//        else{
//         if(root->right == NULL){
//             TreeNode* temp = new TreeNode(val);
//             root->right = temp;
//             return root;
//         }
//         else  insertIntoBST(root->right,val);
//        }
//        return root;
//     }
//     TreeNode* bstFromPreorder(vector<int>& pre) {
//         int n = pre.size();
//         TreeNode* root = new TreeNode(pre[0]);
//         for(int i=1;i<n;i++){
//             insertIntoBST(root,pre[i]);
//         }
//         return root ;
//     }
// };
