// #include<iostream>
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
// int main() {
//     queue<int> q;
//     q.push(10);
//     q.push(20);
//     q.push(30); 
//     q.push(40);                  //follow FIFO 
//     q.push(50);
//     display(q);
//     q.pop();
//     display(q);
// return 0;
// }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//REVERSE A QUEUE 
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
// void reverse(queue<int>& q){
//     stack<int> st;
//     while(q.size()>0){
//         int x = q.front();
//         q.pop();
//         st.push(x);
//     }
//     while(st.size()>0){
//         int x = st.top();
//         st.pop();
//         q.push(x);
//     }
// }
// int main() {
//     queue<int> q;
//     q.push(10);
//     q.push(20);
//     q.push(30); 
//     q.push(40);                  //follow FIFO 
//     q.push(50);
//     display(q);
//     reverse(q);
//     display(q);
//     // reverse(q);
//     // display(q);
// return 0;
// }
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// REMOVE AT EVEN 
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
// void remove(queue<int>& q){
//     int n= q.size();
//     for(int i=0;i<n;i++){
//         if(i%2==0) q.pop();
//         else{
//             int x = q.front();
//             q.pop();
//             q.push(x);
//         }
        
//     }
// }
// int main() {
//     queue<int> q;
//     q.push(10);
//     q.push(20);
//     q.push(30); 
//     q.push(40);                  //follow FIFO 
//     q.push(50);
//     q.push(60);
//     display(q);
//     remove(q);
//     display(q);
//     return 0;
// }