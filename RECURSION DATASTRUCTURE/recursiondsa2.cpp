/////// CALCULATE POWER FUNCTION USING RECURSION //////
// #include<iostream>
// using namespace std;
// int power(int a,int b){
//     if(b == 0 ) return a;             // with recursion   TC=O(b) , SC = O(b) stack frame 
//     return a*power(a,b-1);
// }
// int power1(int a,int b){
//     int p=1;
//     for(int i=0;i<b;i++){           // without  recursion    TC = O(n)  , SC = O(1)      //BETTER THAN RECURSION
//         p *= a;
//     }
//     return p;
// }
// int main() {
//     int x,p;
//     cout<<"Enter the value of x and its power : "<<endl;
//     cin>>x>>p;
//     // cout<<power(x,p);
//     cout<<power1(x,p);
// return 0;
// }
//// POWER BY THE LOG FUNCTION /////////////////////////////////////////////////////////////
// #include<iostream>
// using namespace std;

// int power(int a, int b) {
//     if (b == 0) return 1;        // Base case: a^0 = 1

//     int ans = power(a, b / 2);   // Recursive call with b/2
//     ans = ans * ans;             // Square the result

//     if (b % 2 != 0) ans = ans * a;  // If exponent is odd, multiply once more by a

//     return ans;
// }

// int main() {
//     int x, p;
//     cout << "Enter the value of x and its power: " << endl;
//     cin >> x >> p;
//     cout << power(x, p);
//     return 0;
// }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//// FIBONACCI SERIES BY USING RECURSION  
// #include<iostream>
// using namespace std;
// int fibo(int n){
//     if(n==1 || n==2) return 1;
//     return fibo(n-1) + fibo(n-2);                 // they taking index // TC = O(2^n)                                      
// }
// int main() {
//     int x;
//     cout<<"Enter the value of x : "<<" ";
//     cin>>x; 
//     cout<<fibo(x);
// return 0;
// }


