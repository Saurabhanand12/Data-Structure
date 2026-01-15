// #include<iostream>
// using namespace std;

// void print(int n){
//     if(n == 0) return;
//     cout<<n<<" ";
//     print(n-1);
// }

// int main(){
//     print(5);
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int printfact(int n){
//     if(n == 0) return 1;
//     return n*printfact(n-1);
// }

// int main(){
//     cout<<printfact(5);
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int sum(int n){
//    if(n ==0) return 0;
//     return n+sum(n-1);
// }

// int main() {
//     cout<<sum(5);

// return 0;
// }

// #include<iostream>
// using namespace std;

// void print(int n){
//     if(n == 0) return ;

//     cout<<n<<" ";
//     print(n-1);
// }

// int main(){
//     int n ;
//     cout<<"Enter the of n :"<<" ";
//     cin>>n;

//     print(n);
// }

#include<iostream>
using namespace std;
void saydigit(int n,string arr[]){
    if(n == 0) return;

    int digit = n%10;
    n = n/10;

    cout<<arr[digit]<<" ";

    saydigit(n,arr);
}

int main(){
    string arr[10] ={"zero","one","two","three","four","five","six","seven","eight","nine"};

    int n ;
    cout<<"Enter your value:";
    cin>>n;
    
    cout<<endl;
    saydigit(n,arr);
    cout<<endl;
}

