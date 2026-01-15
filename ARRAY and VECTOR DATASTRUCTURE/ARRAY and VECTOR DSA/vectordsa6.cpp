// ///////////SORT COLOUR PROBLEM

// #include<iostream>
// #include<vector>
// using namespace std;

// void sortcolor(vector<int> &v){
//     int n=v.size();
//     int noz = 0;
//     int noo = 0;
//     int notw = 0;

//     for(int i=0;i<n;i++){
//         if(v[i] == 0) noz++;
//         if(v[i] == 1) noo++;
//         if(v[i] == 2) notw++;
//     }
//     //filling element
//    for(int i=0;i<n;i++){
//     if(i<noz)  v[i]=0;
//     else if(i<(noz+noo)) v[i]=1;
//     else  v[i]=2;
//     }
// }

// int main() {
//     vector<int> v;

//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(2);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(2);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(2);

//     for(int i=0;i<v.size();i++){
//         cout<<v.at(i)<<" ";
//     }
//     cout<<endl; 

//     sortcolor(v);

//     for(int i=0;i<v.size();i++){
//         cout<<v.at(i)<<" ";
//     }
//     cout<<endl; 

// return 0;
// }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//THREE POINTER ALGORITHM ( DUTCH FLAG ALGORITHM)

// #include<iostream>
// #include<vector>
// using namespace std;

// void sortcolor(vector<int> &v){
//     int low = 0;
//     int mid = 0;
//     int high = v.size()-1;
     
//     while(mid <= high){
//         // FIRST CONDITION
//         if(v[mid] == 2){
//             int temp = v[mid];
//             v[mid] = v[high] ;
//             v[high] = temp;
//             high--;
//         }
//         //SECOND CONDITION
//         else if(v[mid] == 0){
//             int temp = v[mid];
//             v[mid] = v[low];
//             v[low] = temp;
//             low++;
//             mid++;
//         }
//         // THIRD CONDITION 
//         else{
//             mid++;
//         }
//     }

// }

// int main() {
//     vector<int> v;

//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(2);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(2);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(2);

//     for(int i=0;i<v.size();i++){
//         cout<<v.at(i)<<" ";
//     }
//     cout<<endl; 

//     sortcolor(v);

//     for(int i=0;i<v.size();i++){
//         cout<<v.at(i)<<" ";
//     }
//     cout<<endl; 

// return 0;
// }