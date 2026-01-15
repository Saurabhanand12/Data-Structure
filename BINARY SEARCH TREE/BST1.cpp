/////// SEARCH IN BINARY SEARCH TREE ///////////////////////////////
// class Solution {
// public:
//     TreeNode* searchBST(TreeNode* root, int val) {
//        if(root == NULL || root->val == val) return root;                // TC = O(logn) = O(h) = SP
//        else if(root->val > val) return searchBST(root->left,val);
//        else return searchBST(root->right,val);
//     }
// };
//////////////////////////////////////////////////////////////////////////////////////////////////////
///// INSERT INTO A BINARY SEARCH TREE /////////////////////////
// class Solution {
// public:
    // TreeNode* insertIntoBST(TreeNode* root, int val) {
    //    if(root == NULL ) return new TreeNode(val);
    //    else if(root->val > val){
    //     if(root->left == NULL){
    //         TreeNode* temp = new TreeNode(val);
    //         root->left = temp;
    //         return root;
    //     }
    //     else  insertIntoBST(root->left,val);
    //    }
    //    else{
    //     if(root->right == NULL){
    //         TreeNode* temp = new TreeNode(val);
    //         root->right = temp;
    //         return root;
    //     }
    //     else  insertIntoBST(root->right,val);
    //    }
    //    return root;
    // }
// };
/////////// LOWEST COMMON ANCESTOR //////////////////
// class Solution {
// public:
//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//         if(root->val == p->val || root->val == q->val) return root;
//         else if(root->val > p->val && root->val < q->val) return root;
//         else if(root->val < p->val && root->val > q->val) return root;
//         else if(root->val > p->val && root->val > q->val)  return lowestCommonAncestor(root->left,p,q);
//         else return lowestCommonAncestor(root->right,p,q);
//     }
// };

//////////////////////////////////////////////////////////////////////////////////////////////////////////
////// VALIDATE BINARY SEARCH TREE /////////////
// class Solution {
// public:
//     bool isPossible(TreeNode* root, long long l, long long r){
//     if(root  == NULL ) return true;
//         if(root->val < r and root->val > l)    return isPossible(root->left, l, root->val) and  isPossible(root->right, root->val, r);
//         else return false;         
//     }                                                                         
//         bool isValidBST(TreeNode* root) {
//         long long int min = -1000000000000, max = 1000000000000;                   ///FIRST METHOD
//         return isPossible(root, min, max);
//     }
// };
///////////////////////////
// class Solution {
// public:
//     void inorder(TreeNode* root,TreeNode* &prev,bool &flag){
//         if(root == NULL ) return ;
//         inorder(root->left,prev,flag);
//         if(prev != NULL){
//             if(root->val <= prev->val){
//                 flag = false;
//                 return;                                     ////// SECOND METHOD
//             }
//         }
//         prev = root;
//         inorder(root->right,prev,flag);
//     }
//     bool isValidBST(TreeNode* root) {
//         TreeNode* prev = NULL;
//         bool flag = true;
//         inorder(root,prev ,flag);
//         return flag;
//     }
// };