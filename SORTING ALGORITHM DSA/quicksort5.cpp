// #include<iostream>
// using namespace std;
// int partition(int arr[],int si,int ei){
//     int pivotelement = arr[(si+ei)/2];
//     int count = 0;
//     for(int i=si;i<=ei;i++){
//         if(i==(si+ei)/2) continue;
//         if(arr[i] <= pivotelement) count++;
//     }
//     int pivotidx = count + si;
//     swap(arr[(si+ei)/2],arr[pivotidx]);  //TC = O(nlogn) SC=O(logn)
//     int i = si;
//     int j = ei;
//     while(i< pivotidx && j>pivotidx){
//         if(arr[i]<=pivotelement) i++;
//         else if(arr[j] > pivotelement) j--;
//         else if(arr[i] > pivotelement && arr[j] <= pivotelement){
//         swap(arr[i],arr[j]);
//         i++;
//         j--;
//         }
//     }
//     return pivotidx;
// }
// void quicksort(int arr[],int si,int ei){              //si =starting index,end index,pi =pivot index
//     if(si>=ei) return;
//     // 5,1,8,2,7,6,3,4
//     int pi = partition(arr,si,ei);
//     //4 1 3 2 5 7 8 6
//     quicksort(arr,si,pi-1);
//     quicksort(arr,pi+1,ei);
// }
// int main() {
//     int arr[] ={5,1,8,2,7,6,3,4};
//     int n = sizeof(arr) / sizeof(arr[0]);
    // for(int ele : arr){
    //     cout<<ele<<" ";
    // }
    // cout<<endl;
    // quicksort(arr,0,n-1);
    // for(int ele : arr){
    //     cout<<ele<<" ";
    // }
    // cout<<endl;
// return 0;
// }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//kth smallest number
// #include<iostream>
// using namespace std;
// int partition(int arr[],int si,int ei){
//     int pivotelement = arr[(si+ei)/2];
//     int count = 0;
//     for(int i=si;i<=ei;i++){
//         if(i==(si+ei)/2) continue;
//         if(arr[i] <= pivotelement) count++;
//     }
//     int pivotidx = count + si;
//     swap(arr[(si+ei)/2],arr[pivotidx]);  //TC = O(nlogn) SC=O(logn)
//     int i = si;
//     int j = ei;
//     while(i< pivotidx && j>pivotidx){
//         if(arr[i]<=pivotelement) i++;
//         else if(arr[j] > pivotelement) j--;
//         else if(arr[i] > pivotelement && arr[j] <= pivotelement){
//         swap(arr[i],arr[j]);
//         i++;
//         j--;
//         }
//     }
//     return pivotidx;
// }
// int kthsmallest(int arr[],int si,int ei,int k){             
//     int pi = partition(arr,si,ei);
//     if(pi+1==k) return arr[pi];
//     else if((pi+1 < k)) kthsmallest(arr,pi+1,ei,k);   // TC = O(n)
//     else kthsmallest(arr,si,pi-1,k);
// }
// int main() {
//     int arr[] ={5,-8,1,8,2,7,6,3,4};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     for(int ele : arr){
//         cout<<ele<<" ";
//     }
//     cout<<endl;
//     int k=4;
//     cout<<kthsmallest(arr,0,n-1,k);
// return 0;
// }