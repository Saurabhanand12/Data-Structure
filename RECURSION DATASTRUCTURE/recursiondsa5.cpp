// // //////// skip 'a' character
// #include<iostream>
// #include<string>
// using namespace std;
// // void removechar(string ans,string original){
// //     if(original.length()  == 0) {
// //         cout<<ans<<endl;
// //         return;
// //     }                                                            // FIRST METHOD MORE SPACE CONSUMING
// //     char ch = original[0];
// //     if(ch == 'a')  removechar(ans,original.substr(1));
// //     else removechar(ans+ch,original.substr(1));

// // }
// void removechar(string ans,string original,int idx){
//     if( idx ==original.length()) {
//         cout<<ans<<endl;
//         return;
//     }                                                            // SECOND METHOD no space consume
//     char ch = original[idx];
//     if(ch == 'a')  removechar(ans,original,idx+1);
//     else removechar(ans+ch,original,idx+1);

// }
// int main() {
//     // string str = "saurabh anand";             // fm
//     // removechar("",str);

//     string str = "saurabh anand";
//     removechar("",str,0);
// return 0;
// }
// ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////TOWER OF HONAI////////////////////
// #include<iostream>
// using namespace std; 
// void honai(int n,char a,char b, char c){
//     if(n==0)  return ;
//     honai(n-1,a,c,b);
//     cout<<a<<" -> "<<c<<endl;
//     honai(n-1,b,a,c);
// }
// int main() {
// int  n =  3;
// honai(n,'A','B','C');
// return 0;
// }
////////////////////////////////////////////////////////////////////////////////////////////////////
/////////print array all element////
// #include<iostream>
// #include<vector>
// using namespace std; 
// // void display(int arr[],int n,int idx){       // FIRST METHOD
// //     if(idx==n) return;
// //     cout<<arr[idx]<<" ";
// //     display(arr,n,idx+1);
// // }
// void display2(vector<int> v,int idx){          // SECOND METHOD
//     if(idx==v.size()) return;
//     cout<<v[idx]<<" ";
//     display2(v,idx+1);
// }
// int main() {
//     int arr[] = {2,4,7,9,5,3,3,1};
//     int  n = sizeof(arr) / sizeof(arr[0]);
//     vector<int> v;
//     for(int i=0;i<n;i++){
//         v.push_back(arr[i]);
//     }   
//     display2(v,0) ;
//     // display(arr,n,0);
// return 0;
// }
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////// print maximum value in recursion/////////////////////
// #include<iostream>
// #include<climits>
// using namespace std;
// // void printmax(int arr[],int n,int idx , int max){
// //     if(idx == n){  // base case 
// //         cout<<max<<" ";
// //         return;
// //     }                                                                    /// NORMAL PRINT 
// //     if(max < arr[idx])  max = arr[idx];
// //     printmax(arr,n,idx+1,max);
// // }
// int printmax1(int arr[],int n , int idx){
//     if(idx == n)  return INT_MIN;                             //// stored
//     return max(arr[idx],printmax1(arr,n,idx+1));
// }
// int main() {
//     int arr[]= {2,4,6,8,3,1,9,88,7};
//     int n= sizeof(arr) / sizeof(arr[0]);
//     // printmax(arr,n,0,INT_MIN);
//     cout<<printmax1(arr,n,0);
// return 0;
// }