//Q1. Count the number of elements strictly greater than x.
// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {
//     vector<int> v;
//     int n;
//     cout<<"Enter the size of n: "<<endl;
//     cin>>n;
//     cout<<"Enter the no of element :"<<" ";
//     for(int i=0;i<n;i++){
//         int elements;
//         cin>>elements;
//         v.push_back(elements);
//     }  

//     int x;
//     cout<<"Enter the value of x: "<<" ";
//     cin>>x;
    
//     int count =0;
//     for(int i=0;i<n;i++){
//         if(v[i]> x){
//             count++;
//         }
//         // cout<<count<<endl;
//     }
//     cout<<count<<endl;

// return 0;
// }

// //Q2. WAP to find the largest three elements in the array.
// #include<iostream>
// #include<vector>
// #include<climits>
// using namespace std;

// void largestthreeelement(vector<int>& v){
//     int n= v.size();
//     int max = INT_MIN;
//     for(int i=0;i<n-1;i++){
//         if(max < v[i]) max  = v[i] ;
//     }
//    cout<<max<<endl;

//    int smax = INT_MIN;
//    for(int i=0;i<n-1;i++){
//       if(smax < v[i] && max != v[i]) smax = v[i];
//    }
//    cout<<smax<<endl; 

//    int tmax = INT_MIN;
//    for(int i=0;i<n-1;i++){
//     if(tmax <v[i] && smax != v[i] && max != v[i]) tmax = v[i];
//    }
//    cout<<tmax<<endl;

// }

// int main() {
//     vector<int> v;
    
    // v.push_back(34);
    // v.push_back(80);
    // v.push_back(45);
    // v.push_back(24);
    // v.push_back(79);
    // v.push_back(99);
    // v.push_back(67);
    // v.push_back(49);
    // v.push_back(60);

    // for(int i=0;i<v.size();i++){
    //     cout<<v.at(i)<<" ";
    // }
    // cout<<endl;
    
//     largestthreeelement(v);

// return 0;
// }

// Q3. Check if the given array is sorted or not.


// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8};

//     for (int i = 0; i < v.size(); i++) {
//         cout << v[i] << " ";
//     }
//     cout << endl;

//     int n = v.size();
//     for (int i = 1; i < n; i++) {
//         if (v[i - 1] > v[i]) {
//             cout << "NO" << endl;
//             return 0;
//         }
//     }
//     cout << "YES" << endl;
//     return 0;
// }

//Q4. Find the difference between the sum of elements at even indices to the sum of elements at odd
//indices.

// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {
//     vector<int> v;    
//     v.push_back(1);
//     v.push_back(4);
//     v.push_back(4);
//     v.push_back(2);
//     v.push_back(7);
//     v.push_back(6);
//     v.push_back(6);
//     v.push_back(1);

//     for(int i=0;i<v.size();i++){
//         cout<<v.at(i)<<" ";
//     }
//     cout<<endl;
//     int odd = 0;
//     for(int i=0;i<v.size();i++){
//         if(v[i] % 2 == 0){
//             odd = odd + v[i];
//         } 
//     } 
//     cout<<odd<<endl;

//     int even = 0;
//     for(int i=0;i<v.size();i++){
//         if(v[i] % 2 == 1){
//             even = even + v[i];
//         } 
//     } 
//     cout<<even<<endl;

//     int sum ;
//     sum = odd - even;
//     cout<<"sum difference is : "<<sum<<endl;
// return 0;
// }

// Q5. Given an array of integers, change the value of all odd indexed elements to its second multiple
// and increment all even indexed values by 10.

// #include<iostream>
// using namespace std;

// int main() {
//     int arr[] ={1,3,5,6,8,4,7};
//     for(int i=0;i<7;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl; 

//     for(int i=0;i<7;i++){
//     if(i % 2 ==0 ){
//         arr[i] =arr[i] *  2;
//          cout<<arr[i]<<endl;
//     }
//     else  {arr[i] = arr[i] + 10;
    
//     cout<<arr[i]<<endl;
//     }
//     }

// return 0;
// }

// Q6. Find the unique number in a given Array where all the elements are being repeated twice with one
// value being unique.
// #include<iostream>
// #include<vector>
// using namespace std;

// void unique(vector <int>& v){
//     int n= v.size();
//     int count =0;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(v[i] == v[j])  count++;
//         } 
//         if(count == 0){ 
//             cout<<v[i]<<endl;
//             return ;
//         }

//         cout<<"  UNIQUE "<<endl;
//         return ;
//     }
// }

// int main() {
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(2);
//     v.push_back(1);
//      v.push_back(3); 

//     for(int i=0;i<v.size();i++){
//         cout<<v.at(i)<<endl;
//     }
//     cout<<endl;

//     unique (v);       //wrong answer


// return 0;
// }

//Q7: If an array arr contains n elements, then check if the given array is a palindrome or not .
#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 2, 1, 1, 20};
    int n = 5;

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }
        if (count == 1) {
            cout << "First non-repeating element: " << arr[i] << endl;
            return 0;
        }
    }

    cout << "No unique value." << endl;
    return 0;
}
