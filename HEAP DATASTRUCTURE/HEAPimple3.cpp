// ///// IMPLEMENTATIO OF MIN HEAP BY 1) COMPLETE BINARY TREE 2) MIN HEAP --ROOT ELEMENT VALUE IS MINIMUM AND ALL ANOTHER LEVEL ARE HIGH  VALUE IN CAMPARION TO ROOT and VVIMP FOR INTERVIEW 

// #include<iostream>
// using namespace std;
// class Minheap{
// public:
//    int arr[50];
//    int idx;
//    Minheap(){
//     idx = 1;
//    }
//    int top(){
//     return arr[1];
//    }
//    void push(int x){
//     arr[idx] = x;
//     int i = idx;
//     idx++;
//     ////swapping of i with parent till i == 1;
//     while(i!=1){
//         int parent = i/2;
//         if(arr[i] < arr[parent]){
//             swap(arr[i],arr[parent]);
//         }
//         else break;
//         i = parent;
//     }
//     }
//     void pop(){
//         idx--;
//         arr[1] = arr[idx];
//         //rearrangement
//         int i=1;
//         while(true){
//             int left = 2*i,right = 2*i+1;
//             if(left>idx-1) break;
//             if(right > idx-1){
//                 if(arr[i] > arr[left]){
//                     swap(arr[i],arr[left]);
//                     i = left;
//                 }
//                 break;
//             }
//             if(arr[left] < arr[right]){
//                 if(arr[i] > arr[left]){
//                     swap(arr[i],arr[left]);
//                     i = left;
//                 }
//                 else break;
//             }
//             else{
//                 if(arr[i] > arr[right]){
//                     swap(arr[i],arr[right]);
//                     i = right;
//                 }
//                 else break;
//             }
//             }
//         }
//     int size(){
//         return idx-1;
//     }
//     void display(){
//         for(int i=1;i<idx;i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }
    
// };

// int main() {
//     Minheap pq;
//     pq.push(10);
//     pq.push(20);
//     cout<<"Size of heap :"<<pq.size()<<" "<<"Top element is : "<<pq.top()<<endl;
//     pq.push(11);
//     pq.push(2);
//     cout<<"Size of heap :"<<pq.size()<<" "<<"Top element is : "<<pq.top()<<endl;
//     pq.pop();
//     cout<<"Size of heap :"<<pq.size()<<" "<<"Top element is : "<<pq.top()<<endl;
//     pq.display();
// return 0;
// }
///////////////////////////////////////////////////////////////////////////////
/////// MAX IMPLEMENTATION 
// #include<iostream>
// using namespace std;
// class Maxheap{
// public:
//     int arr[50];
//     int idx;
//     Maxheap(){
//         idx = 1;
//     }
//     int top(){
//         return arr[1];
//     }
//     void push(int x){
//         arr[idx] = x;
//         int i = idx;
//         idx++;
//         while(i!=1){
//             int parent = i/2;
//             if(arr[i] > arr[parent]){
//                 swap(arr[i],arr[parent]);
//             }
//             else break;
//             i = parent;
//         }
//     }
//     void pop(){
//         idx--;
//         arr[1] = arr[idx];
//         int i=1;
//         while(true){
//             int left = 2*i, right = 2*i+1;
//             if(left > idx-1) break;
//             if(right > idx-1){
//                 if(arr[left] > arr[i]){
//                     swap(arr[i],arr[left]);
//                     i = left;
//                 }
//                 break;
//             }
//             if(arr[right] > arr[left]){
//                 if(arr[right] > arr[i]){
//                     swap(arr[i],arr[right]);
//                     i = right;
//                 }
//                 else break;
//             }
//             else{
//                 if(arr[left] > arr[i]){
//                     swap(arr[i],arr[left]);
//                     i = left;
//                 }
//                 else break;
//             }
//         }
//     }
//     int size(){
//         return idx-1;
//     }
//     void display(){
//         for(int i=1;i<idx;i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }

// };

// int main() {
//     Maxheap pq;
//     pq.push(40);
//     pq.push(30);
//     cout<<"Size of heap :"<<pq.size()<<" "<<"Top element is : "<<pq.top()<<endl;
//     pq.push(20);
//     pq.push(16);
//     cout<<"Size of heap :"<<pq.size()<<" "<<"Top element is : "<<pq.top()<<endl;
//     pq.push(15);
//     pq.push(50);
//     cout<<"Size of heap :"<<pq.size()<<" "<<"Top element is : "<<pq.top()<<endl;
//     pq.pop();
//     cout<<"Size of heap :"<<pq.size()<<" "<<"Top element is : "<<pq.top()<<endl;
//     pq.display();
// return 0;
// }

///////////////////////////////////////////////////////////////////////////////////////
////// HEAP SORT  //// VVIMP FOR INTERVIEW//
// #include <iostream>
// using namespace std;

// // Function to heapify a subtree rooted at index i
// void heapify(int arr[], int n, int i) {
//     int largest = i;    // Initialize largest as root
//     int left = 2 * i + 1;  // Left child
//     int right = 2 * i + 2; // Right child

//     // If left child is larger than root
//     if (left < n && arr[left] > arr[largest]) {
//         largest = left;
//     }

//     // If right child is larger than largest so far                 /// ISKO HUM BUILT-IN PRIORITY QUEUE SE BHI KAR SAKTE HAI 
//     if (right < n && arr[right] > arr[largest]) {                    // THEY CAN BE DONE BY MAX AND MIN HEAP 
//         largest = right;                                            // TC = O(nlogn) same as merge sort and quick sort
//     }                                                               // sc = O(n)

//     // If largest is not root
//     if (largest != i) {
//         swap(arr[i], arr[largest]);

//         // Recursively heapify the affected sub-tree
//         heapify(arr, n, largest);
//     }
// }

// // Main function to implement heap sort
// void heapSort(int arr[], int n) {
//     // Build a max heap
//     for (int i = n / 2 - 1; i >= 0; i--) {
//         heapify(arr, n, i);
//     }

//     // One by one extract elements from heap
//     for (int i = n - 1; i >= 1; i--) {
//         // Move current root to end
//         swap(arr[0], arr[i]);

//         // Call heapify on the reduced heap
//         heapify(arr, i, 0);
//     }
// }

// // Utility function to print the array
// void printArray(int arr[], int n) {
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int arr[] = {4, 10, 3, 5, 1};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     cout << "Original array: ";
//     printArray(arr, n);

//     heapSort(arr, n);

//     cout << "Sorted array: ";
//     printArray(arr, n);

//     return 0;
// }
