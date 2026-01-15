// #include<iostream>
// using namespace std;
// void fun(int n){
//     if(n==0) return;              // BASE CASE
//     cout<<"physicswallah"<<endl;
//     fun(n-1);
// }                                         //FUNCTIONS CALL ITSELF
// int main() {
//     int x;
//     cout<<"Enter the value of x: "<<endl; 
//     cin>>x;
//     fun(x);
// return 0;
// }
/////////////////////////////////////////////////////////////////////////
//////// FACTORIAL USING RECURSION//////
// #include<iostream>
// using namespace std;
// void factorialall(int x){
//     int f=1; 
//     for(int i=1;i<=x;i++){                          // WITHOUT RECURSION
//         f *= i; 
//         cout<<f<<endl;
//     }
// }
// int fact(int x){
//     if(x==1 || x==0) return 1;  
//     return x*fact(x-1);                  // WITH RECURSION
// }
// int main() {
//     int n;
//     cout<<"Enter the value of n: "<<endl;
//     cin>>n;   
//     cout<<"factorial is :"<<fact(n);
//     // factorialall(n);
// return 0;
// }
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////// PRINT n TO 1 BY RECURSION /////////
// #include<iostream>
// using namespace std;
// void printnum(int x){
//     if(x==0) return;
//     cout<<x<<" ";
//     printnum(x-1);
// }
// int main() {
//     int n;
//     cout<<"Enter the value of n : "<<endl;
//     cin>> n;
//    printnum(n);
// return 0;
// }
//////////////////////////////////////////////////////////////////////////////////
///////////// 1 TO N //////////////////////
// #include<iostream>
// using namespace std;
// void print(int x){
//     int i=1;                            // without recursion
//     while(i<=x){
//         cout<<i<<endl;
//         i++;
//     }
// } 
// void printnum(int i,int x){
//     if(i>x) return;                 // with recursion with extra parameter
//     cout<<i<<endl ;
//     printnum(i+1,x);
// }
// void print1(int x){
//     if(x==0) return;                 // with recursion with no extra  parameter
//     print1(x-1);
//     cout<<x<<endl ;
// }
// int main() {
//     int n;
//     cout<<"Enter the value of n : "<<endl;
//     cin>> n;
//    printnum(1,n);
// //    print(n);
//     // print1(n);
// return 0;
// }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////// print sum from 1 to n ////////////////////
// #include<iostream>
// using namespace std;
// void sum11(int sum,int n){                   //with two parameter
//     if(n == 0) {
//         cout<<sum<<endl;
//         return;
//     }
//     sum11(sum+n,n-1);
// }
// int  sum12(int n){                           
//     if(n == 0)  return 0; 
//     return n+sum12(n-1);
// }
// int main() {
//     int x;
//     cout<<"Enter the value of x : "<<" ";
//     cin>>x;
//     sum11(0,x);
//     // cout<<sum12(x); 
// return 0;
// }