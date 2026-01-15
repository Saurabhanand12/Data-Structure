// #include<iostream>
// #include<queue> 
// using namespace std;
// int main(){
//     priority_queue<int> pq;        // max heap
//     pq.push(10);
//     pq.push(5);             // this same as stack ,in the top of heap(priority_queue) maximum element is present and after pop the  next max element is come 
//     pq.push(90);               // in c++ heap follow(defalut) max heap and in java follow(defalut) minimum heap
//     pq.push(-10);              // same operation like stack ex . push,pop,top
//     pq.push(8);                //TC = OF TOP O(1) ,push and pop TC = O(logn) ****

//     while(!pq.empty()){
//         cout<<pq.top()<<endl;
//         pq.pop();
//     }
//     cout<<pq.top()<<endl;
//     pq.pop();
//     cout<<pq.top()<<endl;
// }
////////////////////////////
// #include<iostream>
// #include<queue> 
// using namespace std;
// int main(){
//     priority_queue<int,vector<int>,greater<int>> pq;               // min heap
//     pq.push(10);
//     pq.push(5);            
//     pq.push(90);               
//     pq.push(-10);             
//     pq.push(8);               
//     cout<<pq.top()<<endl;
//     pq.pop();
//     cout<<pq.top()<<endl;
// }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
///// KTH SMALLEST ELEMENT IN THE GIVEN ARRAY
// #include<iostream>
// #include<queue>
// using namespace std;
// int main() {
//     int arr[] = {10,2,9,11,-4,-1,111,55,80};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     priority_queue<int> pq;
//     int k = 2 ;                      /// TC = O(n*logk)   SP = O(n) AS = O(k)
//     for(int i=0;i<n;i++){
//         pq.push(arr[i]);
//         if(pq.size() > k) pq.pop();
//     }
//    while(!pq.empty()){
//     cout<<pq.top();
//     pq.pop();
//    }
// return 0;
// }
////////////////////////////////////////////////////////////////
/// KTH LARGEST ELEMENT IN THE GIVEN ARRAY   /// leetcode 215
// #include<iostream>
// #include<queue>
// using namespace std;
// int main() {
//     int arr[] = {10,2,9,11,-4,-1,111,55,80};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     priority_queue<int,vector<int>,greater<int>> pq;
//     int k = 2 ;                               /// TC = O(n*logk)   SP = O(n) AS = O(k)
//     for(int i=0;i<n;i++){
//         pq.push(arr[i]);
//         if(pq.size() > k) pq.pop();
//     }
//     while(!pq.empty()){
//     cout<<pq.top()<<" ";
//     pq.pop();
//     }
// return 0;
// }
// sort(nums.begin(),nums.end());                           //by extra method 
// return nums[nums.size()-k];
//////////////////////////////////////
//// SORT A K SORTED ARRAY (SORT A NEARLY SORTED ARRAY)
// #include<iostream>
// #include<queue>
// #include<vector>
// using namespace std;
// int main() {
//     vector<int> v;
//     priority_queue<int,vector<int>,greater<int>> pq;
//     int arr[] ={6,5,3,2,8,10,9};
//     int n = sizeof(arr) /sizeof(arr[0]);
//     int k = 3;
//     for(int i=0;i<n;i++){
//         pq.push(arr[i]);
//         if(pq.size() > k){
//         v.push_back(pq.top());
//         pq.pop(); 
//         }
//     }
//     while(pq.size() > 0){
//         v.push_back(pq.top());
//         pq.pop();  
//     }
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// return 0;
// }
///////homework 378 KTH SMALLEST ELEMENT IN THE SORTED MATRIX
// class Solution {
// public:
//     int kthSmallest(vector<vector<int>>& matrix, int k) {
//         priority_queue<int,vector<int>,greater<int>> pq;
//         int n = matrix.size();
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 pq.push(matrix[i][j]);
//             }
//         }
//         for(int i=0;i<k-1;i++){
//             pq.pop();
//         }
//         return pq.top();
//     }
// };
