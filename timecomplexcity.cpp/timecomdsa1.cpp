// // TIME SPACE COMPLEXCITY

// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {
//     vector<int> arr;
//     arr.push_back(6);
//     arr.push_back(3);
//     arr.push_back(2); 
//     arr.push_back(4);                           //code is time efficient = O(n) and space efficient = O(1)
//     arr.push_back(7);
//     arr.push_back(7);
//     arr.push_back(1);
//     arr.push_back(5);
         

//     int sum =0;
//      int n = arr.size() -1 ;
//     for(int i=0;i<=n;i++){
//         sum += arr[i];
//     }
    
//     int s = n*(n+1)/2;
//     cout<<sum -s<<endl;

// return 0;
// }

#include<iostream>
using namespace std;

int main() {
    int first,last,common ;
    cout<<"enter the value"<<endl;
    cin>>first>>last>>common;
    int i= first;
    while(i<=last){
        cout<<i<<endl;
        i = i + common;
    }

return 0;
}