/// PREORDER BY ITREATIVE METHOD USING  1 STACK ////////////////////////////////////
// class Solution {
// public:
//     vector<int> preorderTraversal(TreeNode* root) {
//         vector<int> ans;
//         stack<TreeNode*> st;
//         if(root != NULL) st.push(root);
//         while(st.size() > 0){
//             TreeNode* temp = st.top();
//             st.pop();
//             ans.push_back(temp->val);
//             if(temp->right != NULL) st.push(temp->right);
//             if(temp->left != NULL) st.push(temp->left);
//         }
//         return ans;
//     }
// };
///////////////////////////////////////////////////////
/// POSTORDER  BY USING STACK///////
// class Solution {
// public:
//     vector<int> postorderTraversal(TreeNode* root) {
//        vector<int> ans;
//         stack<TreeNode*> st;
//         if(root != NULL) st.push(root);
//         while(st.size() > 0){
//             TreeNode* temp = st.top();
//             st.pop();
//             ans.push_back(temp->val);
//             if(temp->left != NULL) st.push(temp->left);
//             if(temp->right != NULL) st.push(temp->right);
//         }
//         reverse(ans.begin(),ans.end());
//         return ans;
//     }
// };
////////////////////////////////////////////////////////////
//////// INORDER BY USING STACK////////////////////
// class Solution {
// public:
//     vector<int> inorderTraversal(TreeNode* root) {
//         vector<int> ans;
//         stack<TreeNode*> st;
//         TreeNode* node = root;
//         while(st.size() >0 || node){
//             if(node != NULL){
//                 st.push(node);
//                 node = node->left;
//             }
//             else{
//                 TreeNode* temp = st.top();
//                 st.pop();
//                 ans.push_back(temp->val);
//                 node = temp -> right;
//             }
//         }
//         return ans;
//     }
// };