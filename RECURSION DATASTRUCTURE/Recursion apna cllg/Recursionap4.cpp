// #include<iostream>
// using namespace std;

// int partition(int arr[],int s,int e){
//     int count  = 0;
//     int pivort = arr[s];
//     for(int i=s+1;i<=e;i++){
//         if(arr[i] <= pivort) count++;
//     }
       
//     // swap the correct position
//     int pivortindex = s +count;
//     swap(arr[pivortindex],arr[s]);

//     int si = s;
//     int ei = e;

//     while(si < pivortindex && ei > pivortindex){
//         if(arr[si] < pivort)  si++;
//         else if(arr[ei] > pivort)  ei--;
//         else{
//             swap(arr[si++],arr[ei--]);
//         }
//     }
//     return pivortindex;
// }
// void quicksort(int arr[],int s,int e){
//     if(s >= e) return ;

//     // partition
//     int p =partition(arr,s,e);

//     quicksort(arr,s,p-1);
//     quicksort(arr,p+1,e);
// }

// int main(){
//     int arr[] = {2,3,5,9,1,6,10};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     for(int ele: arr){
//         cout<<ele<<" ";
//     }
//     cout<<endl;

//     quicksort(arr,0,n-1);

//     for(int ele : arr){
//         cout<<ele<<" ";
//     }
//     cout<<endl;
// }
