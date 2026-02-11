#include<iostream>
#include<vector>
using namespace std;

bool isSafe(vector<vector<int>> &grid, int i, int j, int n){
    return (i>=0 && j>=0 && i<n && j<n && grid[i][j]==-1);
}

// 8 knight moves
vector<int> dx{-2,-1,-2,-1,2,1,2,1};
vector<int> dy{1,2,-1,-2,1,2,-1,-2};

void display(vector<vector<int>> &grid , int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<grid[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"====================\n";
}

void knightTour(vector<vector<int>> &grid,int i,int j,int n,int count){
    if(count == n*n){
        display(grid,n);
        return;
    }

    // try all 8 moves
    for(int k=0;k<8;k++){
        int ni = i + dx[k];
        int nj = j + dy[k];

        if(isSafe(grid,ni,nj,n)){
            grid[ni][nj] = count;        
            knightTour(grid,ni,nj,n,count+1);
            grid[ni][nj] = -1;           
        }
    }
}

int main() {
    int n = 5;  

    vector<vector<int>> grid(n, vector<int>(n,-1));

    grid[0][0] = 0;
    knightTour(grid,0,0,n,1);

    return 0;
}
