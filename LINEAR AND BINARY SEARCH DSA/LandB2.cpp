// // FIND FIRST occurence OF SEQUENCE OF ARRAY
// #include<iostream>
// using namespace std;
// int main() {
//     int arr[] = {1,2,2,3,3,3,3,3,4,4,5,5,9};
//     int n = 13;
//     int x;
//     cout<<"Enter the value of x: "<<endl;
//     cin>>x;
//     int low = 0;
//     int high = n-1;
//     bool flag = false ;
//     while(low<=high){
//         int mid = low + (high - low)/2;
//         if(arr[mid] == x) {
//             if(arr[mid-1] != x){
//             flag = true;
//             cout<<mid<<endl;
//             break;
//             }
//             else {
//                 high = mid -1;
//             }
//         }
//         else if(arr[mid] < x) low = mid + 1;
//         else high = mid - 1;
//     }
//     if(flag == false) cout<<-1;
// return 0;
// }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//SMALLEST MISSING ELEMENT IN THE ARRAY
// #include<iostream>
// using namespace std;
// int main() {
//     int arr[] = {0,1,2,3,4,8,9,12};
//     int n = 8;
//     for(int i=0;i<n;i++){
//         if(i != arr[i]){                 // LINEAR SEARCH
//            cout<<"number of smallest missing element are :"<<i<<endl;
//                break;
//         }
//     } 
// return 0;
// }
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// #include<iostream>
// using namespace std;
// int main() {
//     int arr[] = {0,1,2,3,4,5,6,9,12};
//     int n= 8;
//     int low =0;
//     int high = n-1;
//     int ans =-1;
//     while(low<=high){
//         int mid = low + (high - low)/2;
//         if(arr[mid] == mid) low = mid +1;
//         else{
//             ans = mid;
//             high = mid -1;
//         }
//     }
//     cout<<"smallest missing element are : "<<ans<<endl;
// return 0;
// }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// square  of the numbers
// #include<iostream>
// using namespace std;
// int main() {
//     int x;
//     cout<<"Enter the value of x: "<<endl;
//     cin>>x;
//     int low = 0;
//     int high = x;
//     bool flag = false;
//     while(low<=high){
//         int mid = low + (high - low)/2;
//         if(mid * mid == x) {
//             cout<<mid<<endl;
//             flag = true;
//             break;
//         }
//         else if(mid * mid > x) high = mid -1;
//         else low = mid + 1;
//     }
//     if(flag == false ) cout<<high;
// return 0; 
// }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// peak index in mountain array
// #include<iostream>
// using namespace std;

// int main() {
//     int arr[] = {1,3,5,4,3,2,0};
//     int n = 7;
//     int low = 1;
//     int high = n-2;
//     while(low<=high){
//         int mid =  low +(high - low)/2;
//         if(arr[mid] > arr[mid + 1] && arr[mid] > arr[mid -1]){
//             cout<<"PEAK VALUE : "<<arr[mid]<<endl;
//             cout<<"PEAK VALUE INDEX :"<<mid<<endl;
//             return 0;
//         }
//         else if(arr[mid] > arr[mid + 1])   high = mid -1;
//         else low = mid + 1;
//     } 
//     cout<<"no peak element is present "<<endl;

// return 0;
// }