// ///////// sets is a type of a data structure with the best time comp
// //////////  O(1) for inserting a element,searching ,and delete the element
// #include<iostream>
// #include<unordered_set>
// using namespace std;

// int main(){
//     unordered_set<int> s;
//     s.insert(1);                // element are stored in unique and not element are repeated and store in random order
//     s.insert(2);
//     s.insert(3);
//     s.insert(4);
//     s.insert(5);
//     s.insert(1);
//     s.insert(2);
//     cout<<s.size()<<endl;
//     s.erase(4);
//     cout<<s.size()<<endl;

//     int target = 3;                                        ////for search the element in set
//     if(s.find(target) != s.end()){
//         cout<<"element are exists"<<endl;
//     }
//     else cout<<"element are not exists"<<endl;

//     for(int ele : s){
//         cout<<ele<<" ";
//     }
//     cout<<endl;
//     return 0;
// }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///// COUNT THE NUMBER OF DISTINCT INTEGERS AFTER THE REVERSE OPERATION
// class Solution {
// public:
//     int reverse(int n){
//         int r =0;
//         while(n>0){
//             r *= 10;
//             r +=(n%10);
//             n /=10;
//         }
//         return r;
//     }
//     int countDistinctIntegers(vector<int>& nums) {
//         int n= nums.size();
//         unordered_set<int> s;
//         for(int i=0;i<n;i++){
//             int rev = reverse(nums[i]);
//             s.insert(nums[i]);
//             s.insert(rev);
//         }
//         return s.size();
//     }
// };
///////////////////////////////////////////////////////////////////////////////////////////////
//FINDING MAXIMUM NUMBER OF STRING  PAIRS 2744
// class Solution {
// public:
//     int maximumNumberOfStringPairs(vector<string>& arr) {        ////ex arr[] ={ab,ac,ca,ba,zz}  otp = 2;
//         int n = arr.size();
//         int count =0;
//         unordered_set<string> s;
//         for(int i=0;i<n;i++){
//             s.insert(arr[i]);
//         }                                                      // first METHOD  TC = O(n)
//         for(int i=0;i<n;i++){
//             string rev = arr[i];
//             reverse(rev.begin(),rev.end());
//             if(arr[i] == rev) continue;
//             if(s.find(rev) != s.end()){
//                 count++;
//                 s.erase(arr[i]);
//             }
//         }
//         return count;
//     }
// };
//////////////////////////
// class Solution {
// public:
//     int maximumNumberOfStringPairs(vector<string>& arr) {
//         int n = arr.size();
//         int count =0;                                                       ////SECOND METHOD   TC = O(n^2)
//         unordered_set<string> s;
//         for(int i=0;i<n;i++){
//             string rev = arr[i];
//             reverse(rev.begin(),rev.end());
//             if(s.find(rev) != s.end()) count++;
//             else s.insert(arr[i]);
//         }
//         return count;
//     }
// };