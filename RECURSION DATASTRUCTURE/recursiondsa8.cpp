//GREATER COMMON DIVISIOR

// #include<iostream>
// using namespace std;
// int hcf(int a,int b){    //          TC = O(min(a,b))
//     for(int i=min(a,b);i>=2;i--){
//         if(a%i==0 && b%i==0) return i;
//     }
//     return 1;
// }

// int gcd(int a,int b){          // TC = O(log(a+b))
//     if(a == 0) return b;
//     else return gcd(b%a,a);
// }

// int main() {
//     int a = 7;
//     int b = 63;
//     // cout<<hcf(a,b);
//     cout<<gcd(a,b);

// return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//GENERATE BINARY

#include<iostream>
using namespace std;

void generate(string s,int n){
    if(n ==0){
        cout<<s<<endl;
        return;
    }
    generate(s+'0',n-1);
    if(s == "" || s[s.length()-1] == '0') generate(s+'1',n-1);

}

int main() {
    int n=2;
    generate("",n);

return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// COMBINATION SUM

// #include<iostream>
// #include<vector>
// using namespace std;

// void combination(vector<int> v,int arr[],int n,int target,int idx){
//     if(target == 0){
//         for(int i=0;i<v.size();i++){
//             cout<<v[i]<<" ";
//         }
//         cout<<endl;
//         return;
//     }

//     if(target<0) return;
//     for(int i=idx;i<n;i++){
//         v.push_back(arr[i]);
//         combination(v,arr,n,target-arr[i],i);
//         v.pop_back();
//     }
// }

// int main() {
//     int arr[] = {2,3,5};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     vector<int> v;
//     combination(v,arr,n,10,0);

// return 0;
// }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// //GENERATE PARENTHESE  = ()
// #include<iostream>
// #include<string>
// using namespace std;

// void generate(string s,int op,int cl,int n){
//     if(cl == n ) {
//         cout<<s<<endl;
//         return;
//     }
//     if(op < n)  generate(s+'(',op+1,cl,n);
//     if(cl < op)  generate(s+')',op,cl+1,n);

// }

// int main() {
//     int n;
//     cout<<"Enter the value of n: "<<" ";
//     cin>>n;

//     generate("",0,0,n);

// return 0;
// }
