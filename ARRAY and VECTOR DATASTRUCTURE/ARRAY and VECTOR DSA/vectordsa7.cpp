// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> merge(vector<int> &arr1,vector<int> &arr2){
//     int n= arr1.size();
//     int m= arr2.size();
//     vector<int> res(m+n);
//     int i=0;
//     int j=0;
//     int k=0;
//     while(i<=n-1 && j<=m-1){
//         if(arr1[i]<arr2[j]){
//             res[k] = arr1[i];
//             i++;
//         }
//         else {
//         res[k] = arr2[j];
//         j++;
//         }
//         k++;
//     }
//     if(i==n){
//         while(j<=m-1){
//             res[k] = arr2[j];
//             k++;
//             j++;
//         }
//     }
//     if(j==n){
//         while(i<=n-1){
//             res[k] = arr1[i];
//             i++;
//             k++;
//         }
//     }
//     return res;
// } 

// int main() {
//     vector<int> arr1;
    
//     arr1.push_back(1);
//     arr1.push_back(4);
//     arr1.push_back(6);
//     arr1.push_back(8);
//     for(int i=0;i<arr1.size();i++){
//         cout<<arr1.at(i)<<" ";
//     }
//     cout<<endl; 


//     vector<int> arr2;
//     arr2.push_back(2);
//     arr2.push_back(3);
//     arr2.push_back(5);
//     arr2.push_back(7);
//     arr2.push_back(9);
//     arr2.push_back(10);
//     for(int i=0;i<arr2.size();i++){
//         cout<<arr2.at(i)<<" ";
//     }
//     cout<<endl; 

//     vector<int> v=merge(arr1 ,arr2);

//     for(int i=0;i<v.size();i++){
//         cout<<v.at(i)<<" ";
//     }
//     cout<<endl; 

// return 0;
// }

////////////////////////////////////////////////////////////////////////////////////////
//NEXT PERMUTATION 

// class Solution {
// public:
//     void nextPermutation(vector<int>& nums) {
//         int n= nums.size();
//         //1) FINDING PIVOT INDEX
//         int idx = -1;

//         for(int i=n-2;i>=0;i--){
//             if(nums[i]<nums[i+1]){
//                 idx = i;
//                 break; 
//             }
//         }
//             if(idx==-1){
//                 reverse(nums.begin(),nums.end());
//                 return;
//             }
//             // 2) sorting reverse after pivot 
//             reverse(nums.begin()+idx+1,nums.end());
//            //3) finding the just greater elememt then idx
//            int j=-1;
//            for(int i=idx+1;i<n;i++) {
//             if(nums[i]>nums[idx]){
//                 j=i;
//                 break;
//             }
//            }
//            // 4)swapping idx and j
//            int temp = nums[idx];
//            nums[idx] = nums[j] ;
//            nums[j] = temp;
//            return;

        
//     }
// };

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////// TRAPPING RAIN WATER ///
// #include<iostream>
// #include<vector>
// using namespace std;

// // Function to find Previous Greatest
// vector<int> prevGreatest(vector<int>& v){
//     int n = v.size();
//     vector<int> arr(n);

//     arr[0] = -1;
//     int maxel = v[0];
//     for(int i = 1; i < n; i++) {
//         arr[i] = maxel;
//         if(maxel < v[i]) {
//             maxel = v[i];
//         }
//     }
//     cout << "Previous Greatest Elements are: ";
//     for(int i = 0; i < arr.size(); i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return arr;
// }

// // Function to find Next Greatest
// vector<int> NextGreatest(vector<int>& v){
//     int n = v.size();
//     vector<int> brr(n);

//     brr[n-1] = -1;
//     int maxel = v[n-1];
//     for(int i = n-2; i >= 0; i--) {
//         brr[i] = maxel;
//         if(maxel < v[i]) {
//             maxel = v[i];
//         }
//     }
//     cout << "Next Greatest Elements are: ";
//     for(int i = 0; i < brr.size(); i++) {
//         cout << brr[i] << " ";
//     }
//     cout << endl;
//     return brr;
// }

// void resultant(vector<int>& v, vector<int>& arr, vector<int>& brr) {
//     int n = v.size();
//     vector<int> res;

//     // Get the minimum of previous greatest and next greatest
//     for(int i = 0; i < n; i++) {
//         res.push_back(min(arr[i], brr[i]));
//     }

//     // Calculate trapped water at each index
//     vector<int> final;
//     int totalWater = 0;
//     for(int i = 0; i < n; i++) {
//         int waterAtI = res[i] - v[i];
//         if (waterAtI > 0) {
//             final.push_back(waterAtI);
//             totalWater += waterAtI;
//         } else {
//             final.push_back(0);
//         }
//     }

//     // Print Resultant Elements
//     cout << "Water trapped at each index: ";
//     for(int ele : final) {
//         cout << ele << " ";
//     }
//     cout << endl;

//     // Print Total Water Trapped
//     cout << "Total Water Trapped: " << totalWater << endl;
// }


// int main(){
//     vector<int> v = {0,1,0,2,1,0,1,3,2,1,2,1};

//     cout << "Original Elements: ";
//     for(int i = 0; i < v.size(); i++) {
//         cout << v[i] << " ";
//     }
//     cout << endl;

//     vector<int> arr = prevGreatest(v);
//     vector<int> brr = NextGreatest(v);

//     resultant(v,arr, brr);

//     return 0;
// }
