///// SUBARRAY SUM EQUAL TO K  /// 560******
// class Solution {
// public:
//     int subarraySum(vector<int>& nums, int k) {
//         int n = nums.size();
//         vector<int> pre(n,0);
//         pre[0] = nums[0];
//         for(int i=1;i<n;i++){
//            pre[i] = nums[i] + pre[i-1];
//         }
//         unordered_map<int,int> m;
//         int count = 0;
//         for(int i=0;i<n;i++){
//             if(pre[i] == k){
//                 count++;
//             }
//             int rem = pre[i] - k;
//             if(m.find(rem) != m.end()) count += m[rem];
//             m[pre[i]]++;
//         }
//         return count;
//     }
// };
//////////////////////////////////////////////////////////////////////////
//////Amount of time for binary tree to be infected ///2385*****
// class Solution {
// public:
//     TreeNode* first = NULL;
//     void markparent(TreeNode* root,unordered_map<TreeNode*,TreeNode*>& parent){
//         if(root == NULL) return;
//         if(root->left)  parent[root->left] = root;
//         if(root->right) parent[root->right] = root;
//         markparent(root->left,parent);
//         markparent(root->right,parent);
//     }
//     void find(TreeNode* root,int start){
//         if(root == NULL) return;
//         if(root->val == start){
//            first = root;
//            return;
//         }
//         find(root->left,start);
//         find(root->right,start); 
//     }
//     int amountOfTime(TreeNode* root, int start) {
//         find(root,start);
//         unordered_map<TreeNode*,TreeNode*> parent;
//         markparent(root,parent);
//         int maxlevel =0;
//         unordered_set<TreeNode*> s;
//         s.insert(first);
//         queue<pair<TreeNode*,int>> q;
//         q.push({first,0});
//         while(q.size() > 0){
//             pair<TreeNode*,int> p = q.front();
//             q.pop();
//             int level = p.second;
//             maxlevel = max(maxlevel,level);
//             TreeNode* temp =p.first;
//             if(temp->left){
//                 if(s.find(temp->left)==s.end()){
//                     q.push({temp->left,level+1});
//                     s.insert(temp->left);
//                 }
//             }
//             if(temp->right){
//                 if(s.find(temp->right)==s.end()){
//                     q.push({temp->right,level+1});
//                     s.insert(temp->right);
//                 }
//             }
//             if(parent.find(temp)!=parent.end()){
//                 if(s.find(parent[temp])==s.end()){
//                     q.push({parent[temp],level+1});
//                     s.insert(parent[temp]);
//                 } 
//             }
//         }
//         return maxlevel;
//     }
// };
//////////////////////////////////////////////////////////////////////////////////////////////////////
////////GROUP ANAGRAM ////49
// class Solution {
// public:
//     vector<vector<string>> groupAnagrams(vector<string>& arr) {
//         vector<vector<string>> ans;
//         unordered_map<string,vector<string>> mp;
//         for(auto str : arr){
//             string lexo = str;
//             sort(lexo.begin(),lexo.end());
//             if(mp.find(lexo)==mp.end()){
//                 vector<string> v;
//                 v.push_back(str);
//                 mp[lexo] = v;
//             }
//             else{
//                 mp[lexo].push_back(str);
//             }
//         }
//         for(auto x : mp){
//             vector<string> v = x.second;
//             ans.push_back(v);
//         }
//         return ans;
//     }
// };

