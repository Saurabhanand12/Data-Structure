// #include<iostream>
// using namespace std;

// int main() {
//     // int arr[3][3] ={{1,2,3},{4,5,6},{7,8,9}};

//     // int arr[3][3]={1,2,3,4,5,6,7,8,9};
//     // for(int i=0;i<=2;i++){
//     //     for(int j=0;j<=2;j++){           //traversal
//     //         cout<<arr[i][j]<<" ";
//     //     }
//     //     cout<<endl;
//     // }

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
//     // print 
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// return 0;
// }
/////////////////////////////////////////////////////////////////////////////////////////////////
// #include<iostream>
// using namespace std;

// int main() {
//     int arr[2][4];

//     for(int i=0;i<2;i++){
//         for(int j=0;j<4;j++){
//             cin>>arr[i][j];
//         }
//         cout<<endl;
//     }

//     for(int i=0;i<2;i++){
//         for(int j=0;j<4;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// return 0;
// }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                       FIND MAXIMUM ELEMENT IN THE 2D ARRAY
// #include<iostream>
// #include<climits>
// using namespace std;

// int main() {
//     int arr[2][4] = {{16,145,67,33},{88,77,46,98}};

//     // for(int i=0;i<2;i++){
//     //     for(int j=0;j<4;j++){
//     //         cin>>arr[i][j];
//     //     }
//     //     cout<<endl;
//     // }

//     for(int i=0;i<2;i++){
//         for(int j=0;j<4;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     int max =INT_MIN;
//     for(int i=0;i<2;i++){
//         for(int j=0;j<4;j++){
//            if(max < arr[i][j])    max = arr[i][j];
//         //    cout<<max<<endl;
//         }
        
//     }
//     cout<<max<<endl;
// return 0;
// }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                        FIND THE SUM OF 2D ARRAY
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
//     int sum =0;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             sum = sum + arr[i][j];
//         }
        
//     }
//     cout<<sum<<endl;
   
// return 0;
// }
