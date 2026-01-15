//// PATH SUM 2nd ////////////////////////////////////////////////////////
// class Solution {
// public:
// void helper(TreeNode* root,vector<int> v , vector<vector<int>>& ans,int sum){
//     if(root == NULL) return ;
//     if(root->left == NULL && root->right == NULL){
//         if(root->val == sum){
//         v.push_back(root->val);
//         ans.push_back(v);
//         }
//         return ;
//     }
//     v.push_back(root->val);
//     helper(root->left,v,ans,sum-(root->val));
//     helper(root->right,v,ans,sum-(root->val));
// }
//     vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
//         vector<vector<int>> ans;
//         vector<int> v;
//         helper(root,v,ans,targetSum);
//         return ans;
//     }
// };
/////////////////// PATH SUM 3rd /////////////////////////////////////////////////
// class Solution {
// public:
//     void helper(TreeNode* root,long long sum, int& count){
//         if(root == NULL) return ;
//         if(((long long)(root->val)) == sum) count++;
//         helper(root->left,sum-(long long)(root->val),count);
//         helper(root->right,sum-(long long)(root->val),count);
//     }
//     int pathSum(TreeNode* root, int targetSum) {
//         if(root == NULL) return 0;
//         int count = 0;
//         helper(root,(long long)(targetSum),count);
//         count += (pathSum(root->left,targetSum) + pathSum(root->right,targetSum));
//         return count;
//     }
// };
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////// Construct Binary Tree from Preorder and Inorder Traversal [Leetcode-105] //////////
// class Solution {
// public:
//     TreeNode* build(vector<int>& pre,int prelo,int prehi,vector<int>& in,int inlo,int inhi){
//         if(prelo>prehi) return NULL;
//         TreeNode* root = new TreeNode(pre[prelo]);
//         if(prelo == prehi) return root;
//         int i = inlo;
//         while(i<=inhi){
//             if(in[i] == pre[prelo]) break;
//             i++;
//         }
//         int leftcount = i - inlo;
//         int rightcount = inhi - i;
//         root->left = build(pre,prelo+1,prelo+leftcount,in,inlo,i-1);
//         root->right = build(pre,prelo+leftcount+1,prehi,in,i+1,inhi);
//         return root;
//     }
//     TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
//         int n = pre.size();
//         return build(pre,0,n-1,in,0,n-1);
//     }
// };
//106,889 homework