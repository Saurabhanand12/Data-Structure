// ///////Q1. Remove the last k elements of a queue.///////////////
// #include<iostream>
// #include<queue>
// #include<stack>
// using namespace std;
// void display(deque<int>& dq) {
//     for (int i : dq) {
//         cout << i << " "; 
//     } 
//     cout << endl;  
// }
// void removek(deque<int>& dq,int k){
//     for(int i = 0; i < k && !dq.empty(); i++) {
//         dq.pop_back(); 
//     }  
// }
// int main() {
//     deque<int> dq;
//     dq.push_back(10);
//     dq.push_back(20);
//     dq.push_back(30);
//     dq.push_back(40);
//     dq.push_back(50);
//     dq.push_back(60);
//     removek(dq,2);
//     display(dq);
// return 0;
// }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////Q2. Reverse last k elements of a queue.////////////////////////////
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
//     if (q.empty() || k <= 0 || k > q.size()) return;
//     stack<int> st;
//     int n = q.size();
//     for(int i=0;i<n-k;i++){
//         int y= q.front();
//         q.pop();
//         q.push(y);
//     }
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
//         int y= q.front();
//         q.pop();
//         q.push(y);
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
//     reversek(q,2);
//     display(q);
// return 0;
// }