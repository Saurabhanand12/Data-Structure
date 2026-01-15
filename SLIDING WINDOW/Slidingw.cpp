// ////maximum sum subarray of size k//

// #include<iostream>
// #include<climits>
// using namespace std;

// int main(){
//     int arr[] ={7,1,2,5,8,4,9,3,6};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int k= 3;

//     int maxSum = INT_MIN;
//     int maxIdx=-1;
//     for(int i=0;i<=n-k;i++){  //total no ops = n-k+1
//         int sum = 0;
//         for(int j=i;j<i+k;j++){     //total no ops = k times         //Brute force   time c = O(K*n) = (n-k+1)*k
//             sum += arr[j];
//         }
//         if(maxSum < sum){
//             maxSum = sum;
//             maxIdx = i;
//         }
//     }
//     cout<<"Maximum sum subarray are : "<<maxSum<<endl;
//     cout<<"Starting index : "<<maxIdx<<endl;
//     return 0;
// }


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////maximum sum subarray of size k//

// #include<iostream>
// #include<climits>
// using namespace std;

// int main(){
//     int arr[] ={7,1,2,5,8,4,9,3,6};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int k= 4;

//     int maxSum = INT_MIN;
//     int maxIdx=0;
//     int sum =0;
//     for(int i=0;i<k;i++){     //total no ops = k            //SECOND METHOD
//         sum += arr[i];
//     }
//     maxSum = sum;
//     cout<<maxSum<<endl;
//     int i=1;
//     int j=k;
//     while(j<n){                    //total no ops = n-k
//         sum = sum +arr[j] - arr[i-1];
//         if(maxSum < sum){
//             maxSum = sum;
//             maxIdx = i;
//         }
//         i++;                       //TC = O(n)
//         j++;
//     }

//     cout<<"Maximum sum subarray are : "<<maxSum<<endl;
//     cout<<"Starting index : "<<maxIdx<<endl;
//     return 0;
// }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///// First negative number in every window of size k // 

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[] ={2,-3,4,4,-7,-1,4,-2,6};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int k =4;
//     int p =-1;
//     int sum =0;                //tc=O(n);

//     int ans[n-k+1]; 

//     for(int i=0;i<k;i++){
//         if(arr[i] < 0){
//             p = i;
//             break;
//         }
//     }
//     if(p==-1) ans[0] =1;
//     else ans[0] = arr[p];

//     int i=1;
//     int j=k;
//     while(j<n){
//         if(p >= i) ans[i] = arr[p];
//         else{
//             for(int m=i;m<=j;m++){
//                 if(arr[m]<0){
//                     p = m;
//                     break;
//                 }
//             }
//             if(p!=-1) ans[i] =arr[p];
//             else ans[i] = 1;
//         } 
//         i++;
//         j++;
//     }

//    for(int i=0;i<n-k+1;i++){
//     cout<<ans[i]<<"  ";
//    }

//     return 0;
// }
/////////////////////////////////////////////////////////////////////////////
/// MINIMUM SIZE SUBARRAY  209
// class Solution {
// public:
//     int minSubArrayLen(int target, vector<int>& nums) {
//         int n = nums.size();
//         int i=0;
//         int j=0;
//         int minlen = INT_MAX;
//         int len ;
//         int sum =0;
//         while(j<n){
//             sum +=nums[j];
//             while(sum >= target){
//                 len = j-i+1;
//                 minlen = min(minlen,len);
//                 sum -=nums[i];
//                 i++;
//             }
//             j++;
//         }
//         if(minlen == INT_MAX) return 0;
//         return minlen;
//     }
// };

