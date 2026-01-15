// /// check the given array is sorted or not using recursion
// #include<iostream>
// using namespace std;

// bool issorted(int arr[],int size){
//     if(size == 0 || size == 1){
//         return true;
//     }
//     if(arr[0] > arr[1]){
//         return false;
//     }
//     else{
//         bool remainingpart = issorted(arr+1,size-1);
//         return remainingpart;
//     }
// }

// int main(){
//     int arr[] = {1,3,5,7,8,10};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     bool ans = issorted(arr,size);
//     if(ans){
//         cout<<"Array is Sorted";
//     }
//     else{
//         cout<<"Array is not Sorted";
//     }
// }

// //// find sum of array using recursion
// #include<iostream>
// using namespace std;

// int sum(int arr[],int size){
//     if(size == 0) return 0;
//     if(size == 1) return arr[0];

//     int remainingpart = sum(arr+1,size-1);
//     int ans = arr[0]+remainingpart;

//     return ans;
// }

// int main(){
//     int arr[] = {1,2,3,5,3,4};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     int getsum = sum(arr,size);

//     cout<<"Sum is : "<<getsum<<" ";
// }

/// Linear Search using recursion
// #include<iostream>
// using namespace std;

// bool linear(int arr[],int size,int target){
//     if(size == 0) return false;
//     if(arr[0] == target) return true;
//     else{
//         return linear(arr+1,size-1,target);
//     }
// }

// int main() {
//     int arr[] = {2,4,22,5,6,7,8,9,10};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     int target;
//     cout<<"Enter your target value: "<<" ";
//     cin>>target;
//     bool ans = linear(arr,size,target);
//     if(ans){
//         cout<<"Target is found";
//     }
//     else{
//         cout<<"Target is not found";
//     }

// return 0;
// }

// Binary search using recursion 
// #include<iostream>
// using namespace std;
// bool binary(int arr[],int target,int low ,int high){
//     if(low > high) return false;
//     int mid = (low+high)/2;
//     if(arr[mid] == target) return true;

//     if(arr[mid] > target){
//         return binary(arr,target,low,mid-1);
//     }
//     else{
//          return binary(arr,target,mid+1,high);
//     }

// }

// int main() {
//     int arr[] ={2,4,5,7,9,222,44,66};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     int target;
//     cout<<"Enter your target value :"<<" ";
//     cin>>target;

//     int low = 0;
//     int high = size-1;
//     bool ans =binary(arr,target,low,high);
//     if(ans){
//         cout<<"Present"<<endl;
//     }
//     else{
//         cout<<"Not Present"<<endl;
//     }

// return 0;
// }