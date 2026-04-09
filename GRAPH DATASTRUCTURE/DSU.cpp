// DSU Implementation 

// #include<iostream> 
// #include<vector>
// using namespace std;

// int find(vector<int>& parent,int x){
//     return parent[x] = (parent[x] == x ) ? x : find(parent,parent[x]); 
// }

// void Union(vector<int>& parent,vector<int>& rank , int a ,int b){
//     a = find(parent,a);                                                       
//     b = find(parent,b);                                     
                                                                   
//     if(rank[a] >= rank[b]){                                         // TX = O(log*n)
//         rank[a]++;
//         parent[b] = a;
//     }
//     else{
//         rank[b]++;
//         parent[a] = b;
//     }
// }

// int main(){

//     int n ,m;
//     cout<<"Enter the value of element and Queries : "<<" ";
//     cin>> n >> m;

//     vector<int> parent(n+1);
//     vector<int> rank(n+1,0);
                                                    
//     for(int i = 0 ;i<=n;i++){
//         parent[i] = i;
//     }

//     while(m--){
//         string str;
//         cout<<"Enter your fuctions  : "<<" ";
//         cin>> str;

//         if(str == "union"){
//             int x , y;
//             cin>> x >> y;
//             Union(parent,rank,x,y);
//         }
//         else{
//             int x;
//             cin>> x;
//             cout<<find(parent,x)<<endl;
//         }
//     }
//     return 0;
// }

/////////Disjoint set union 2 from codeforce

#include<iostream>
#include<vector>
using namespace std;

int find(vector<int>& parent,int x){
    if(parent[x] == x) return x;
    return parent[x] = find(parent,parent[x]);
}
void Union(vector<int>& parent,vector<int>& sz,vector<int>& minimal,vector<int>& maximal,vector<int>& rank,int a ,int b){
    a = find(parent,a);
    b = find(parent,b);

    if(a == b ) return;

    if(rank[a] >= rank[b]){
        rank[a]++;
        parent[b] =a;
        sz[a] += sz[b];
        maximal[a] = max(maximal[a],maximal[b]);
        minimal[a] = min(minimal[a],minimal[b]);
    }
    else{
        rank[b]++;
        parent[a] = b;
        sz[b] += sz[a];
        maximal[b] = max(maximal[a],maximal[b]);
        minimal[b] = min(minimal[a],minimal[b]);
    }
}
int main(){

    int n,m;
    cout<<"Enter the value of element and queries : "<<" ";
    cin>> n >> m;

    vector<int> parent(n+1);
    vector<int> rank(n+1,0);
    vector<int> sz(n+1,1);
    vector<int> minimal(n+1);
    vector<int> maximal(n+1);

    for(int i=0;i<n;i++){
        parent[i] = maximal[i] = minimal[i] = i;
    }

    while(m--){
        string str;
        cout<<"Enter your function : "<<" ";
        cin>>str;
        if(str == "union"){
            int x, y;
            cout<<"Enter the value of x and y : "<<" ";
            cin>> x >> y;
            Union(parent,sz,minimal,maximal,rank,x,y);
        }
        else{
            int x;
            cout<<"Enter value of X : "<<endl;
            cin>> x;
            x= find(parent,x);
            cout<<minimal[x]<< " "<< maximal[x] << " "<< sz[x]<<endl;
        }
    }
    return 0;
}