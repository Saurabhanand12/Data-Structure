// Q2. You have a set of integers s , which originally contains all the numbers from 1 to n .
// Unfortunately, due to some error, one of the numbers in s got duplicated to another number in
// the set, which results in repetition of one number and loss of another number.
// You are given an integer array nums representing the data status of this set after the error.
// Find the number that occurs twice and the number that is missing and return them in the form of
// an array. [Leetcode 645]
// Example 1:
// Input: nums = [1,2,2,4]
// Output: [2,3]
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
// int nums[] = {1,1};
// int n = sizeof(nums)/sizeof(nums[0]);
// int i=0;
// while(i<n){
//     int currentidx = nums[i] -1;
//     if(nums[i] != nums[currentidx]) swap(nums[i],nums[currentidx]);
//     else i++;
// }
// vector<int> result(2);
// for(int i=0;i<n;i++){
//     if(nums[i] != i+1){
//         result[0] = nums[i];
//         result[1] = i+1;
//         break;
//     }
// }
// for(int i=0;i< result.size();i++){
//     cout<<result[i]<<" ";
// }
// cout<<endl;
// return 0;
// }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q3. Given an integer array nums of length n where all the integers of nums are in the range [1,n] and each
// integer appears once or twice, return an array of all the integers that appears twice.
// You must write an algorithm that runs in O(n) time and uses only constant extra space.
// Input: nums = [4,3,2,7,8,2,3,1]
// Output: [2,3]
// #include<iostream>
// #include<vector> 
// using namespace std;

// int main() {
//     int arr[] = {4,3,2,7,7,2,3,1};
//     int n= sizeof(arr)/sizeof(arr[0]);
//     int i=0;
//     while(i<n){
//         int currentidx = arr[i] -1;
//         if(arr[i] != arr[currentidx] && arr[i] > 0 && arr[i] <= n) swap(arr[i],arr[currentidx]);
//         else i++;
//     }
//     vector<int> ans;
//     for(int i=0;i<n;i++){
//         if(arr[i] != i+1){
//             ans.push_back(arr[i]);
//         }
//     }
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i];
//     }
//     cout<<endl;

// return 0;
// }