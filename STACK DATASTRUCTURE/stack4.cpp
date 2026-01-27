//******************************************ALL INTERVIEW QUESTION**********************************************************************//
// //Number of Visible People in a Queue
// class Solution {
// public:
//     vector<int> canSeePersonsCount(vector<int>& arr) {
//         int n = arr.size();
//         vector<int> ans(n,0);
//         stack<int> st;
//         st.push(arr[n-1]);
//         ans[n-1] = 0;
//         for(int i=n-2;i>=0;i--){
//             int count =0;
//             while(st.size() > 0 && arr[i] > st.top()){
//                 st.pop();
//                 count++;
//             }
//             if(st.size() != 0) count++;
//             ans[i] = count;
//             st.push(arr[i]);
//         }
//         return ans;
//     }
// };
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//SLIDING WINDOW MAXIMUM
// class Solution {
// public:
//     vector<int> maxSlidingWindow(vector<int>& arr, int k) {
//         int n = arr.size();
//         int ngi[n];               
//         stack<int> st;
//         ngi[n-1] = n;
//         st.push(n-1);
//         for(int i=n-1;i>=0;i--){
//             while(st.size()>0 && arr[st.top()]<=arr[i]){
//                 st.pop();
//             } 
//             if(st.size()==0) ngi[i] = n;
//             else ngi[i] = st.top();
//             st.push(i);
//         }
//         vector<int> ans;
//         int j=0;
//         for(int i=0;i<n-k+1;i++){
//             if(j<i) j=i;
//             int mx = arr[j];
//             while(j < i+k){
//                 mx = arr[j];
//                 if(ngi[j]>=i+k) break;
//                 j = ngi[j];
//             }
//             ans.push_back(mx);
//         }
//         return ans;
//     }
// };
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// MIN STACK
// class MinStack {
// public:
//     stack<int> st;
//     MinStack() {  
//     } 
//     void push(int val) { //tc = O(1);             // FIRST METHOD //BRUTE CASE
//         st.push(val);
//     } 
//     void pop() {    //tc = O(1);
//         st.pop();
//     }
//     int top() {     //tc = O(1);
//         return st.top();       
//     }                                     // TC = O(n) = SP
//     int getMin() {
//         stack<int> temp;
//         int mn = INT_MAX;
//         while(st.size()>0){
//             mn = min(mn,st.top());
//             temp.push(st.top());
//             st.pop();
//         }
//         while(temp.size()>0){
//             st.push(temp.top());
//             temp.pop();
//         }
//         return mn;
//     }
// };
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// class MinStack {
// public:
    // stack<int> st;
    // stack<int> helper;
//     MinStack() {  
//     }
    
//     void push(int val) { //tc = O(1);
//         st.push(val);
//         if(helper.size() == 0 || val < helper.top()) helper.push(val);
//         else helper.push(helper.top());
//     }
    
//     void pop() {    //tc = O(1);                   // SECOND METHOD
//         st.pop();                               // TC = O(1) AND SP = O(n)
//         helper.pop();
//     }
    
//     int top() {     //tc = O(1);
//         return st.top();  
//     }
    
//     int getMin() {
//         return helper.top();
//     }
// };
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// class MinStack {
// public:
//     stack<long long> st;
//     long long min;
//     MinStack() {  
//         min = LLONG_MAX;
//     }
    
//     void push(int val) { //tc = O(1);
//      long long x = (long long)val;
//         if(st.size() == 0){                 //TC = O(1) = SP
//             st.push(x);
//             min = x;
//         }
//         else if(x >= min) st.push(x);
//         else{
//             st.push(2*x-min);
//             min = x;
//         }
//     }
    
//     void pop() {    //tc = O(1);
//        if(st.top()<min){
//         long long oldmin = 2*min - st.top();
//         min = oldmin;
//        }
//        st.pop();
       
//     }
    
//     int top() {     //tc = O(1);
//         if(st.top()<min) return (int)min;
//         else return (int)st.top();
       
//     }
    
//     int getMin() { // TC = O(1)
//         return (int)min;
//     }
// };

