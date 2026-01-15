// #include<iostream>
// using namespace std;

// void reverse(string& str ,int i,int j){
//     if(i>j) return;

//     swap(str[i],str[j]);
//     i++;
//     j--;

//     reverse(str,i,j);
// }

// int main(){
//     string name = "saurabh";

//     reverse(name,0,name.length()-1);
//     cout<<name<<endl;
// }

//////////////////////////////////////////
// Palidrome string using recursion
// #include<iostream>
// using namespace std;

// bool palindrome(string str,int i,int j){
//     if(i>j) return true;

//     if(str[i] != str[j]) return false;
//     else{
//         return palindrome(str,i+1,j-1);
//     }
// }

// int main(){
//     string name ="racecare";

//     bool ispalindrome = palindrome(name,0,name.length()-1);
//     if(ispalindrome){
//         cout<<"Its palindrome"<<endl;
//     }
//     else{
//         cout<<"Its not palindrome"<<endl;
//     }
// }

///////////////////////////////////////////////////////////////
//BUBBLE SORT USING RECURSION 
// #include<iostream>
// using namespace std;
// void sortarray(int arr[],int size){
//     if(size == 0 || size == 1) return;

//     for(int i=0;i<size-1;i++){
//         if(arr[i] > arr[i+1]){
//             swap(arr[i],arr[i+1]);
//         }
//     }

//     sortarray(arr,size-1);

// }

// int main() {
//     int arr[] = {2,9,7,5,3,122};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     sortarray(arr,n);

//     for(int i=0;i < n ;i++){   
//         cout<<arr[i]<<" ";
//     }

// return 0;
// }

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// lecture 5 
// #include<iostream>
// #include<vector>
// using namespace std;
// void merge(vector<int>& a,vector<int>& b,vector<int>& res){
//     int i=0;
//     int j=0;
//     int k=0;
//     while(i < a.size() && j < b.size()){
//         if(a[i] < b[j]) res[k++] = a[i++];
//         else res[k++] = b[j++];

//         if(i == a.size()){
//             while(j<b.size())  res[k++] = b[j++];
//         }
//         if(j == b.size()){
//             while(i<a.size())  res[k++] = a[i++];
//         }
//     }
// }


// int main(){
//     int arr[] = {1,3,6,8,10};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     int brr[] ={2,4,5,7,9,11,12};
//     int m = sizeof(brr)/sizeof(brr[0]);

//     vector<int> a(arr,arr+n);
//     vector<int> b(brr,brr+m);
//     vector<int> res(n+m);
//     merge(a,b,res);

//     for(int i=0;i<res.size();i++){
//         cout<<res[i]<<" ";
//     }
//     cout<<endl;
// }

///////////////////////////////////////////////
#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& a,vector<int>& b,vector<int>& res){
    int i=0;
    int j=0;
    int k=0;
    while(i< a.size() && j< b.size()){
        if(a[i] <= b[j]) res[k++] = a[i++];
        else res[k++] = b[j++];
        if(i==a.size()){
            while(j<b.size()) res[k++] = b[j++];
        }
        if(j==b.size()){
            while(i<a.size()) res[k++] = a[i++];
        }
    }
}
void mergesort(vector<int>& v){
    int m = v.size();

    if(m == 1) return;
    int n1 = m/2; int n2 = m-m/2;

    vector<int> a(n1),b(n2);

    for(int i=0;i<n1;i++){
        a[i] = v[i];
    }
    for(int i=0;i<n2;i++){
        b[i] = v[i+n1];
    }

    mergesort(a);
    mergesort(b);

    merge(a,b,v);
    a.clear();
    b.clear();
}

int main(){
    int arr[] = {2,4,5,3,7,8,100};
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int> v(arr,arr+n);
    mergesort(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
