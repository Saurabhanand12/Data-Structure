//Q1. Write a program to store 10 at every index of a 2D matrix with 5 rows and 5 columns.
//Write a program to add two matrices and save the result in one of the given matrices.
// #include<iostream>
// using namespace std;

// int main() {
//     int a[5][5];
//     for(int i=0;i<5;i++){
//         for(int j=0;j<5;j++){
//             a[i][j] = 10;
//         }
//     }                                                      // FIRST PART 

//     for(int i=0;i<5;i++){
//         for(int j=0;j<5;j++){
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }

// return 0;
// }

/////////////////////// SECOND PART ///////////////////////////////////////

// #include<iostream>
// using namespace std;

// int main() {
//     int m;
//     cout<<"Enter the rows of matrix : "<<" ";
//     cin>>m;
//     int n;
//     cout<<"Enter the columns of matrix : "<<" ";
//     cin>>n;

//     int p;
//     cout<<"Enter the rows of matrix : "<<" ";
//     cin>>p;
//     int q;
//     cout<<"Enter the columns of matrix : "<<" ";
//     cin>>q;


//     int a[m][n];
    
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//            cin>>a[i][j];
//         }
//         cout<<endl;
//     }                                                     

//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     int b[p][q];
//     for(int i=0;i<p;i++){
//         for(int j=0;j<q;j++){
//            cin>>b[i][j];
//         }
//         cout<<endl;
//     }                                                     

//     for(int i=0;i<p;i++){
//         for(int j=0;j<q;j++){
//             cout<<b[i][j]<<" ";
//         }
//         cout<<endl;
//     }
    
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             a[i][j] = a[i][j] + b[i][j];
//         }
//         cout<<endl;
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//            cout<<a[i][j]<<" "; 
//         }
//         cout<<endl;
//     }

    

// return 0;
// }

//Q3. Write a C++ program to find the largest element of a given 2D array of integers.

// #include<iostream>
// #include<climits>
// using namespace std;

// int main() {
//     int a[2][2];

//     cout<<"Enter the value of matrix : "<<" ";
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             cin>>a[i][j];
//         }
//     }

//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     int max = INT_MIN;
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//            if(max < a[i][j])  max = a[i][j];
//         }
       
//     }
//  cout<<max<<endl;
// return 0;
// }

//Q4. Write a program to print the row number having the maximum sum in a given matrix.
// #include<iostream>
// #include<climits>
// using namespace std;

// int main() {
//     int a[3][3];

//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cin>>a[i][j];
//         }                                           /////// WORNG ANSWER
       
//     }
//  cout<<endl; 
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<a[i][j]<<" ";
//         }  
//         cout<<endl;
//     } 

//     int max = INT_MIN;
//     int sum =0;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//         sum += a[i][j];
//     }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<sum<<" ";
//         }  
//         cout<<endl;
//     } 
 
// return 0;
// }

///////////////////////////////////////////////////////////////////////////////////////////////////////
// Q6. Write a function which accepts a 2D array of integers and its size as arguments and displays the
// elements of middle row and the elements of middle column.
// [Assuming the 2D Array to be a square matrix with odd dimensions i.e. 3x3, 5x5, 7x7 etc...]
// Input 1:

// Input 1:
// Output 1:

// Output 1:
// Explanation : The 2nd row has the maximum sum i.e. 1+4+12+3 = 20
// Solution :
// 1 3 5 7
// 3 4 7 8
// 1 4 12 3

// 1 2 3 4 5 
// 3 4 5 6 7
// 7 6 5 4 3
// 8 7 6 5 4
// 1 2 37 8 0

//     3
//     5
// 7 6 5 4 3
//     6
//     37 

#include<iostream>
using namespace std;

int main() {
int m;
cout<<"Enter the size of m: "<<endl;
cin>>m;

int a[m][m]; 
for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
        cin>>a[i][j];
    }
}

for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}   

for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
        if(i == m-2 || j == 1){
            cout<<a[i][j]<<" ";
        }
        else {
            cout<<"    ";
        }
    }
    cout<<endl;
}
return 0;
}