// LINEAR SEACRCH 
// #include<iostream>
// using namespace std;

// int main() {
//     int arr[] = {1,3,5,7,6,8,4,2};
//     int x ;
//     cout<<"Enter the value of x: "<<endl;             //O(n) = TC
//     cin>> x;

//     bool flag = false;
//     for(int i=0;i<8;i++){
//         if(arr[i] == x) {
//            flag = true;
//             break;
//         }
//     }
    
//     if(flag == true) cout<<"present"<<endl;
//     else cout<<"not present"<<endl;
// return 0;
// }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// BINARY SEARCH 

// #include<iostream>
// using namespace std;
// int main() {
//     int arr[8] = {1,4,8,11,14,17,19,22};   // IN SORTED ORDER ARE COMPULSORY
//     int n= sizeof(arr) / sizeof(arr[0]);
//     int x;
//     cout<<"Enter the value of x: "<<endl;
//     cin>>x;
//     int low = 0;
//     int high = n-1;
//     while(low <= high){
//         int mid = (high + low) /2;    // for long number use low +(high - low)/2
//         if(arr[mid] == x) {
//         cout<<"value is present at index :"<<mid;
//         return 0;
//         } 
//         else if(arr[mid] < x) {               //TC = O(LOG n)
//         low = mid + 1;
//         }
//         else {
//         high = mid -1;
//         } 
//     }
//     cout<<"element is not present "<<endl;
// return 0;
// }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//FIND LOWER BOUND AND UPPER BOUND  LINEAR SEARCH

// #include<iostream>
// using namespace std;
// int main() {
// int arr[8] = {1,4,8,12,15,18,20,24};
// int n= 8;     
// int target ;
// cout<<"Enter the value of target : "<<endl;  
// cin>>target;
// for(int i=0;i<8;i++){
//     if(arr[i]>target){                     //LOWER BOUND IN LINEAR SEARCH
//         cout<<arr[i-1]<<endl;
//         break;
//     }
// }
// // for(int i=0;i<8;i++){
// //     if(arr[i]>target){
// //         cout<<arr[i]<<endl;             //UPPER BOUND IN LINEAR SEARCH
// //         break;
// //     }
// // }
// return 0;
// }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
// USE OF BINARY SEARCH 
// #include<iostream>
// using namespace std;
// int main() {
//     int arr[8] = {1,4,8,11,14,17,19,22};        // INT SORTED ORDER ARE COMPULSORY
//     int n= sizeof(arr) / sizeof(arr[0]);
//     int x;
//     cout<<"Enter the value of x: "<<endl;
//     cin>>x;
//     int low = 0;
//     int high = n-1;
//     bool flag = false;
//     while(low <= high){
//         int mid = low + (high - low) /2;          //for lower bound
//         if(arr[mid] == x) {
//         flag = true;
//         cout<<arr[mid-1];
//         break;
//         } 
//         else if(arr[mid] < x) {               //TC = O(LOG n)
//         low = mid + 1;
//         }
//         else {
//         high = mid -1;
//         } 
//     }
//     if(flag == false ) cout<<arr[high];    //FOR UPPER BOUND USE COUT<<ARR[LOW];
// return 0;
// }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// #include<iostream>
// using namespace std;
// int main() {
//     int arr[8] = {1,4,8,11,14,17,19,22};        // INT SORTED ORDER ARE COMPULSORY
//     int n= sizeof(arr) / sizeof(arr[0]);
//     int x;
//     cout<<"Enter the value of x: "<<endl;
//     cin>>x;
//     int low = 0;
//     int high = n-1;
//     bool flag = false;   
//     while(low <= high){
//         int mid = low + (high - low) /2;          //for upper bound
//         if(arr[mid] == x) {
//         flag = true;
//         cout<<mid;
//         break;
//         } 
//         else if(arr[mid] < x) {               //TC = O(LOG n)
//         low = mid + 1;
//         }
//         else {
//         high = mid -1;
//         } 
//     }
//     if(flag == false ) cout<<arr[low];   
// return 0;
// }