// PASCAL TRIANGLE

#include<iostream>
#include<vector>  
using namespace std;

int main() {
    int m=5;
    vector< vector <int> > v;
    for(int i=0;i<m;i++){
        vector<int> a(i+1);
        v.push_back(a);
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || j==i)   v[i][j]=1;
            else  v[i][j] = v[i-1][j] + v[i-1][j-1];
        }
    }

     for(int i=0;i<m;i++){
        for(int j=0;j<=i;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////
//SCORE AFTER FLIPPLING MATRIX
// class Solution {
// public:
//     int matrixScore(vector<vector<int>>& grid) {
//         int row = grid.size();
//         int col =grid[0].size();
//         for(int i=0;i<row;i++){
//             if(grid[i][0] == 0){
//                 for(int j=0;j<col;j++){
//                     if(grid[i][j] == 0) grid[i][j] =1;
//                     else grid[i][j] = 0;
//                 }
//             }
//         }
//         for(int j=0;j<col;j++){
//             int noz=0;
//             int noo=0;
//             for(int i=0;i<row;i++){
//                 if(grid[i][j] == 0) noz++;
//                 else noo++;
//             }
//             if(noz>noo){
//                 for(int i=0;i<row;i++){
//                     if(grid[i][j] == 0) grid[i][j] =1;
//                     else grid[i][j] = 0;
//                 }
//             }
//         }

//         int sum =0;
//         for(int i=0;i<row;i++){
//             int x=1;
//             for(int j=col-1;j>=0;j--){
//                 sum +=grid[i][j] *x;
//                 x *=2;
//             }
//         }
//         return sum;
//     }
// };

///////////////////////////////////////////////////////////////////////////////////////////////////////

// SEARCH 2D MATRIX

// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int rows = matrix.size();
//         int col = matrix[0].size();
//         int i=0;
//         int j=col-1;
//         while(i<=rows-1 && j>=0){
//             if(matrix[i][j] == target) return true;
//             else if(matrix[i][j] > target) j--;
//             else i++;
//        }
//        return false;
        
//     }
// };