///////////////////////Generate all combinations of size K//// permutation of digit
// #include<iostream>
// #include<vector>
// using namespace std;
// void printsubset(int arr[],int n,int idx,vector<int> ans,int k){
//     if(idx == n){
//     if(ans.size() == k){
//         for(int i=0;i<ans.size();i++){
//             cout<<ans[i]<<" ";
//         }
//         cout<<endl;  
//     }
//     return;
//     }
//     if(ans.size()+(n-idx) < k)  return;           // TIME COMPLEXITY  BETTER HO JAYEGI
//     printsubset(arr,n,idx+1,ans,k);
//     ans.push_back(arr[idx]);
//     printsubset(arr,n,idx+1,ans,k);
// }
// int main() {
//     int arr[] = {1,2,3,4,5};
//     int n =sizeof(arr) / sizeof(arr[0]);
//     vector<int > v;
//     int k= 3;
//     printsubset(arr,n,0,v,k);
// return 0;
// }
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// PERMUTATION OF STRING ////////////////////////////////////////////
// #include<iostream>
// #include<string>
// using namespace std;
// void permutation(string  ans ,string original){
//     if(original==""){
//         cout<<ans<<endl;
//         return;
//     }
//     for(int i=0;i<original.length();i++){
//         char ch =original[i];
//         string left = original.substr(0,i);
//         string right = original.substr(i+1);
//         permutation(ans+ch,left + right);
//     }
// }
// int main() {
//     string str = "abcd";
//     permutation("",str);
// return 0;
// }
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//PRINT SUBARRAY  = subset

// #include<iostream>
// #include<vector>
// using namespace std;

// void subarray(vector<int> v,int arr[],int n , int idx){
//     if(idx == n){
//         for(int i=0;i<v.size();i++){
//             cout<<v[i];
//         }
//         cout<<endl;
//         return;
//     }
//     subarray(v,arr,n,idx+1);
//     if(v.size()==0 || arr[idx-1]==v[v.size()-1]){
//         v.push_back(arr[idx]);
//         subarray(v,arr,n,idx+1);
//     }
// }

// int main() {
//    int arr[] ={1,2,3,4};
//    int n= sizeof(arr)/sizeof(arr[0]);
//     vector<int> v;   
//     subarray(v,arr,n,0);
// //    for(int i=0;i<n;i++){
// //     for(int k=i;k<n;k++){
// //         for(int j=i;j<=k;j++){
// //             cout<<arr[j];
// //            }
// //            cout<<endl;
// //         }
// //    
// return 0;
// }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//PALINDROME NUMBER 
//EXAMPLE DAD,RACECAR 

// #include<iostream>
// #include<string>
// using namespace std;
// // bool palindrome(string s){
// //     int i=0;
// //     int j=s.length()-1;
// //     while(i<j){
// //         if(s[i] != s[j]) return false;
// //         i++;
// //         j--;
// //     }
// //     return true;
// // }
// bool palindrome(string s,int i,int j){
//     if(i>j) return true;
//     if(s[i] != s[j]) return false;
//     else  return palindrome(s,i+1,j-1);
    
// }
// int main() {
//     string s = "racecar";
//     int n= s.size();

//     cout<<palindrome(s,0,s.length()-1)<<endl;
   
// return 0;
// }