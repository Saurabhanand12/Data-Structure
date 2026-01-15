#include <iostream>
using namespace std;

int getMax(int arr[], int n){                  // A utility function to get maximum
    int mx = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > mx)
            mx = arr[i];
    return mx;
}

void countSort(int arr[], int n, int exp){    // A function to do counting sort of arr[] according to the digit

    int output[n];
    int i, count[10] = { 0 };

    for (i = 0; i < n; i++){           // Store count of occurrences in count[]
        count[(arr[i] / exp) % 10]++;
    }                  
        
    for (i = 1; i < 10; i++){          // Change count[i] so that count[i] now contains actual position of this digit in output[]
         count[i] += count[i - 1];
    } 

    for (i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    for (i = 0; i < n; i++){                 // Copy the output array to arr[], so that arr[] now contains sorted
        arr[i] = output[i];                       // numbers according to current digit
    }
}

void radixsort(int arr[], int n){
    int m = getMax(arr, n);                               // Find the maximum number to know number of digits;

    for (int exp = 1; m / exp > 0; exp *= 10){          // Do counting sort for every digit.Note that instead of passing digit
        countSort(arr, n, exp);                         // number, exp is passed. exp is 10^i .where i is current digit number
    }
}


int main(){
    int arr[] = { 170, 45, 75, 90, 802, 24, 2, 66 };
    int n = sizeof(arr) / sizeof(arr[0]);

    radixsort(arr, n);
    
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}