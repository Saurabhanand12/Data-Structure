#include<iostream>
#include<vector>
using namespace std;

vector<int> counting(int arr[],int n){
    int maxval =0;
    for(int i=0;i<n;i++){
        maxval =  max(maxval,arr[i]);    // find the maximum element
    }

    vector<int> count(n+1);      // create and initialize count array

    for(int i=0;i<n;i++){        // count frequency of each element
        count[arr[i]]++;
    }

    for (int i = 1; i <= maxval; i++){             // compute prefix sum
        count[i] += count[i - 1];
    }

    vector<int> ans(n);
    for (int i = n - 1; i >= 0; i--) {          // build output array
        ans[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    return ans;
}

int main(){
    int arr[] = {5,2,3,2,1};
    int a = sizeof(arr)/sizeof(arr[0]);

    vector<int> sorted = counting(arr,a);

    for (int x : sorted)
        cout << x << " ";

    return 0;
}