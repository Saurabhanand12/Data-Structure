////////////////////////////////       FIND MAJORITY ELEMENT ///////////////////////////////////////////////////////////////////////////////////////
// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n= nums.size();
//         sort(nums.begin(),nums.end());
//         return nums[n/2];
        
//     }
// };

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// REPLACE WITH 0 TO N-1;
// #include<iostream>
// #include<climits>
// #include<vector>
// using namespace std;

// int main() {
//     int arr[] = {19,12,23,8,16};
//     int n = 5;
//     vector<int> v(n,0);
//     int x = 0;
//     for(int ele : arr){
//         cout<<ele<<" ";
//     }
//     cout<<endl;
//     for(int i=0;i<n;i++){
//         int min = INT_MAX;
//         int minidx = -1;
//         for(int j=0;j<n;j++){
//             if(v[j] == 1) continue;
//             if(min > arr[j]){
//                 min = arr[j];
//                 minidx = j;
//             }         
//         }
//         arr[minidx] = x;
//         v[minidx] = 1;
//         x++;
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// return 0;
// }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//ASSIGN COOKIES
// class Solution {
// public:
//     int findContentChildren(vector<int>& g, vector<int>& s) {
//         sort(g.begin(),g.end());
//         sort(s.begin(),s.end());
//         int count = 0;
//         int i=0;
//         int j=0;
//         while(i<g.size() && j<s.size()){
//             if(s[j] >= g[i]){
//                 count++;
//                 i++;
//                 j++;
//             }
//             else{
//                 j++;
//             }
//         }
//         return count;
//     }
// };

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// relpacing each index
#include<iostream>
#include<climits>
using namespace std;
float max(float a,float b){
    if(a>=b) return a;
    else return b;
}

float min(float a,float b){
    if(a<b) return a;
    else return b;
}

int main() {
int arr[] = {5,3,10};
int n= 3;
for(int ele : arr){
    cout<<ele<<" ";
}
cout<<endl;
float kmin = (float)(INT_MIN);
float kmax = (float)(INT_MAX); 
bool flag = true;
for(int i=0;i<n-1;i++){
    if(arr[i] >= arr[i+1]){
        kmin = max(kmin,(arr[i]+arr[i+1])/2.0);
    }
    else{
        kmax = min(kmax,(arr[i]+arr[i+1])/2.0);
    }
    if(kmin > kmax){
        flag = false;
        break;
    }
}

if(flag == false) cout<<-1;
else if(kmin == kmax){
    if(kmin-(int)kmin==0){
        cout<<"there is only one value of k : "<<kmin;
    }
    else cout<<-1;
}
    else{
        if(kmin-(int)kmin>0){
            kmin = (int)kmin + 1;
        }
        cout<<"range of k is : ["<<kmin<<","<<(int)kmax<<"]";
    }
return 0;
}
