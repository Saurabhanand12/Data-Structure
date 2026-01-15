// //REVERSE K ELEMENT FORM THE QUEUR
// #include<iostream>
// #include<stack>
// #include<queue>
// using namespace std;
// void display(queue<int>& q){
//     int n = q.size();
//     for(int i=0;i<n;i++){
//         int x = q.front();
//         cout<<x<<" ";
//         q.pop();
//         q.push(x);
//     }
//     cout<<endl;
// }
// void reversek(queue<int>& q,int k){
//     stack<int> st;
//     int n = q.size();
//     for(int i=0;i<k;i++){
//         int y= q.front();
//         q.pop();
//         st.push(y);
//     }
//     while(st.size()>0){
//         int t = st.top();
//         st.pop();
//         q.push(t);
//     }
//     for(int i=0;i<n-k;i++){
//         int z=q.front();
//         q.pop();
//         q.push(z);
//     }
// }
// int main() {
//     queue<int> q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
//     q.push(5);
//     q.push(6);
//     display(q);
//     reversek(q,5);
//     display(q);
// return 0;
// }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////Number of students unable to eat lunch 1700
// class Solution {
// public:
//     int countStudents(vector<int>& students, vector<int>& sandwiches) {
//         queue<int> q;
//         int n= students.size();
//         for(int i=0;i<n;i++){
//             q.push(students[i]);
//         }
//         int i=0;
//         int count =0;
//         while(q.size() > 0 && count != q.size()){
//             if(q.front() == sandwiches[i]){
//                 count=0; //VIMP
//                 q.pop();
//                 i++;
//             }
//             else {
//                 int x = q.front();
//                 q.pop();
//                 q.push(x);
//                 count++; // VIMP
//             }
//         }
//         return count;
//     }
// };
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// IMPLEMENT QUEUE AT USING STACK//
///////////////////// PUSH EFFICIENT ////////////////////////////////////////////////////////////
// class MyQueue {
// public:
//     stack<int> st;
//     stack<int> st1;
//     MyQueue() {        
//     }
//     void push(int x) {      // tc =O(1)
//         st.push(x);
//     }
//     int pop() {                // TC = 0(n)
//         // REMOVE AT BOTTOM
//         while( st.size() > 0){
//             st1.push(st.top());
//             st.pop();
//         }
//         int x = st1.top();
//         st1.pop();
//         while(st1.size() > 0){
//             st.push(st1.top());
//             st1.pop();
//         } 
//         return x;
//     }
//     int peek() {    // TC = O(n)
//         // Reterive AT BOTTOM
//         while( st.size() > 0){
//             st1.push(st.top());
//             st.pop();
//         }
//         int x = st1.top();
//         while(st1.size() > 0){
//             st.push(st1.top());
//             st1.pop();
//         } 
//         return x;
//     }
//     bool empty() {
//         if( st.size() == 0) return true;
//         else return false;
//     }
// }
///////////////////////////// POP EFFECIENT ////////////////////////////////////////
// class MyQueue {
// public:
//     stack<int> st;
//     stack<int> st1;
//     MyQueue() { 
//     }
//     void push(int x) {      // tc =O(n)
//         if(st.size()==0){
//             st.push(x);
//             return;
//         }
//         else{
//             while(st.size()>0){
//                 st1.push(st.top());
//                 st.pop();
//             }
//             st.push(x);
//                 while(st1.size() > 0){
//                 st.push(st1.top());
//                 st1.pop();
//             }
//         }
//     }
//     int pop() { // TC = 0(1)
//         int x = st.top();
//         st.pop();
//         return x;
//     }
//     int peek() {    // TC = O(1)
//        return st.top();
//     }
//     bool empty() {
//         if( st.size() == 0) return true;
//         else return false;
//     }
// };
