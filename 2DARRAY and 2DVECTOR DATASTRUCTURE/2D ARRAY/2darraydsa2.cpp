//  MULTIPLICATION OF MATRIX

// #include<iostream>
// using namespace std;

// int main() {
//     int m;
//     cout<<"Enter the value of rows : "<<" ";
//     cin>>m;
//     int n;
//     cout<<"Enter the value of columns  : "<<" ";
//     cin>>n;
//     int p;
//     cout<<"Enter the value of rows : "<<" ";
//     cin>>p;
//     int q;
//     cout<<"Enter the value of columns : "<<" "; 
//     cin>>q;

//     if(n==p){
//         int a[m][n]; 
//         cout<<"Enter the 1st matrix  element : "<<" ";
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 cin>>a[i][j];
//             }
//         }
//         int b[p][q]; 
//         cout<<"Enter the 2nd matrix  element : "<<" ";
//         for(int i=0;i<p;i++){
//             for(int j=0;j<q;j++){
//                 cin>>b[i][j];
//             }
//         }
        
//         int res[m][q];
//         for(int i=0;i<m;i++){
//             for(int j=0;j<q;j++){
//                  res[i][j] = 0;
//                 // res[i][j] = a[i][0] * b[0][j] + a[i][1] * b[1][j] + a[i][2] + b[2][j];
//                 for(int k=0;k<p;k++){
//                  res[i][j] += a[i][k] * b[k][j];
//                 }
//             }
//         }
        
//         for(int i=0;i<m;i++){
//             for(int j=0;j<q;j++){
//                 cout<<res[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//     }
//     else {
//         cout<<"the matrixes is cannot br print "<<endl;
//     }
// return 0;
// }


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// WAVE PRINT 

// #include<iostream>
// using namespace std;

// int main() {
//     int m;
//     cout<<"Enter the value of rows : "<<" ";
//     cin>>m;
//     int n;
//     cout<<"Enter the value of columns  : "<<" ";
//     cin>>n;

//     int a[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>a[i][j];
//         }
//         cout<<endl;
//     } 

//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }


//         for(int i=0;i<m;i++){
//         if(i % 2 == 0){
//             for(int j=0;j<n;j++){
//                 cout<<a[i][j]<<" ";
//             }
//         }
//         else {
//             for(int j=n-1;j>=0;j--){
//                 cout<<a[i][j]<<" ";
//             }
//         }
//     }
// return 0;
// }

