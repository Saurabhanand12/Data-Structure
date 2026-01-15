//Q1. Count the number of triplets whose sum is equal to the given value x.

// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {
//     vector<int> v;

//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(4);
//     v.push_back(7);
//     v.push_back(9);
//     v.push_back(8);
//     v.push_back(3);
//     v.push_back(5);

//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;

//     int x;
//     cout<<" Enter the value of x: "<<endl;
//     cin>>x;

//    int n= v.size();
//     int count=0;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             for(int k=j+1;k<n;k++){
//                 if(v[i] + v[j] + v[k] == x){
//                     cout<<"("<< i<<","<<j<<","<<k<<")"<<endl;
//                     count++;
//                 }
                
//             }
//         }
//     }
// cout<<count<<endl;
// return 0;
// }

//Q2. Find the factorial of a large number.

// #include<iostream>
// #include<vector>
// #include<climits>
// using namespace std;

// int main() {
//     vector <int> v;
//     v.push_back(2);
//     v.push_back(4);
//     v.push_back(5);
//     v.push_back(3);
//     v.push_back(2);
//     v.push_back(1);

//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;


//     int n= v.size();
//     int max = INT_MIN;
//     for(int i=0;i<n;i++){
//         if(max < v[i])  max = v[i];
//     }
//     cout<<max<<endl; 

//     int fact=1;
//     for(int i=0;i<=;i++){
//         fact *= v[i];

        
//     }
//     cout<<"factorial of largest no is : "<<fact<<endl;
  

    
// return 0;
// }

//Q3. Find the first non-repeating element in the array .

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 4, 4, 3, 2, 1};
    int n = 7;

    for (int i = 0; i < n; i++) {
        int j;
        for (j = 0; j < n; j++) {
            if ( i != j  && arr[i] == arr[j])
                break;
        }
        if (j == n) {
            cout << "First non-repeating element: " << arr[i] << endl;
            return 0;
        }
    }

    cout << "No non-repeating element found." << endl;
    return 0;
}
