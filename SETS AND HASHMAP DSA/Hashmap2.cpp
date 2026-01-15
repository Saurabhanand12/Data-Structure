// // //// ORDERED SET AND MAP
// #include<iostream>
// #include<set>
// #include<map>
// using namespace std;
// int main() {
//     set<int> s;          /// THEY ARE ORDERED SET : they arrange element in the acending order 
//     s.insert(10);
//     s.insert(05);
//     s.insert(66);
//     s.insert(22);
//     s.insert(11);
//     s.insert(77);
//     for(int ele : s){
//         cout<<ele<<" ";
//     }
//     cout<<endl;
//     // map<int,int> m;
//     map<string,int> m;
//     // m[3] = 10;                         // they arrange element in accending order only by key value and char by A to Z order
//     // m[1] = 30;
//     // m[2] = 20;

//     m["saurabh"] = 10;                       
//     m["prachi"] = 30;
//     m["ritika"] = 20;
//     for(auto x : m){
//         cout<<x.first<<" "<<x.second<<endl;
//     }
// return 0;
// } 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///FINDING 3 DIGIT EVEN NUMBER //2094
// class Solution {
// public:
//     vector<int> findEvenNumbers(vector<int>& arr) {
//         int n= arr.size();
//         vector<int> ans;
//         unordered_map<int,int> m;
//         for(auto ele : arr){
//             m[ele]++;
//         }
//         for(int i=100;i<999;i+=2){
//            int x = i;
//            int a = x % 10;     ///ones place digit
//            x /= 10;
//            int b= x % 10;      //tens place digit
//            x /=10;
//            int c= x;
//            if(m.find(a)!=m.end()){
//                 m[a]--;
//                 if(m[a]==0) m.erase(a);
//                 if(m.find(b)!=m.end()){
//                     m[b]--;
//                     if(m[b]==0) m.erase(b);
//                     if(m.find(c)!=m.end()) ans.push_back(i);
//                     m[b]++;
//                 }
//                 m[a]++;
//             }
//         }
//         return ans;
//     }
// };
/////////////////////////////////////////////////////////////
////COUNT NICE PAIRS IN THE ARRAY //////8//
// class Solution {
// public:
//     int rev(int n){
//         int r =0;
//         while( n > 0){
//            r *= 10;
//            r +=(n%10);
//            n /= 10; 
//         }
//         return r;
//     }
//     int countNicePairs(vector<int>& nums) {
//         int count = 0;
//         unordered_map<int,int> m;
//         int n= nums.size();
//         for(int i=0;i<n;i++){
//             nums[i] -= rev(nums[i]);
//         }
//         for(int i=0;i<n;i++){
//             if(m.find(nums[i])!=m.end()){
//                 count = count%1000000007;
//                 count += m[nums[i]];
//                 m[nums[i]]++;
//             }
//             else m[nums[i]]++;
//         }
//         return count%1000000007;               //they are use because they given in the question
//     }
// };
////////////////////////////////////////////////////////////////////////////////////////////
/// TOP VIEW OF BINARY TREE ////////
// #include<iostream>
// #include<queue>
// #include<unordered_map>
// #include<climits>
// using namespace std;
// class node{
//     public:
//     int val;
//     node* left;
//     node* right;
//     node(int val){
//         this->val = val;
//         this->left = NULL;
//         this-> right =NULL;
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
// void preorder(node* root){           
//     if(root == NULL ) return ;                 
//     cout<<root->val<<" ";
//     preorder(root->left);
//     preorder(root->right);
// }
// void inorder(node* root){
//     if(root == NULL ) return ;
//     inorder(root->left);
//     cout<<root->val<<" ";
//     inorder(root->right);
// }
// void postorder(node* root){
//     if(root == NULL ) return ;
//     postorder(root->left);
//     postorder(root->right); 
//     cout<<root->val<<" ";
// }
// int levels(node* root){
//     if(root == NULL) return 0;
//     return 1 + max(levels(root->left) , levels(root->right));
// }
// void nthlevel(node* root,int curr,int level){
//     if(root == NULL ) return ;
//     if(curr == level){                                    // PRINT SINGLE LEVEL NODE
//         cout<<root->val<<" ";
//         return;
//     }
//     nthlevel(root->left,curr+1,level);
//     nthlevel(root->right,curr+1,level);
// }
// void nthlevelrev(node* root,int curr,int level){
//     if(root == NULL ) return ;
//     if(curr == level){                                   // USE nthlevelrev FOR REVERSE IN nthlevel;
//         cout<<root->val<<" ";
//         return;
//     }
//     nthlevelrev(root->right,curr+1,level);
//     nthlevelrev(root->left,curr+1,level);
// }
// void levelorder(node* root){
//     int n = levels(root);                
//     for(int i=1;i<=n;i++){
//        nthlevel(root,1,i);                           
//         cout<<endl;
//     }
// }

// void levelorderqueue(node* root){       // BFS  //VIMP
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
// void topview(node* root){
//     if(root==NULL)  return;
//     unordered_map<int,int> m;
//     queue< pair<node*,int> > q;
//     pair<node*,int> r;
//     r.first = root;
//     r.second = 0;
//     q.push(r);
//     while(q.size() > 0){
//       node* temp = (q.front()).first;
//       int level =  (q.front()).second;
//       q.pop();
//         if(m.find(level)==m.end()){
//             m[level] = temp->val;
//         }
//         if(temp->left != NULL){
//             pair<node*,int> p;
//             p.first = temp->left;
//             p.second = level-1;
//             q.push(p);
//         }
//         if(temp->right != NULL){
//             pair<node*,int> p;
//             p.first = temp->right;
//             p.second = level+1;
//             q.push(p);
//         }
//     }
//     int minlevel = INT_MAX;
//     int maxlevel = INT_MIN;
//     for(auto x: m){
//         int level = x.first;
//         minlevel = min(minlevel,level);
//         maxlevel = max(maxlevel,level);
//     }
//     for(int i=minlevel;i<=maxlevel;i++){
//         cout<<m[i]<<" ";
//     }
//     cout<<endl;
// }
// int main() {
//     int arr[] = {1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN , 7,8};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     node* root = construct(arr,n);

//     levelorder(root);
//     cout<<endl;
//     topview(root);
// return 0;
// }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////// COPY LIST WITH RANDOM POINTER ////////////////
// class Solution {
// public:
//     Node* copyRandomList(Node* head) {
//         //step 1 -> create deep copy without random pointer
//         Node* dummy = new Node(0);
//         Node* tempC = dummy;
//         Node* temp = head;
//         while(temp){
//             Node* a = new Node(temp->val);
//             tempC->next = a;
//             temp = temp ->next;
//             tempC = tempC ->next;
//         }
//         Node* b = dummy->next;
//         Node* a = head;
//         //step 2 : make a map of<original,duplicate>
//         unordered_map<Node*,Node*> m;
//         Node* tempa = a;
//         Node* tempb = b;
//         while(tempa!=NULL){
//             m[tempa] = tempb;
//             tempa = tempa->next;
//             tempb = tempb->next;
//         }
//         for(auto x : m){
//             Node* o = x.first;
//             Node* d = x.second;
//             if(o->random != NULL){
//                 Node* orandom = o->random;
//                 Node* drandom = m[o->random];
//                 d->random = drandom;
//             }
//         }
//         return b;
//     }
// };
