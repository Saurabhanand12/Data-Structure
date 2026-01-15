// MERGE TWO ARRAY BASIS QUESTION 
// #include<iostream>
// #include<vector>
// using namespace std;
// void merge(vector<int>& a,vector<int>& b,vector<int>& res){
//     int i=0;
//     int j=0;
//     int k=0;
//     while(i< a.size() && j< b.size()){
//         if(a[i] < b[j]) res[k++] = a[i++];
//         else res[k++] = b[j++];
//         if(i==a.size()){
//             while(j<b.size()) res[k++] = b[j++];
//         }
//         if(j==b.size()){
//             while(i<a.size()) res[k++] = a[i++];
//         }
//     }
// }
// int main() {
//     int arr[] = {1,4,8,10};
//     int n = sizeof(arr) /sizeof(arr[0]);
//     int brr[] = {2,3,5,6,7,9,11,12};
//     int m = sizeof(brr) /sizeof(brr[0]);
//     vector <int> a(arr,arr+n);
//     vector<int> b(brr,brr+m);
//     vector<int> res(n+m);
//     merge(a,b,res);
//     for(int i =0;i< res.size();i++){
//         cout<<res[i]<<" ";
//     }
//     cout<<endl;
// return 0;
// }
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//MERGE SORT ALGORITHM
// #include<iostream>
// #include<vector>
// using namespace std;
// void merge(vector<int>& a,vector<int>& b,vector<int>& res){
//     int i=0;
//     int j=0;
//     int k=0;
//     while(i< a.size() && j< b.size()){
//         if(a[i] <= b[j]) res[k++] = a[i++];
//         else res[k++] = b[j++];
//         if(i==a.size()){
//             while(j<b.size()) res[k++] = b[j++];
//         }
//         if(j==b.size()){
//             while(i<a.size()) res[k++] = a[i++];
//         }
//     }
// }
// void mergesort(vector<int>& v){      // TC = O(n.logn) 
//     int n = v.size();                //SC= O(n.logn) improved kar sakte hai O(n) by use clear func
//     if(n==1) return ;                //MERGE SORT ARE STABLE
//     int n1 = n/2, n2= n-n/2;
//     vector<int> a(n1) ,b(n2);
//     //copy pasting 
//     for(int i=0;i<n1;i++){
//         a[i] = v[i];
//     }
//     for(int i=0;i<n2;i++){
//         b[i] = v[i+n1];
//     }
//     //magic recursion
//     mergesort(a);
//     mergesort(b);

//     merge(a,b,v);
//     a.clear();
//     b.clear(); 
// }

// int main() {
//     int arr[] ={5,1,3,0,4,9,6};
//     int n= sizeof(arr) /sizeof(arr[0]);
//     vector<int> v(arr,arr+n);
//     for(int i =0;i< v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;

//     mergesort(v);
//     for(int i =0;i< v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;

// return 0;
// }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// INVERSION COUNT 
// #include<iostream>
// #include<vector>
// using namespace std;
// int c=0;
// int inversion(vector<int>& a,vector<int>& b){
//     int count =0;
//     int i=0,j=0;
//     while(i < a.size() && j < b.size()){
//         if(a[i] > b[j]){
//             count += (a.size() - i);
//             j++;
//         } 
//         else {
//             i++;
//         }
//     }
//     return count;
// }
// void merge(vector<int>& a,vector<int>& b,vector<int>& res){
//     int i=0,j=0,k=0;
//     while(i< a.size() && j< b.size()){
//         if(a[i] < b[j]) res[k++] = a[i++];
//         else res[k++] = b[j++];
//         if(i == a.size()) while(j<b.size()) res[k++] = b[j++];
//         if(j == b.size()) while(i<a.size()) res[k++] = a[i++];   
//     }
// }
// void mergesort(vector<int>& v){
//     int n = v.size();
//     if(n==1) return ;
//     int n1 = n/2 , n2 =n-n/2;
//     vector<int> a(n1) ,b(n2);
//     // copy pasting
//     for(int i=0;i<n1;i++){
//         a[i] = v[i];
//     }
//     for(int i=0;i<n2;i++){
//         b[i] = v[i+n1];
//     }
//     mergesort(a);
//     mergesort(b); 
//     // count the inversion 
//     c += inversion(a,b);

//     merge(a,b,v);
//     a.clear();
//     b.clear();
// }

// int main() {
//     int arr[] = {5,1,3,0,4,9,6};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     vector<int> v(arr,arr+n);
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     mergesort(v);

//     cout<<c;
// return 0;
// }