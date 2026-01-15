// //////////////// INORDER PREDECESSOR OR SUCCESSOR
// #include <vector>
// #include <iostream>
// struct TreeNode {
//     int val;
//     TreeNode* left;
//     TreeNode* right;
//     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// };
// class Solution {
// public:
//     void inorder(TreeNode* root, std::vector<TreeNode*>& v) {
//         if (root == NULL) return;
//         inorder(root->left, v);
//         v.push_back(root);
//         inorder(root->right, v);
//     }
//     TreeNode* findPredecessorSuccessor(TreeNode* root, TreeNode* p, TreeNode*& predecessor, TreeNode*& successor) {
//         std::vector<TreeNode*> nodes;
//         inorder(root, nodes);
//         predecessor = NULL;
//         successor = NULL;

//         for (size_t i = 0; i < nodes.size(); i++) {
//             if (nodes[i]->val == p->val) {
//                 if (i > 0) {
//                     predecessor = nodes[i - 1];
//                 }
//                 if (i < nodes.size() - 1) {
//                     successor = nodes[i + 1];
//                 }
//                 break;
//             }
//         }
//         return p;
//     }
// };
// TreeNode* insert(TreeNode* root, int val) {
//     if (root == NULL) {
//         return new TreeNode(val);
//     }
//     if (val < root->val) {
//         root->left = insert(root->left, val);
//     } else {
//         root->right = insert(root->right, val);
//     }
//     return root;
// }
// int main() {
//     // Create the BST
//     TreeNode* root = NULL;
//     root = insert(root, 20);
//     insert(root, 10);
//     insert(root, 30);
//     insert(root, 5);
//     insert(root, 15);
//     insert(root, 25);
//     insert(root, 35);

//     Solution sol;
//     TreeNode* p = root->left; // Node with value 10
//     TreeNode* predecessor = NULL;
//     TreeNode* successor = NULL;
//     sol.findPredecessorSuccessor(root, p, predecessor, successor);

//     if (successor != NULL) {
//         std::cout << "Inorder Successor of " << p->val << " is " << successor->val << std::endl;
//     } else {
//         std::cout << "No Inorder Successor for " << p->val << std::endl;
//     }

//     if (predecessor != NULL) {
//         std::cout << "Inorder Predecessor of " << p->val << " is " << predecessor->val << std::endl;
//     } else {
//         std::cout << "No Inorder Predecessor for " << p->val << std::endl;
//     }

//     return 0;
// }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//// DELETE NODE IN BST ///////////////////////////////////////
// class Solution {
// public:
//     TreeNode* iop(TreeNode* root){
//         TreeNode* pred = root->left;
//         while(pred->right != NULL){
//             pred = pred ->right;
//         }
//         return pred;
//     }
//     TreeNode* ios(TreeNode* root){
//         TreeNode* suc = root->right;
//         while(suc->left != NULL){
//             suc = suc ->left;
//         }
//         return suc;
//     }
//     TreeNode* deleteNode(TreeNode* root, int key) {
//         if(root == NULL) return NULL;
//         if(root->val == key){
//             //case 1 : no child
//             if(root->left == NULL && root->right == NULL) return NULL;
//             //case 2 : one child
//             if(root->left == NULL || root->right ==NULL){
//                 if(root->left != NULL) return root->left;
//                 else return root->right;
//             }
//             //case 3 : two child
//             if(root->left != NULL && root->right != NULL){
//                 //replace the root with inorder pre / suc
//                 TreeNode* pred = iop(root);
//                 root->val = pred->val;
//                 root->left = deleteNode(root->left,pred->val);
//             }
//         }
//         else if(root->val > key){
//             root->left = deleteNode(root->left,key);
//         }
//         else{
//             root->right = deleteNode(root->right,key);
//         }
//         return root;
//     }
// };