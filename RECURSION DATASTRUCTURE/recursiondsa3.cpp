// // // STAIR PATH/////////////////
// #include<iostream>
// using namespace std;
// int stair(int n){
//     if(n<=2) return n;                                  // TC = O(2^n)  
//     return stair(n-1) + stair(n-2);
// }
// int main() {
//     int x;
//     cout<<"Enter the value of x : "<<" ";
//     cin>>x;
//     cout<<"NUMBER OF WAYS : "<<stair(x)<<" ";
// return 0;
// }
/////// MAZE PATH PROBLEM /////////////////////////////////////////////////////////////////
// #include<iostream>
// using namespace std;
// int maze(int sr,int sc,int er,int ec){                              //ONLY TWO DIRECTION 
//     if(sr>er || sc>ec)  return 0;                                   // RIGHT 
//     if(sr==er && sc==ec) return 1;                                  // DOWN 
//     int rightways = maze(sr,sc+1,er,ec);
//     int leftways = maze(sr+1,sc,er,ec);                       //     first method
//     return rightways + leftways;
// }
// void printpath(int sr,int sc,int er,int ec,string s){
//     if(sr>er || sc>ec ) return;
//     if(sr==er && sc==ec) {                                              // FIRST METHOD TO PRINT WAYS
//         cout<<s<<endl;
//         return;
//     }
//     printpath(sr,sc+1,er,ec,s+'R');
//     printpath(sr+1,sc,er,ec,s+'D');
// }
//  int maze2(int row,int col){                              
//     if(row<1 || col<1)  return 0;                                  
//     if(row==1 && col==1) return 1;                                 
//     int rightways = maze2(row,col-1);
//     int leftways = maze2(row-1,col);                       //    SECOND method
//     return rightways + leftways;
// }
// void printpath2(int row,int col,string s){
//     if(row<1 || col<1 ) return;                                           // SECOND METHOD TO PRINT WAYS
//     if(row==1 && col==1) {
//         cout<<s<<endl;
//         return;
//     }
//     printpath2(row,col-1,s+'R');
//     printpath2(row-1,col,s+'D');
// }
// int main() {
//     // cout<<"ways : "<<maze(1,1,5,5)<<endl;
//       cout<<"ways : "<<maze2(2,2)<<endl;
//     // printpath(1,1,5,5,"");
//     printpath2(2,2,"");
// return 0;
// }