// SEARCH IN ROTATED SORTED ARRAY
// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         int n = nums.size();
//         if (n == 0) return -1;  // Handle empty array     
//         // Step 1: Find the pivot
//         int low = 0, high = n - 1;
//         while (low < high) {
//             int mid = low + (high - low) / 2;
//             // If mid is greater than high, it means the pivot is on the right
//             if (nums[mid] > nums[high]) {
//                 low = mid + 1;
//             } else {
//                 high = mid;  // potential pivot can be mid
//             }
//         }
//         int pivot = low;  // pivot is the index of the smallest element
//         // Step 2: Determine which part of the array to search
//         low = 0, high = n - 1;
//         if (target >= nums[pivot] && target <= nums[high]) {
//             low = pivot;
//         } else {
//             high = pivot - 1;
//         }
//         // Step 3: Binary search in the determined part
//         while (low <= high) {
//             int mid = low + (high - low) / 2;
//             if (nums[mid] == target) return mid;
//             else if (nums[mid] < target) low = mid + 1;
//             else high = mid - 1;
//         }
//         return -1;  // Target not found
//     }
// };


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// FIND Kth CLOSEST ELEMENT 
// class Solution {
// public:
//     vector<int> findClosestElements(vector<int>& arr, int k, int x) {
//         int n= arr.size();
//         vector<int> ans(k);
//         if(x < arr[0]){
//             for(int i=0;i<k;i++){
//                 ans[i] = arr[i];
//             }
//             return ans;
//         }
//         if(x > arr[n-1]){
//             int i= n-1;
//             int j= k-1;
//             while(j>=0){
//                 ans[j] = arr[i];
//                 j--;
//                 i--;
//             }
//             return ans;
//         }
//         int low=0;
//         int high = n-1;
//         bool flag = false ;// x value is present or not 
//         int t =0; // representing index of ans
//         int mid = -1;
//         while(low<= high){
//             mid = low + (high - low)/2;
//             if(arr[mid] == x){
//                 flag = true;
//                 ans[t] = arr[mid];
//                 t++;
//                 break;
//             }
//             else if(arr[mid] > x) high = mid - 1 ;
//             else low = mid + 1;
//         }

//         int lb = high;
//         int ub = low;
//         if(flag == true){
//             lb = mid - 1;
//             ub = mid +1;
//         }
//         while(t<k && lb>=0 && ub<= n-1){
//             int d1 = abs(x - arr[lb]);
//             int d2 = abs(x - arr[ub]);
//             if(d1<=d2){
//                 ans[t] = arr[lb];
//                 lb--;
//             }
//             else{
//                 ans[t] = arr[ub];
//                 ub++;
//             }
//             t++;
//         }
//         if(lb<0){
//             while(t<k){
//                 ans[t] = arr[ub];
//                 ub++;
//                 t++;
//             }
//         }
//         if(ub>n-1){
//             while(t<k){
//                 ans[t] = arr[lb];
//                 lb--;
//                 t++;
//             }
//         }
//         sort(ans.begin(),ans.end());
//         return ans;
//     }
// };