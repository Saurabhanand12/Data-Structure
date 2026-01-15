// COUNT NUMBER OF 0'S AND 1'S

// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(0);
//     v.push_back(1);

//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
    
//     int noz=0;
//     int noo=1;

//     for(int i=0;i<v.size()-1;i++){
//         if(v[i]==0) noz = noz+1;
//     }
//    cout<<"number of 0's is :"<<noz<<endl;

//    for(int i=0;i<v.size()-1;i++){
//         if(v[i]==1) noo = noo +1;
//     }
//    cout<<"number of 1's is :"<<noo<<endl;

// return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////
// SORT THE ARRAY O'S AND 1'S
// #include<iostream>
// #include<vector>
// using namespace std;

// void sort01(vector<int> &v){
//     int noz=0;
//     int noo=0;

//     for(int i=0;i<v.size();i++){
//         if(v[i]==0)  noz++;
//         else noo++;
//     }
//     //filling element
//     for(int i=0;i<v.size();i++){
//         if(i<noz)  v[i]=0;
//         else v[i]=1;
//     }

// }

// int main() {
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(0);
//     v.push_back(1);

//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
    
//    sort01(v);
//    for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
//    }
//    cout<<endl;

// return 0;
// }

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// BY USING TWO POINTER METHODS 

// #include<iostream>
// #include<vector>
// using namespace std;

// void sort01(vector<int>& v){
    
//     int i=0;
//     int j=v.size()-1;
//     while(i<j){
//         if(v[i]==0) i++;
//         if(v[j]==1) j--;
//         if(i>j) break;
//         if(v[i]==1 && v[j]==0){
//             v[i]=0;
//             v[j]=1;
//             i++;
//             j--;
//         }

//     }
    
// } 

// int main() {
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(0);
//     v.push_back(1);

//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
    
//    sort01(v);
//    for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
//    }
//    cout<<endl;

// return 0;
// }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
// #include<iostream>
// #include<vector>
// using namespace std;

// void sort11(vector<int>& v){
//     int neg = 0;
//     for(int i = 0; i < v.size(); i++){
//         if(v[i] < 0){
//             swap(v[i], v[neg]);
//             neg++;
//         }
//     }
// }

// int main() {
//     vector<int> v = {3, -1, 4, 6, -6, -8, -2};

//     cout << "Original vector: ";
//     for(int i = 0; i < v.size(); i++){
//         cout << v[i] << " ";
//     }
//     cout << endl;

//     sort11(v);
    
//     cout << "Sorted vector: ";
//     for(int i = 0; i < v.size(); i++){
//         cout << v[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }
