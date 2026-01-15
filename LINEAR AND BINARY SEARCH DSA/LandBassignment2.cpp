// Q1: Write a program to apply binary search in array sorted in decreasing order

#include<iostream>
using namespace std;

void decrorder(int arr[], int n, int target){
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = low + (high - low)/2;
        if(arr[mid] == target){
            cout<<"element index are : "<<mid;
            return;
        }
        else if(arr[mid] > target ) low = mid +1;
        else high = mid -1;
    }
    cout<<"element are not present"<<endl;
}

int main() {

int arr[] = {10,9,8,7,6,5,4,3,2,1};
int n = sizeof(arr) / sizeof(arr[0]);

int target ;
cout<<"Enter the value of target :"<<endl;
cin>>target;

decrorder(arr ,n, target);
return 0;
}