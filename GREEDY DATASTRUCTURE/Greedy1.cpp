// ////////// MINIMUM PRODUCT SUBSET /////////
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <climits>
// using namespace std;
// int minimum_prod(vector<int>& arr){
//     int cn = 0, cz = 0, cp = 0;
//     int cn_prod = 1, cp_prod = 1;                             // cn = count negative and other
//     for(int i = 0; i < arr.size(); i++){
//         if(arr[i] < 0){
//             cn_prod *= arr[i];
//             cn++;
//         }
//         if(arr[i] == 0) cz++;
//         if(arr[i] > 0){
//            cp_prod *= arr[i];
//             cp++;
//         }
//     }
//     if(cn == 0){
//         if(cz > 0) return 0;
//         else{
//             auto minv = *min_element(arr.begin(), arr.end());
//             return minv;
//         }
//     }
//     else{
//         if(cn % 2 != 0){
//             return cn_prod * cp_prod;
//         }
//         else{
//             int maxv = INT_MIN;
//             for(int i = 0; i < arr.size(); i++){
//                 if(arr[i] < 0){
//                     maxv = max(maxv, arr[i]);
//                 }
//             }
//             return (cn_prod / maxv) * cp_prod;
//         }
//     }
// }
// int main() {
//     vector<int> arr{-2,-3,1,4,-2,-5};
//     cout << minimum_prod(arr) << endl;
//     return 0;
// }
//////////////////////////////////////////////////////////////////////////////////////////////////
///Maximize sum of Array After K Negations ///1005
// class Solution {
//     public:
//         int largestSumAfterKNegations(vector<int>& nums, int k) {                 /// tc = O(klogn +n)
//             priority_queue<int,vector<int>,greater<int>> pq(nums.begin(),nums.end());
//             int sum =0;
//             for(int i=0;i<nums.size();i++)  sum += nums[i];
//             while(k--){
//                 int el = pq.top();
//                 if( el ==  0) break;
//                 pq.pop();
//                 sum -=el;
//                 pq.push(-1*el);
//                 sum +=(-el);
//             }
//             return sum;
//         }
//     };
/////////////////////////////////////////////////////////////////////////////////////////////////////////
////// Maximum Units on a Truck ////1710
// bool cmp(vector<int> &a,vector<int>& b){
//     return a[1] > b[1];
// }
// class Solution {
// public:
//     int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
//         sort(boxTypes.begin(),boxTypes.end(),cmp);
//         int profit =0;
//         for(int i=0;i<boxTypes.size();i++){
//             if(boxTypes[i][0] <= truckSize){
//                 profit +=boxTypes[i][0] *boxTypes[i][1];
//                 truckSize -= boxTypes[i][0];
//             }
//             else{
//                 profit += truckSize*boxTypes[i][1];
//                 truckSize =0;
//             }
//             if(truckSize == 0) break;
//         }
//         return profit;
//     }
// };
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///// MINIMUM COST TO CUT A BOARD INTO SQUARES ///// chocola problem
// #include<iostream>
// #include<vector>
// #include<algorithm>
// #define ll long long int
// using namespace std;
// bool cmp(int x ,int y){
//     return x> y;
// }
// ll mincosttobreakgrid(int n,int m,vector<ll> &ver,vector<ll> &hor){
//     sort(ver.begin(),ver.end(),cmp);
//     sort(hor.begin(),hor.end(),cmp);
//     int hz =1,vr=1;
//     int h =0,v = 0;
//     int ans =0;
//     while(h < hor.size() and v < ver.size()){
//         if(ver[v] > hor[h]){
//             ans += ver[v]*vr;
//             hz++;

//             v++;
//         }
//         else{
//             ans += hor[h]*hz;
//             vr++;

//             h++;
//         }
//     }
//     while(h < hor.size()){
//         ans += hor[h]*hz;
//         vr++;

//         h++;
//     }
//     while(v < ver.size()){
//         ans += ver[v]*vr;
//         hz++;

//         v++;
//     }
//     return ans;
// }
// int main() {
//     int n,m;
//     cin>>m>>n;
//     vector<ll> vertical,horizontal;
//     for(int i=0;i<m-1;i++){
//         int x;
//         cin>>x;
//         vertical.push_back(x);
//     }
//     for(int i=0;i<n-1;i++){
//         int x;
//         cin>>x;
//         horizontal.push_back(x);
//     }
//     cout<<mincosttobreakgrid(n,m,horizontal,vertical)<<endl;
// return 0;
// }

