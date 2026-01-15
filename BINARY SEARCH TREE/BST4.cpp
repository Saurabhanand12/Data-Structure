//////////// TRIM A BINARY SEARCH TREE ///////////////////////
// class Solution {
// public:
//     void trim(TreeNode* root, int lo, int hi){          ///low and high is the range 
//         if(root == NULL ) return;
//         while(root->left != NULL){
//             if(root->left->val < lo){
//                 root->left = root->left->right;
//             }
//             else if(root->left->val > hi){
//                 root->left = root->left->left;
//             }
//             else break;
//         }
//         while(root->right != NULL){
//             if(root->right->val > hi){
//                 root->right = root->right->left;
//             }
//             else if(root->right->val < lo){
//                 root->right = root->right->right;
//             }
//             else break;
//         }
//         trim(root->left,lo,hi);
//         trim(root->right,lo,hi);
//     }
//     TreeNode* trimBST(TreeNode* root, int lo, int hi) {
//         TreeNode* dummy = new TreeNode(INT_MAX);
//         dummy->left = root;
//         trim(dummy,lo,hi);
//         return dummy->left;
//     }
// };
//////////////////////////// MORRIS TRAVERSAL INORDER TRAVARSAL ********************V V   IMP////////////////////////////////////
// class Solution {
// public:
//     vector<int> inorderTraversal(TreeNode* root) {
//         vector<int> ans;
//         TreeNode* curr = root;
//         while(curr != NULL){
//             if(curr->left != NULL){             //// FIND THE PREDECCSOR
//                 TreeNode* pred = curr->left;
//                 while(pred->right != NULL && pred ->right!= curr){
//                     pred = pred ->right;
//                 }
//                 if(pred ->right == NULL){             // LINK
//                     pred ->right = curr;
//                     curr = curr->left;
//                 }
//                 else{
//                     pred ->right = NULL;             // UNLINK ..PRED->RIGHT ==CURR;
//                     ans.push_back(curr->val);
//                     curr = curr->right;
//                 }
//             }
//             else{
//                 ans.push_back(curr->val);
//                 curr = curr->right;
//             }
//         }
//         return ans;
//     }
// };
// ////////  FLATTEN BINARY TREE TO LINKED LIST ////////////////
// class Solution {
// public:
//     vector<TreeNode*> preorderTraversal(TreeNode* root) {
//         vector<TreeNode*> ans;
//         stack<TreeNode*> st;
//         if(root != NULL) st.push(root);
//         while(st.size() > 0){
//             TreeNode* temp = st.top();
//             st.pop();
//             ans.push_back(temp);
//             if(temp->right != NULL) st.push(temp->right);
//             if(temp->left != NULL) st.push(temp->left);                     ///// FIRST METHOD    TC = O(n) SC = O(n)
//         }
//         return ans;
//     }
//     void flatten(TreeNode* root) {
//         vector<TreeNode*> ans = preorderTraversal(root);
//         int n= ans.size();
//         for(int i=0;i<n-1;i++){
//             ans[i]->right = ans[i+1];
//             ans[i]->left = NULL;
//         }
//     }
// };
///////////////////////////////////////////////////////////
// class Solution {
// public:
//     void flatten(TreeNode* root) {
//        if(root == NULL ) return;
//        TreeNode* l = root->left;
//        TreeNode* r = root->right;
//        root->left = NULL;
//        root->right = NULL;                  //// SECOND METHOD BY RECURSIVE    TC = O(n) SC = O(n)
//        flatten(l);
//        flatten(r);
//        root->right = l;
//        TreeNode* temp = root;
//        while(temp->right != NULL) temp = temp->right;
//        temp->right = r;
//     }
// }; 
/////////////////////////////////////////////////////////////
// class Solution {
// public:
//     void flatten(TreeNode* root) {          // morris traversal
//        if(root == NULL ) return;
//        TreeNode* curr = root;
//       while(curr != NULL){
//         if(curr->left != NULL){
//             // save the right
//             TreeNode* r = curr->right;
//             curr->right = curr->left;
//             //finding pred 
//             TreeNode* pred = curr->left;                       //// THIRD METHOD   TC = O(n) SC = O(1)
//             while(pred->right != NULL) pred = pred->right;
//             //link
//             pred -> right = r;
//             curr= curr->left;
//         }
//         else curr = curr->right;
//       }
//       TreeNode* temp = root;
//       while(temp->right != NULL){
//         temp->left = NULL;
//         temp = temp->right;
//       }
//     }
// };