// Q1. Write a program to calculate the sum of odd numbers between a and b (both inclusive) using
// recursion.

// #include<iostream>
// using namespace std;

// int findsum(int curr,int lastnumber){
//     if(curr > lastnumber) return 0;
//     if(curr % 2 == 0) return (curr+1 , lastnumber);
//     return curr + findsum(curr + 2 , lastnumber);
// }

// int main() {
//     int a,b;
//     cout<<"enter the value of a and b : "<<endl;
//     cin>>a>>b;

//     cout<<findsum(a,b)<<endl;

// return 0;
// }


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q2. Calculate the number of ways in which a person can climb n stairs if he can take exactly 1, 2 or 3
// steps at each level.

// #include<iostream>
// using namespace std;

// int findways(int n){
//     if(n<0) return 0;
//     if(n==0) return 1;
//     return findways(n-1) +  findways(n-2) +  findways(n-3);
// }

// int main() {
//     int x;
//     cout<<"Enter the value of x : "<<endl;
//     cin>>x;

//     cout<<findways(x)<<" ";

// return 0;
// }

////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q3. Given a positive integer, return true if it is a power of 2.

// #include<iostream>
// using namespace std;
// bool poweroftwo(int n){
//     if(n == 0) return false;
//     if( n == 1 ) return true ;
//     if(n % 2 == 0) {
//        return poweroftwo(n/2);
//     }
//     return false;
// }

// int main() {
// int x;
// cout<<"enter the value of x : "<<endl;
// cin>>x;

// if(poweroftwo(x)){
//     cout<<"yes"<<endl;
// }
// else {
//     cout<<"no"<<endl;
// }
// return 0;
// }