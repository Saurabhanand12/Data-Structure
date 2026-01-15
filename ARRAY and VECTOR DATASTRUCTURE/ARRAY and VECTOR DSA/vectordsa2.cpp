// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {
//     vector<int> v;
//     v.push_back(3);
//     v.push_back(5);
//     v.push_back(8);
//     v.push_back(6);
//     v.push_back(5);
//     v.push_back(1);

//     for(int i=0;i<v.size();i++){
//         cout<<v.at(i)<<" ";
//     }
//     cout<<endl;

//     int x;
//     cout<<"enter the value of x: "<<endl;
//     cin>>x;

//     // int idx = -1;
//     // for(int i=v.size()-1;i>=0;i--){
//     //     if(v[i]==x) {                       //second method
//     //         idx = i;
//     //         break;
//     //     }
        
//     // }
//     // cout<<idx<<" ";

//     int idx =-1;
//     for(int i=0;i<v.size();i++){       // first method
//         if(v[i] == x) idx = i;
//     }
//     cout <<idx<<endl;


// return 0;
// }

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// TWO SUM LEET CODE PROBLEM

// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {
//     vector <int> v;
//     v.push_back(9);
//     v.push_back(4);
//     v.push_back(6);
//     v.push_back(3);
//     v.push_back(6);
//     v.push_back(9);
//     v.push_back(4);

//     for(int i=0;i<v.size();i++){
//         cout<<v.at(i)<<" ";
//     }
//     cout<<endl;

//     int x;
//     cout<<"Enter the value of x: "<<endl;
//     cin>>x;
    
//     for(int i=0;i<=v.size()-2;i++){
//         for(int j=i+1;j<=v.size()-1;j++){
//             if(v[i]+v[j]==x){
//                 cout<<"("<<i<<","<<j<<")"<<endl;
//             }

//         }
//     }

// return 0;
// }