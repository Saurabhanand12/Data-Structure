// #include<iostream>
// #include<cmath>
// using namespace std;

// bool isprime(int n){
//     if(n == 1) return false;            //false is 0 ,true is 1  prime number have only two factors and 
//     for(int i=2;i<=n-1;i++){               //composite  have even  number of factor except square 
//         if(n%i == 0) return false;
//     }
//     return true;
// }
// int main(){            // tc = O(n) and  sp = O(1);
//     cout<<isprime(3);
//     return 0;
// }
////////////////////////////////////////////////////
// #include<iostream>
// #include<cmath>
// using namespace std;

// int fact = 0;
// bool isprime(int n){
//     if(n == 1) return false;            
//     for(int i=2;i<=sqrt(n);i++){          // use 60 = 1,2,3,4,5,6,10,12,15,20,30,60; divide in two parts 
//         if(n%i == 0){
//             fact = i;
//             return false;
//         }
//     }
//     return true;
// }
// int main(){                         // tc = O( underroot of n) and  sp = O(1);
//     cout<<isprime(1001)<<endl;
//     cout<<fact<<endl;
//     return 0;
// }

//////////////////////////////////////////////////////////
////////// 2614  PRIME IN DIAGONAL
// class Solution {
// public:
//     bool isprime(int n){
//     if(n == 1) return false;            
//         for(int i=2;i<=sqrt(n);i++){                                  
//             if(n%i == 0) return false;
//         }
//         return true;
//     }
//     int diagonalPrime(vector<vector<int>>& nums) {      // tc = O(n root n)
//         int mx =0 ;
//         int n = nums.size();
//         for(int i=0;i<n;i++){
//             if(isprime(nums[i][i])){
//                 mx = max(mx,nums[i][i]);
//             }
//              if(isprime(nums[i][n-i-1])){
//                 mx = max(mx,nums[i][n-i-1]);
//             }
//         }
//         return mx;
//     }
// };
/////////////////////////////////////////////////////////////////////
///// Print all factor
// #include<iostream>
// using namespace std;
// int printfactor(int n){
//     for(int i=1;i<=n;i++){
//         if(n % i == 0 ) cout<<i<<" ";        // tc = O(n);
//     }
// }
// int main(){
//     printfactor(60);
//     return 0;
// }
/////////////////
// #include<iostream>
// #include<cmath>
// using namespace std;
// int printfactor(int n){
//     for(int i=1;i<sqrt(n);i++){
//         if(n % i == 0 )  cout<<i<<" ";     // tc = O(square of  root n)
//     }
//     for(int i=sqrt(n);i>=1;i--){
//         if(n % i == 0 )  cout<<n/i<<" ";     
//     }
// }
// int main(){
//     printfactor(14);
//     return 0;
// }
////////////////////////////////////////////////////////
////////PERFECT NUMBER // 507
// class Solution {
// public:
//     bool checkPerfectNumber(int num) {
//         int sum1 =0;
//         int sum2 = 0;
//         for(int i=1;i<sqrt(num);i++){            // TC = O(Square root n)
//             if(num % i ==0 ) sum1 +=i;
//         }
//         for(int i=sqrt(num);i>=1;i--){
//             if(num % i ==0) sum2 += num/i;
//         }
//         int ans = sum1 + sum2 -num;
//         if(ans == num) return true;
//         return false;
//     }
// };
///////////////////////////////////////////
//// 263 UGLY NUMBER 
// class Solution {
// public:
//     bool isUgly(int n) {
//         if (n <= 0) return false;  // negative or zero can't be ugly
//         while (n % 2 == 0) n /= 2;
//         while (n % 3 == 0) n /= 3;
//         while (n % 5 == 0) n /= 5;
//         return n == 1;
//     }
// };
