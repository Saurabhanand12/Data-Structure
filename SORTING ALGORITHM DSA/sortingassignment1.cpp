// Q4. Sort the array in descending order using Bubble Sort.

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main() {
//     int arr[] = {1,4,7,3,8,2,5,6,9};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     for(int ele : arr){
//         cout<<ele<<" ";
//     }
//     cout<<endl;
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-1-i;j++){
//             if(arr[j] <arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
//     for(int ele : arr){
//         cout<<ele<<" ";
//     }
//     cout<<endl;
// return 0;
// }

// /// /  / / / / / / / ////  ////  /////  /////  /////  /////   /////  ////   ////   ///// /// / / / / / //////   /// / // // / / / 
// Q5. Check if the given array is almost sorted. (elements are at-most one position away).
// #include <iostream>
// using namespace std;
// int main() {
// int A[]={1,2,3,4,5};
// int n = sizeof(A) / sizeof(A[0]);
// for (int i = 0; i < n - 1; i++) {
// if (A[i] > A[i + 1]) {
// swap(A[i], A[i + 1]);
// }
// }
// int i;
// for (i = 0; i < n - 1; i++)
// if (A[i] > A[i + 1]) {
// cout<<"No"<<endl;
// break;
// }
// if(i == n - 1)cout<<"Yes"<<endl;
// return 0;
// }