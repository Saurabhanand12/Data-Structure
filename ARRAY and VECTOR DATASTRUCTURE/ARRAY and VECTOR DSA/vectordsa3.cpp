//// COPY IN REVERESE ORDER

// #include<iostream>
// #include<vector>
// using namespace std;
// void display(vector<int> &v1){
//     for(int i=0;i<v1.size();i++){
//         cout<<v1.at(i)<<" ";
//     }
//     cout<<endl;
   
// } 

// int main() {
//     vector<int> v1;
//     v1.push_back(1);
//     v1.push_back(2);
//     v1.push_back(3);
//     v1.push_back(4);
//     v1.push_back(5);
//     v1.push_back(6); 

//     display(v1);

//    vector<int> v2(v1.size());

//    for(int i=0;i<v1.size();i++){
//     int j=v1.size()-1 -i;
//     v2[j] = v1[i];
//    }
// //    reverse(v1.begin(),v1.end());    // built_in function 
//    display(v2);


// return 0;
// }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//BY THE USE OF TWO POINTER METHOD REVERSE ARRAY

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// void display(vector<int> &v ){
//     for(int i=0;i<v.size();i++){
//         cout<<v.at(i)<<" ";
//     }
//     cout<<endl;
// } 
// int main() {
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);
//     v.push_back(5);
//     v.push_back(6); 

//     display(v);

//   int i=0;
//   int j=v.size()-1;

//   while(i<=j){
//     // reverse 
//   int temp;
//   temp= v[i];
//   v[i]=v[j];
//   v[j]= temp;
//   i++;
//   j--;
//   }

//   display(v);
// return 0;
// }  
//////////////////////////////////////////////////////////////////////////////////////////////////////
// reverse the vector in between

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// void display(vector<int> &v ){
//     for(int i=0;i<v.size();i++){
//         cout<<v.at(i)<<" ";
//     }
//     cout<<endl;
// } 
// void reversepart(int i, int j, vector <int>& v){
//     while(i<=j){
//         int temp;
//         temp=v[i];
//         v[i] = v[j];
//         v[j] = temp;
//         i++;
//         j--;
//     }
     
// }
// int main() {
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);
//     v.push_back(5);
//     v.push_back(6); 

//     display(v);

//    reversepart(0,3,v);

//   display(v);
// return 0;
// }