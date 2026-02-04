// /////////// REORDER QUEUE //////////////////////
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
// void reorder(queue<int>& q){
//     int n = q.size();
//     stack<int> st;
//     for(int i=0;i<n/2;i++){         // FIRST HALF PART PUSH STACK
//         st.push(q.front());
//         q.pop();
//     }
//     while(st.size()>0){               // PUSH QUEUE
//         q.push(st.top());
//         st.pop();
//     }
//     for(int i=0;i<n/2;i++){              //SECOND HALF PART PUSH IN STACK
//         st.push(q.front());
//         q.pop();
//     }
//     while(st.size() >0){
//         q.push(st.top());
//         st.pop();
//         q.push(q.front());
//         q.pop();
//     }
//     for(int i=0;i<n;i++){
//         st.push(q.front());
//         q.pop();
//     }
//     while(st.size()>0){
//         q.push(st.top());
//         st.pop();
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
//     q.push(7);
//     q.push(8);
//     display(q);
//     reorder(q);
//     display(q);

// return 0;
// }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////// Reveal cards in increasing order ////////////////////////////////////////////
// class Solution {
// public:
//     vector<int> deckRevealedIncreasing(vector<int>& deck) {
//         int n= deck.size();
//         sort(deck.begin(),deck.end());
//         queue<int> q;
//         for(int i=0;i<n;i++){
//             q.push(i);
//         }
//         vector<int> ans(n);
//         for(int i=0;i<n;i++){
//             int idx = q.front();
//             q.pop();
//             // popping front and pushing into a back
//             q.push(q.front());
//             q.pop();
//             ans[idx] = deck[i];
//         }
//         return ans;
//     }
// };