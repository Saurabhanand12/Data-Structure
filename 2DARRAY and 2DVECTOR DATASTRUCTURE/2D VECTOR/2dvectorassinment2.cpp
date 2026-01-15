// #include<iostream>
// using namespace std;

// int main(){
// int a[][2] = {{1,2},{3,4}};
// int i, j;
// for (i = 0; i < 2; i++)
// for (j = 0; j < 2; j++)
// cout << a[i][j];
// return 0;
// }

// Q1. Write a program to print the elements of both the diagonals in a square matrix.
// #include<iostream>
// using namespace std;

// int main() { 
// int m;
// cout<<"Enter the value of m :"<<endl;
// cin>>m;
// int a[m][m];

// for(int i=0;i<m;i++){
//     for(int j=0;j<m;j++){
//         cin>>a[i][j];
//     }
// }

// for(int i=0;i<m;i++){
//     for(int j=0;j<m;j++){
//         cout<<a[i][j]<<" ";
//     }
//     cout<<endl;
// }

// for(int i=0;i<m;i++){
//     for(int j=0;j<m;j++){
//         if(i + j == m-1 || i == j)   cout<<a[i][j]<<" ";
//         else cout<<" ";
       
//     }
//     cout<<endl;
// }

// return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Q2. Write a program to rotate the matrix by 90 degrees anti-clockwise.
// #include<iostream>
// using namespace std;

// int main() {
// int m ;
// cout<<"Enter the value of m : "<<endl;
// cin>>m;
// int a[m][m];
// for(int i=0;i<m;i++){
//     for(int j=0;j<m;j++){
//         cin>>a[i][j];
//     }
//     cout<<endl;
// }
// for(int i=0;i<m;i++){
//     for(int j=0;j<m;j++){
//         cout<<a[i][j]<<" ";
//     }
//     cout<<endl;
// } 
// cout<<"tranpose of matrix"<<endl;
// // TRANSPOSE 
// int t[m][m];
// for(int i=0;i<m;i++){
//     for(int j=0;j<m;j++){
//         t[i][j] = a[j][i];
//          cout<<t[i][j]<<" ";
//     }
//     cout<<endl;
// }

// for(int k=0;k<m;k++){
//     int i=0;
//     int j=m-i-1;
//     while(i<=j){
//         int temp = a[i][k];
//         a[i][k] = a[k][j];
//         a[k][j] =temp;
//         i++;
//         j--;
//     }
// }
// cout<<"final answer"<<endl;
// for(int i=0;i<m;i++){
//     for(int j=0;j<m;j++){
//       cout<<a[i][j]<<" ";
//     }
//     cout<<endl;
// }


// return 0;
// }

////////////////////////////////////////////////////////////////////////////////////////

//Q3. Write a program to print the matrix in wave form.
// #include<iostream>
// using namespace std;

// int main() {
//     int m;
//     cout<<"Enter the size of m: "<<endl;
//     cin>>m;

//     int a[m][m]; 

// // vector<vector<int>> a(m, vector<int>(m));
//     for(int i=0;i<m;i++){
//         for(int j=0;j<m;j++){
//             cin>>a[i][j];
//         }
//     }

//     for(int i=0;i<m;i++){
//         for(int j=0;j<m;j++){
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }  
        
//     cout<<"wave print is : "<<endl;
    
//     for(int j=0;j<m;j++){
//         if(j % 2 == 0) {
//             for(int i=0;i<m;i++){
//                 cout<<a[i][j]<<" ";
//             }
//         } else {
//             for(int i = m - 1; i >= 0; i--){
//                 cout<<a[i][j]<<" ";
//             }
//         }
//    } 
//    cout<<endl;
        
// return 0;
// }



