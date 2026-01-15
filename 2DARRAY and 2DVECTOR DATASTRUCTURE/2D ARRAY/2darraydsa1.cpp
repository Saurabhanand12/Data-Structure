// #include<iostream>
// #include<climits>
// using namespace std;

// int main() {
//     int arr[2][2] = {2,4,4,2};
//     int mrr[2][2] = {2,4,4,2};
//     int sum[2][2];
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             sum[i][j] = arr[i][j] + mrr[i][j];       // FIRST METHID WITH EXTRA VARIABLE
//         }  
//     }
//    for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             cout<<sum[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     // for(int i=0;i<2;i++){
//     //     for(int j=0;j<2;j++){
//     //        mrr[i][j] = mrr[i][j] + arr[i][j];     // without extra variable
//     //     }
//     //     cout<<endl;
//     // }

//     // for(int i=0;i<2;i++){
//     //     for(int j=0;j<2;j++){
//     //       cout<< mrr[i][j]<<" ";
//     //     }
//     //     cout<<endl;
//     // }
// return 0;
// }

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// PRINT TRANSPOSE OF MATRIX

// #include<iostream>
// #include<climits>
// using namespace std;

// int main() {
//     int m;
//     cout<<"Enter the value of rows : "<<endl;
//     cin>>m;
//     int n;
//     cout<<"Enter the value of columns : "<<endl;
//     cin>>n;
//     int arr[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     } 
//     cout<<endl;
    
//     //TRANSPOSE MATRIX
//    int tr[n][m];
//    for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//            tr[i][j] = arr[j][i];
//         }
       
//     }                                       // SECOND METHOD

//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<tr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
    
// return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// #include<iostream>
// #include<climits>
// using namespace std;

// int main() {
//     int m;
//     cout<<"Enter the value of rows / columns : "<<endl;
//     cin>>m;
//     int arr[m][m];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<m;j++){
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<m;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     } 
//     cout<<endl;
    
//     //TRANSPOSE MATRIX
//     for(int i=0;i<m;i++){
//         for(int j=i+1;j<m;j++){
//         int temp = arr[i][j];
//         arr[i][j] = arr[j][i];
//         arr[j][i] = temp;         // FIRST METHOD
//         }
//     }
                    

//     for(int i=0;i<m;i++){
//         for(int j=0;j<m;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
    
// return 0;
// }

////////////////////////////////////////////////////////////////////////////////////////////////

//ROTATE THE MATRIX BY 90 DEGREE

// class Solution {
// public:
//     void rotate(vector<vector<int>>& matrix) {
//         int n=matrix.size();
//         for (int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 int temp = matrix[i][j];
//                 matrix[i][j] =matrix[j][i];
//                 matrix[j][i] = temp;

//             }
//         }

//         for(int k=0;k<n;k++){
//             int i=0;
//             int j=n-1;
//             while(i<=j){
//                 int temp = matrix[k][i];
//                 matrix[k][i] = matrix[k][j];
//                 matrix[k][j] = temp;
//                 i++;
//                 j--;
//             }
//         }
        
//     }
    
// };