// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main() {
//     vector<int> v(5);
//     for(int i=0 ;i<5;i++){
//         cin>>v[i];
//     }
//     sort(v.begin(),v.end());  // in built function = TC=O(nlogn);

//     for(int i=0;i<5;i++){
//         cout<<v[i]<<" ";
//     }

// return 0;                    // basic sorting function 
// }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//bubble sort algorithm 
// #include<iostream>
// using namespace std;

// int main() {
// int arr[] = {22,15,13,10,5,4,2,1,-1,-80};
// int n = sizeof(arr)/sizeof(arr[0]);

// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";       // TC =O(n^2)  // SC = O(1);
// }
// cout<<endl;
// // bubble sort
// // for(int i=0;i<n-1;i++){  //n-1 passes
// //     for(int j=0;j<n-1-i;j++){  // travrese
// //         if(arr[j] > arr[j+1]){
// //             swap(arr[j],arr[j+1]);
// //         }
// //     }
// // }

// //bubble sort optimised 
// for(int i=0;i<n-1;i++){  //n-1 passes
//     bool flag = true;
//     for(int j=0;j<n-1-i;j++){  // travrese    // best case = TC = O(n) and SP = O(1)
//         if(arr[j] > arr[j+1]){               
//             swap(arr[j],arr[j+1]);
//             flag = false;
//         }
//     }
//     if(flag == true){  // didnot swap
//         break;
//     }
// }

// for(int i=0;i<n;i++){      // *******n(n-1)/2 total swap///////////////
//     cout<<arr[i]<<" ";
// }
// return 0;
// }

// bubble sort is a stable sort 
// stable sort  = 1 2 3 4a 4b            a show first and b show second
//unstable sort = 1 2 3 4b 4a 

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//sort string in decreasing order
// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;

// int main() {
//     string s = "AZYZXBYDXJK";
//     string str;
//     for(int i=0 ; i<s.length() ;i++){
//         if(s[i] >= 'X'){
//             str.push_back(s[i]);
//         }
//     }
//     cout<<str<<endl;
//     // by bubble sort
//     for(int i=0;i<str.length()-1;i++){
//         for(int j=0;j<str.length();j++){
//             if(str[j] < str[j+1]){
//                 swap(str[j],str[j+1]);
//             }
//         }
//     }
//    cout<<"decresing  order"<<str;

// return 0;
// }
//////////////////////////////////////////////////////////////////////////////////////////////////////
//push zeroes to end order without changing your order
// #include<iostream>
// using namespace std;

// int main() {
// int arr[] = {5,0,1,2,0,0,4,0,3};
// int n = sizeof(arr)/sizeof(arr[0]);

// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";   
// }
// cout<<endl;
// // bubble sort
// for(int i=0;i<n-1;i++){  //n-1 passes
//     for(int j=0;j<n-1-i;j++){  // travrese
//         if(arr[j] == 0){
//             swap(arr[j],arr[j+1]);
//         }
//     }
// }

// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }
// return 0;
// }