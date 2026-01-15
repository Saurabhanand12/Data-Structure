#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int display(vector<int>& v1,vector<int>& v2){
    cout<<"First Array are :"<<"  ";
    for(int ele : v1){
        cout<<ele<<" ";
    }
    cout<<endl;

     cout<<"Second Array are :"<<"  ";
    for(int ele : v2){
        cout<<ele<<" ";
    }
    cout<<endl;

}

// int merge(vector<int>& v1 ,vector<int>& v2){
//     vector<int> res;


//     for(int i=0;i< min(v1.size(),v2.size());i++){
//         res.push_back(v1[i]);
//         res.push_back(v2[i]);
//     }

//     sort(res.begin(),res.end());


//     cout<<"Resultant Array is : "<<" ";
//     for(int i=0;i<res.size();i++){
//         cout<<res[i]<<" ";
//     }
//     cout<<endl;
// }
int merge(vector<int>& v1 ,vector<int>& v2){
    int n = v1.size();
    int m = v2.size();
    vector<int> res(m+n);

    int i = 0;
    int j = 0;
    int k = 0;

    while(i<=n-1 && j<=m-1){
        if(v1[i] < v2[j]){
            res[k] = v1[i];
            i++;
        }
        else{
            res[k] = v2[j];
            j++;
        }
        k++;
    }
    if(i == n){
        while(j<=m-1){
            res[k] = v2[j];
            j++;
            k++;
        }
    }
    if(j == m){
        while(i<=n-1){
            res[k] = v1[i];
            i++;
            k++;
        }
    }

    cout<<"Resultant Array is : "<<" ";
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
}


int main(){
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(5);
    v1.push_back(7);
    v1.push_back(9);


    vector<int> v2;
    v2.push_back(2);
    v2.push_back(4);
    v2.push_back(6);
    v2.push_back(8);
    v2.push_back(10);

    display(v1,v2);

    merge(v1,v2);

    
    return 0;
}