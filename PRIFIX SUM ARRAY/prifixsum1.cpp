// 1,3,5,6,7,8,9 prifix sum is 1,4,9,15,22,30,39
//prifix sum problem
// #include<iostream>
// using namespace std;
// int main() {
//     int nums[] = {1,3,5,6,7,8,9};
//     int n = sizeof(nums) / sizeof(nums[0]);           //TC = O(n) and SC =O(1)
//     cout << nums[0] << " ";
//     for(int i=1;i<n;i++){
//         nums[i] += nums[i-1];
//         cout<<nums[i]<<" ";
//     }
//     cout<<endl;
// return 0;
// }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Check if array can be partitioned into 2 continuous arrays of equal sum
// #include<iostream>
// using namespace std;

// int main() {
//     int nums[] = {1,2,3,4,5,5,10,10};
//     int n = sizeof(nums) / sizeof(nums[0]);           //TC = O(n) and SC =O(1)
//     cout << nums[0] << " ";
//     for(int i=1;i<n;i++){
//         nums[i] += nums[i-1];
//         cout<<nums[i]<<" ";
//     }
//     cout<<endl;
//     int idx =-1;
//     for(int i=1;i<n;i++){
//         if(2*nums[i] == nums[n-1]){
//         idx = i;
//         break;
//         }
//     }
//     if(idx != -1) cout<<"yes it can be partitioned after"<<" : "<<idx;
//     else  cout<<"connot be partitioned";
    

// return 0;
// }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// PRODUCT OF ARRAY EXCEPT SELF
// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         int n = nums.size();
//         int product = 1;
//         int p2 = 1;                        // without divison method in interview
//         int noz =0;
//         for(int i=0;i<n;i++){
//             if(nums[i] == 0) noz++;
//             product *=nums[i];
//             if(nums[i] != 0)  p2 *= nums[i];
//         }
//         if(noz>1) p2 =0;
//         for(int i=0;i<n;i++){
//             if(nums[i] == 0) nums[i] = p2;
//             else nums[i] = product /nums[i];
//         }
//         return nums;   
//     }
// };

/////////////////////////////////
// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         int n = nums.size();   
//         vector<int> pre(n); 
//         //prifix
//         int p = nums[0];
//         pre[0] = 1;
//         for(int i=1;i<n;i++){
//             pre[i] = p;                 // WITH NO EXTRA SPACE 
//             p *=nums[i];
//         }
//         p = nums[n-1];
//         for(int i=n-2;i>=0;i--){
//             pre[i] *= p;
//             p *= nums[i];
//         }
//         return pre;
//     }
// };