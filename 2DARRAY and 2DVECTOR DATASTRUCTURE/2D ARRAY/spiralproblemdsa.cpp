
// SPIRAL PROBLEM


#include<iostream>
using namespace std;

int main() {
    int m;
    cout<<"Enter the rows : "<<" ";
    cin>>m;
    int n;
    cout<<"Enter the columns : "<<" ";
    cin>>n;
    int a[m][n];
    for(int i=0;i<m;i++){      //rows
        for(int j=0;j<n;j++){   //columns
            cin>>a[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    } 

    int minr=0;
    int minc=0;
    int maxr=m-1;
    int maxc=n-1;
    int tne = n*m;
    int count=0;
   while(minr<=maxr && minc <= maxc){
    for(int j=minc;j<=maxc && count < tne;j++){
        cout<<a[minr][j]<<" ";
        count++;
    }
    minr++;
    // if(minr>maxr || minc > maxc)  break;

    for(int i=minr;i<=maxr && count < tne;i++){
        cout<<a[i][maxc]<<" ";
        count++;
    }
    maxc--;

    for(int j=maxc;j>=minc  && count < tne;j--){
        cout<<a[maxr][j]<<" ";
        count++;
    }
    maxr--;

    for(int i=maxr;i>=minr && count < tne;i--){
        cout<<a[i][minc]<<" ";
        count++;
    }
    minc++; 
   
}

return 0;
}