// #include<iostream>
// using namespace std;
// int main() {
// int marks[7];
// for(int i=0;i<=6;i++){
//     cin>>marks[i];
// }
// for(int i=0;i<=6;i++){
// if(marks[i]<35){
//     cout<<i<<endl;
// }
// }
// return 0;
// }
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//                        SUM ALL THE NUMBERS 
// #include<iostream>
// using namespace std;

// int main() {
// int arr[4];
// for(int i=0;i<=3;i++){
//     cin>>arr[i];
// }
// int sum=0;
// for(int i=0;i<=3;i++){
// sum=sum+arr[i];

// }
// cout<<sum<<endl;
// return 0;
// }
////////////////////////////////////////////////////////////////////////////////////////////////////////
//                         PRODUCT ALL THE DIGITS
// #include<iostream>
// using namespace std;

// int main() {
// int n;
// cin>>n;
// int arr[n];
// cout<<"enter the value of array :"<<endl;
// for(int i=0;i<=n-1;i++){
    
//     cin>>arr[i];
// }
// int product = 1;
// for(int i=0;i<=n-1;i++){
//     product= product * arr[i];
// }
// cout<<product;
// return 0;
// }
///////////////////////////////////////////////////////////////////////////////////////////////////
//                          LINEAR SEARCH ELEMENT IS PRESENT 
// #include<iostream>
// using namespace std;
// int main() {
// int n;
// cout<<"enter the size of array :"<<endl;
// cin>>n;
// int arr[n];
// cout<<"enter the value of array :"<<endl;
// for(int i=0;i<=n-1;i++){
    
//     cin>>arr[i];
// }
// int x;
// cout<<"enter the value of x:"<<endl;
// cin>>x;
// bool flag= false;

// for(int i=0;i<=n-1;i++){
//     if(arr[i]==x) flag = true;
// }
// if(flag==true)  cout<<"element is found"<<endl;
// else  cout<<"element is not present"<<endl;
// return 0;
// }
////////////////////////////////////////////////////////////////////////////////////////////////////////
//                      FIND MAXIMUM ELEMENT IN THE ARRAY
// #include<iostream>
// #include<climits>
// using namespace std;

// int main() {
// int n;
// cout<<"enter the size of array :"<<endl;
// cin>>n;
// int arr[n];
// cout<<"enter the value of array :"<<endl;
// for(int i=0;i<=n-1;i++){
    
//     cin>>arr[i];
// }
// // int max =arr[0];
// int max =INT_MIN;
// for(int i=1;i<=n-1;i++){
//     if(max < arr[i]) max=arr[i];
// }
// cout<<max;
// return 0;
//}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                    SECOND LARGEST ELEMENT IN THE ARRAY
// #include<iostream>
// #include<climits>
// using namespace std;

// int main() {
// int n;
// cout<<"enter the size of array :"<<endl;
// cin>>n;
// int arr[n];
// cout<<"enter the value of array :"<<endl;
// for(int i=0;i<=n-1;i++){
    
//     cin>>arr[i];
// }
// // int max =arr[0];
// int max = INT_MIN;
// for(int i=1;i<=n-1;i++){
//     if(max < arr[i]) max=arr[i];
// }
// cout<<max<<endl;

// int smax =INT_MIN;
// for(int i=1;i<=n-1;i++){
//     if(smax <arr[i] && max != arr[i]) smax=arr[i];
// }
// cout<<smax<<endl;
// return 0;
// }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                      COUNT THE NUMBER WHICH IS GREATHER THAN X
// #include<iostream>
// #include<climits>
// using namespace std;

// int main() {
// int n;
// cout<<"enter the size of array :"<<endl;
// cin>>n;
// int arr[n];
// cout<<"enter the value of array :"<<endl;
// for(int i=0;i<=n-1;i++){
    
//     cin>>arr[i];
// }

// int x;
// int count = 0;
// cout<<"Enter the value of x :"<<endl;
// cin>>x;
// for(int i=0;i<=n-1;i++){
//     if(arr[i]> x) 
//     count++;
// }
// cout<<count<<endl;
// return 0;
// }
