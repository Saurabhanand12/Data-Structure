//                      SUM OF SQUARE NUMBERS 
// class Solution {
// public:
//     bool isperfectsquare(int n){
//         int root = sqrt(n);
//         if(root*root == n) return true;
//         else return false;
//     }
//     bool judgeSquareSum(int c) {
//         int x=0;                          //TC = O(root(c))
//         int y=c;
//         while(x<=y){
//             if(isperfectsquare(x) && isperfectsquare(y))
//                 return true;
//             else if(!isperfectsquare(x)){
//                 y = (int)sqrt(y)*(int)sqrt(y);
//                 x=c-y;
//             }
//             else{
//                 x=((int)sqrt(x)+1)*((int)sqrt(x)+1);
//                 y=c-x;
//             }
           
//         }
//         return false;
        
//     }
// };

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//CAPACITY TO SHIP PACKAGES WITHIN D DAYS

// class Solution {
// public:
//     bool check(int mid,vector<int>& weights, int days){
//        int n = weights.size();
//        int m = mid;
//        int count = 1;
//        for(int i=0;i<n;i++){
//         if(m>=weights[i]){
//             m -= weights[i];
//         }
//         else {
//             count++;
//             m = mid;
//             m -= weights[i];
//         }
//        }  
//        if(count>days) return false;
//        else return true;
//     }
//     int shipWithinDays(vector<int>& weights, int days) {   //TC = O(n*log(sum-max))
//         int n = weights.size();
//         int max = INT_MIN;
//         int sum = 0;
//         for(int i=0;i<n;i++){
//             if(max <weights[i])  max = weights[i];
//             sum += weights[i];
//         }
//         int low = max;
//         int high = sum;
//         int mincapacity = sum;
//         while(low<=high){
//             int mid = low+ (high - low) /2;
//             if(check(mid,weights,days)){
//                 mincapacity = mid;
//                 high = mid -1;
//             }
//             else{
//                 low = mid + 1;
//             }
//         }
//         return mincapacity;
        
//     }
// };

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// KOKO EATING BANANAS
// class Solution {
// public:
//     bool check(int speed ,vector<int>& piles, int h){
//         int count = 0;
//         int n= piles.size();
//         for(int i=0;i<n;i++){
//             if(count > h) return false;
//             if(speed>=piles[i]) count++;
//             else if(piles[i] % speed == 0)  count += piles[i]/speed;
//             else  count += piles[i]/speed +1 ;
//         }
//         if(count>h) return false;
//         else return true;
//     }

//     int minEatingSpeed(vector<int>& piles, int h) {
        // int n= piles.size();
        // int mx = -1;
        // for(int i=0;i<n;i++){
        //     mx = max(mx,piles[i]);
        // }
        // int low = 1;
        // int high = mx;
        // int ans =-1;
        // while(low<=high){
        //     int mid = low + (high - low)/2;
        //     if(check(mid,piles,h) == true){
        //         ans = mid;
        //         high = mid -1;
        //     }
        //     else {
        //         low = mid + 1;
        //     }
        // }  
        // return ans;   
//     }
// };

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// MINIMUM TIME TO COMPLETE TRIP
// class Solution {
// public:
//     bool check(long long mid,vector<int>& time, int totalTrips){
//         long long trips=0;
//         int n= time.size();
//         for(int i=0;i<n;i++){
//            trips += mid/(long long)time[i];
//         }
//         if(trips<(long long)totalTrips) return false;
//         else return true;
//     }
//     long long minimumTime(vector<int>& time, int totalTrips) {
//        int n= time.size();
//         int  mx = -1;
//         for(int i=0;i<n;i++){
//             mx = max(mx,time[i]);
//         }
//         long long low = 1;
//         long long high = (long long)mx*(long long)totalTrips;
//         long long  ans =-1;
//         while(low<=high){
//             long long mid = low + (high - low)/2;
//             if(check(mid,time,totalTrips) == true){
//                 ans = mid;
//                 high = mid -1;
//             }
//             else {
//                 low = mid + 1;
//             }
//         }  
//         return ans; 
//     }
// };