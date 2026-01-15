// //ROTATE  THE ARRAY
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
// void reversepart(int i,int j, vector <int>& v){
//     while(i<=j){
//         int temp = v[i];
//         v[i] = v[j];
//         v[j]= temp;
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

//     int x;
//     cout<<"Enter the value of x : "<<" ";
//     cin>>x;

//     reversepart(0,x-1,v);
//     display(v);
// return 0;
// }
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int> &v ){
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
} 

void reversepart(int i,int j, vector <int>& v){
    while(i<=j){
        int temp = v[i];
        v[i] = v[j];
        v[j]= temp;
        i++;
        j--;
    } 

}

int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6); 

    display(v);

    int x;
    cout<<"Enter the value of x : "<<" ";
    cin>>x;
    int n=v.size();
    if(x>n)  x =x%n ;
    reversepart(0,n-x-1,v);
    reversepart(n-x,n-1,v);
    reversepart(0,n-1,v);
   
    display(v);
return 0;
}