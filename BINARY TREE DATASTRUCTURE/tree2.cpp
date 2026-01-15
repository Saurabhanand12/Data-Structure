////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///// INVERT BINARY TREE************ interview//////////////////
// class Solution {
// public:
    // TreeNode* invertTree(TreeNode* root) {
    //     if(root == NULL ) return NULL;
    //     TreeNode* temp = root->left;
    //     root->left = root->right;
    //     root->right = temp;
    //     invertTree(root->left);
    //     invertTree(root->right);
    //     return root;
    // }
// };

///////// BINARY TREE PATH/////////////////////
// class Solution {
// public:
//     void helper(TreeNode* root,string s , vector<string>& ans){
//         if(root == NULL) return ;
//         string a =to_string(root->val);
//         if(root->left == NULL && root->right == NULL){
//             s +=a;
//             ans.push_back(s);
//             return ;
//         }
//         helper(root->left,s+a+"->",ans);
//         helper(root->right,s+a+"->",ans);
//     }
//     vector<string> binaryTreePaths(TreeNode* root) {
//         vector<string> ans;
//         helper(root,"",ans);
//         return ans;
        
//     }
// };
/////////////LOWEST COMMON ANCESTORS************************//////////////////////////////////////////////////////////
// class Solution {
// public:
//     bool exists(TreeNode* root,TreeNode* target){
//         if(root == NULL) return false;
//         if(root == target) return true;
//         return exists(root->left,target) || exists(root->right,target);
//     }
//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//         if(root == p ||root == q)  return root;
//         else if(exists(root->left,p) && exists(root->right,q)) return root;
//         else if(exists(root->right,p) && exists(root->left,q)) return root;
//         else if(exists(root->left,p) && exists(root->left,q)) return lowestCommonAncestor(root->left,p,q);
//         else return lowestCommonAncestor(root->right,p,q);
//     }
// };