// #include<iostream>
// #include<algorithm>
// using namespace std;

// int main() {
//     int arr[] = {5,3,4,2,6,1};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     int i=0;
//     while(i<n){
//         int correctidx = arr[i] -1;
//         if(i == correctidx) i++;
//         else swap(arr[i],arr[correctidx]);
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// return 0;
// }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// MISSING NUMBER 268LEETCODE         IMPORTANT FOR INTERVIEU 
// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int n = nums.size();                            by FIRST method;
//         vector<bool> check(n+1,false);                 TC = O(n) =SC
//         for(int i=0;i<n;i++){
//             int ele = nums[i];
//             check[ele] = true;
//         } 
//         for(int i=0;i<=n;i++){
//             if(check[i] == false ) return i;
//         }
//      return 100;
//     }
// };
///////////////////////                       /////////////
// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int n = nums.size();
//         int i=0;                                         //SECOND METHOD
//         while(i<n){
//             int correctidx = nums[i];
//             if(i == correctidx || nums[i] == n) i++;           // by cycle sort
            // else swap(nums[i],nums[correctidx]);                //TC = O(n) ,SC =O(1)
//         }
//         for(int i=0;i<n;i++){
//             if(nums[i] != i) return i;
//         }
//         return n;
//     }
// };
//////////////////////////////////////////////////////
// int actualsum = n*(n+1)/2;
//         int sum =0; 
//         for(int i=0;i<n;i++){              //THIRD METHOD
//             sum += nums[i];
//         }
//         return actualsum - sum;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//FIND DUPLICATE ELEMENT
// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         int n = nums.size();
//         // for(long long i =0;i<n;i++){
//         //     for(long long j=i+1;j<n;j++){  ////BY NORMAL METHOD  
//         //         if(nums[i] == nums[j]){
//         //          return nums[i];
//         //         }
//         //     }
//         // }
//         // return -1; 
//         int i=0;
//         while(i<n){
//             int currentidx = nums[i];                            //BY CYCLESORT
//             if(nums[currentidx] == nums[i]) return nums[i];
//             else swap(nums[i],nums[currentidx]);
//         } 
//         return n;
        
//     }
// };
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// FIND  ALL NUMBER OF DISAPPERED ARRAY 
// class Solution {
// public:
//     vector<int> findDisappearedNumbers(vector<int>& nums) {
//         int n= nums.size();
//         int i=0;
//         while(i<n){
//             int currentidx = nums[i] -1;
//             if(nums[currentidx] == nums[i] ) i++;
//             else swap(nums[i],nums[currentidx]);
//         }
//         vector<int> v;
//         for(int i=0;i<n;i++){
//             if(nums[i] != i+1){
//             v.push_back(i+1); 
//             }  
//         }
//         return v;
//     }
// };
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// FIRST MISSING POSITIVE NUMBER 
// class Solution {
// public:
//     int firstMissingPositive(vector<int>& nums) {
//         int n = nums.size();
//         int i=0;
//         while(i<n){
//             if(nums[i] <= n && nums[i] > 0 && nums[nums[i]-1] != nums[i]){
//                 swap(nums[i],nums[nums[i]-1]);
//             }
//             else i++;
//         }
//         for(int i=0;i<n;i++){
//             if(nums[i] != i+1) return i+1;
//         }
//         return n+1;
//     }
// };