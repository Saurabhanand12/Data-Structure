// // BALANCE BRACKET
// #include<iostream>
// #include<stack>
// using namespace std;

// bool isbalanced(string s){
//     if(s.length()%2 !=0) return false;
//     stack<char> st;
//     for(int i=0;i<s.length();i++){
//         if(s[i] == '(')  st.push(s[i]);
//         else{
//             if(st.size() == 0) return false;
//             else st.pop();
//         }
//     }                                                          // 0 = false and 1 = true
//     if(st.size() == 0) return true;
//     else return false;
// }
// int main() {
//     string s = "()())";
//     cout<<isbalanced(s);
// return 0;
// }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//// REMOVE CONSECUTIVE DUPLICATES IN THE STRING
// #include<iostream>
// #include<stack>
// #include<algorithm>
// using namespace std;
// string removeduplicate(string s){
//     stack<char> st;
//     st.push(s[0]);
//     for(int i=1;i < s.length();i++){
//         if(s[i] != st.top())  st.push(s[i]);
//     }
//     s= "";
//     while(st.size()>0){
//         s += st.top();
//         st.pop();
//     }
//     reverse(s.begin(),s.end());
//     return s;
// }

// int main() {
//     string s = " aaaabbccdeeffghh";
//     cout<<s<<endl;
//     s = removeduplicate(s);
//     cout<<s<<endl;
// return 0;
// }
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//NEXT GREATHER ELEMENT
// #include<iostream>
// #include<stack>
// using namespace std;

// int main() {
//     int arr[] = {3,1,2,7,4,6,2,3};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     //by using stack : method pop,ans,push and reverse treverse 
//     int nge[n];                  // TC = O(n) = SP
//     stack<int> st;
//     nge[n-1] = -1;
//     st.push(arr[n-1]);
//     for(int i=n-1;i>=0;i--){
//         //pop all the element small than arr[i]
//         while(st.size()>0 && st.top()<=arr[i]){
//             st.pop();
//         } 
//         //mark the ans in nge array
//         if(st.size()==0) nge[i] = -1;
//         else nge[i] = st.top();
//         //push the arr[i]
//         st.push(arr[i]);
//     }
//     for(int i=0;i<n;i++){
//         cout<<nge[i]<<" ";
//     }
//     cout<<endl;


// return 0;
// }
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// PREVIOUS GREATHER ELEMENT
// #include<iostream>
// #include<stack>
// using namespace std;

// int main() {
//     int arr[] = {3,1,2,7,4,6,2,3};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     //by using stack : method pop,ans,push and forward treverse 
//     int pge[n];                  // TC = O(n) = SP
//     stack<int> st;
//     pge[0] = -1;
//     st.push(arr[0]);
//     for(int i=1;i<=n-1;i++){
//         //pop all the element small than arr[i]
//         while(st.size()>0 && st.top() <= arr[i]){
//             st.pop();
//         } 
//         //mark the ans in nge array
//         if(st.size()==0) pge[i] = -1;
//         else pge[i] = st.top();
//         //push the arr[i]
//         st.push(arr[i]); 
//     }
//     for(int i=0;i<n;i++){
//         cout<<pge[i]<<" ";
//     }
//     cout<<endl;
// return 0;
// }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// STOCK SPAN PROBLEM
// #include<iostream>
// #include<stack>
// using namespace std;

// int main() { 
//     int arr[] = {100,80,60,81,70,60,75,85};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     //by using stack : method pop,ans,push and forward treverse 
//     // by using index 
//     int pgi[n];                  // TC = O(n) = SP
//     stack<int> st;
//     pgi[0] = 1;
//     st.push(0);
//     for(int i=1;i<=n-1;i++){
//         //pop all the element small than arr[i]
//         while(st.size()>0 && arr[st.top()] <= arr[i]){
//             st.pop();
//         } 
//         //mark the ans in ngi array
//         if(st.size()==0) pgi[i] = i+1;
//         else   pgi[i] = i - st.top();//  minus pge indix with index of array

//         //push the arr[i]
//         st.push(i); 
//     }
//     for(int i=0;i<n;i++){
//         cout<<pgi[i]<<" ";
//     }
//     cout<<endl;
// return 0;
// } 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// LARGEAST RECTANGLE IN HISTOGRAM
// class Solution {
// public:
//     int largestRectangleArea(vector<int>& arr) {
//         int n = arr.size();
//         int nsi[n];
//         stack<int> st;
//         nsi[n-1] = n;                                              // by using next small index
//         st.push(n-1);
//         for(int i=n-2;i>=0;i--){
//             while(st.size()>0 && arr[st.top()] >= arr[i])  st.pop();
//             if(st.size() == 0) nsi[i] =n;
//             else nsi[i] = st.top();
//             st.push(i);
//         }
//         int psi[n];
//         stack<int> gt;
//         psi[0] = -1;
//         gt.push(0);                                                          // by using previous small index
//         for(int i=1;i<n;i++){
//             while(gt.size()>0 && arr[gt.top()] >= arr[i])  gt.pop();
//             if(gt.size() == 0) psi[i] =-1;
//             else psi[i] = gt.top();
//             gt.push(i);
//         }
//         int maxarea = 0;
//         for(int i=0;i<n;i++){
//             int height = arr[i];
//             int breadth = nsi[i] -psi[i] -1;
//             int area = height * breadth;
//             maxarea = max(maxarea,area);
//         }
//         return maxarea;
//     }
// };