//                                    SELECTION SORT ALGORITHMS

// #include<iostream>
// #include<algorithm>
// #include<climits>
// using namespace std;
// int main() {
// int arr[] = {5,3,1,4,2};
// int n = sizeof(arr)/sizeof(arr[0]);
// for(int ele : arr){
//     cout<<ele<<" ";           // for each loop
// }
// cout<<endl;
// for(int i=0;i<n-1;i++){               //TC = O(n^2) for all cases and SC = O(1)
//     int min = INT_MAX;
//     int minidx = -1;
//     for(int j=i;j<n;j++){          // SELECTION SORT are unstable selection  disadvantageand and advantage is good cost of swapping
//         if(arr[j] < min){
//             min = arr[j];
//             minidx = j;
//         }
//     }
//     swap(arr[i],arr[minidx]) ;  
// }
// for(int ele : arr){
//     cout<<ele<<" ";           // for each loop
// }
// cout<<endl;
// return 0;
// }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                          INSERTION SORT ALGORITHM
// #include<iostream>
// using namespace std;

// int main() {
// int arr[] = {5,1,2,4,3};
// int n = sizeof(arr)/sizeof(arr[0]);
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";    
// }
// cout<<endl;
// // insertion sort 
// for(int i=1;i<n;i++){                         // WITHOUT USING BOOLEAN CHECKMARK
// int j = i; 
//     while(j>=1 && arr[j] < arr[j-1]){         //TC = O(n) in best case and other cases are O(n^2)  
//         swap(arr[j],arr[j-1]);               // THERE ARE SAME AS BUBBLE SORT  use boolean checkmark
//         j--;
//     }
// }

// for(int i=0;i<n;i++){                        // INSERTION IS A STABLE SORTING ALGORITHM
//     cout<<arr[i]<<" ";
// }
// return 0;
// }