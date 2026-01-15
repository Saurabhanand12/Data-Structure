// VECTOR WITH SIZE

// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {
//     // vector<int> v(5,7);  initial size = 5 and each element has value 7
//     vector<int> v;

//     // vector input

//     for(int i=0;i<5;i++){
//         int x;
//         cin>>x;
//         v.push_back(x);
//     }
//     for(int i=0;i<5;i++){
//         cout<<v[i]<<endl;
//     }
    
//     // cout<<v.size()<<endl;
//     // cout<<v.capacity()<<endl;

//     // cout<<v[4]<<endl;

// return 0;
// }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// #include<vector>
// #include<algorithm>

// using namespace std;

// int main() {
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(5);
//     v.push_back(10);
//     v.push_back(4);

//     // by use of (at function) update the value

//     v.at(1) = 90;
//     // cout<<v.at(2)<<endl;  //  cout<<v[2]<<endl;

//     for(int i=0;i<v.size();i++){
//         cout<<v.at(i)<<endl;
//     }
//     cout<<endl;

//     // use sort function for accending order
//     sort(v.begin(), v.end());
    
//     for(int i=0;i<v.size();i++){
//         cout<<v.at(i)<<endl;
//     }
//     cout<<endl;

// return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////
// #include<iostream>
// #include<vector>
// using namespace std;
// // void change(vector <int> a){
// void change(vector <int> &a){           //  by use of reference
//     a[0] = 100;
//     // for(int i=0;i<a.size();i++){
//     //     cout<<a[i]<<" ";
//     // }
//     // cout<<endl;

// } 

// int main() {
//     vector<int> v;

//     v.push_back(2);
//     v.push_back(4);
//     v.push_back(6);
//     v.push_back(9);

//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;

//     change(v);
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;

// return 0;
// }