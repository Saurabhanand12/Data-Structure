// Q1: Given a sorted array of n elements and a target ‘x’. Find the last occurrence of ‘x’ in the array. If ‘x’ does 
// not exist return -1.
// Input 1: arr[] = {1,2,3,3,4,4,4,5} , x = 4
// Output 1: 6

// #include<iostream>
// using namespace std;

// int main() {
//     int arr[] = {1,2,3,3,4,4,4,5};
//     int n = 8;
//     int x;
//     cout<<"enter the target :"<<endl;
//     cin>>x;
//     int low = 0;
//     int high = n-1;
//     bool flag = false;
//     while(low<= high){
//         int mid = low +(high - low)/2;
//         if(arr[mid] == x){
//             if(arr[mid] < arr[mid + 1]){
//                 cout<<"last occurrence index is :"<<mid<<" ";
//                 flag = true;
//                 break;
//             }
//             if(arr[mid] == arr[mid + 1])  low = mid + 1;
//         }
//         else if (arr[mid] > x) high = mid -1;
//         else low = mid +1 ;
//     }
//     if(flag == false) cout<<"Element is not present "<<endl;

// return 0;
// }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q2: Given a sorted binary array, efficiently count the total number of 1’s in it.
// Input 1 : a = [0,0,0,0,1,1]
// Output 1: 2

// #include <bits/stdc++.h>
// using namespace std;
// int countOnes(bool arr[], int n){
// 	int low = 0, high = n - 1;
// 	while (low <= high) {                  // get the middle index
// 		int mid = (low + high) / 2;
// 		if (arr[mid] < 1)        // else recur for left side
// 			high = mid - 1;
// 		else if (arr[mid] > 1) // If element is not last 1, recur for right side
// 			low = mid + 1;
// 		else{
// 			if (mid == n - 1 || arr[mid + 1] != 1) // check if the element at middle index is last 1
// 				return mid + 1;
// 			else
// 				low = mid + 1;
// 		}
// 	}
// }
// int main() {
// 	bool arr[] = {1,1,1,1,1,0,0};
// 	int n = sizeof(arr) / sizeof(arr[0]);
// 	cout << "Count of 1's in given array is "<< countOnes(arr, n);
// 	return 0;
// }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q5: Given a number ‘n’. Predict whether ‘n’ is a valid perfect square or not.
// Input 1: n = 36
// Output 1: yes
// #include<iostream>
// using namespace std;

// bool isperfectsquare(int num){
//     int low =0;
//     int high = num-1;
//     while(low<=high){
//         int mid = low + (high -low)/2;
//         if(mid*mid == num) return true;
//         else if (mid*mid > num) high = mid -1;
//         else low = mid +1;
//     }
//     return false;
// }

// int main() {
//     int n;
//     cout<<"enter the value of n: "<<endl;
//     cin>>n;
//     isperfectsquare(n) ? cout<<"yes" : cout<<"no";

// return 0;
// }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q4: Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n]
// inclusive in sorted order.
// There is only one repeated number in nums, return this repeated number.
// Input 1: arr[] = {1,2,3,3,4}
// Output 1: 3
// Input 2: arr[] = {1,2,2,3,4,5}
// Output 2: 2

// #include<iostream>
// using namespace std;

// int main() {
// int arr[] = {1,2,3,4,4,5};
// int n = 6;
// int low = 0;
// int high = n-1;
// bool flag = false;
// while(low<=high){
//     int mid = low + (high - low)/2;
//     if(arr[mid] == arr[mid + 1] || arr[mid] == arr[mid - 1]){
//         cout<<arr[mid]<<endl;
//         flag = true;
//         break;
//     }
//     else if(arr[mid] > arr[mid+ 1]) high = mid -1;
//     else  low = mid + 1;
// }
// if(flag == false ) cout<<"double element is not present "<<endl;
// return 0;
// }
