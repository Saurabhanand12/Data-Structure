// // // Q3. Given an array of distinct integers, find if there are two pairs (a, b) and (c, d) such that a+b = c+d, and a, b,
// // // c and d are distinct elements. If there are multiple answers, then print any of them.
// #include <iostream>
// #include <unordered_map>
// #include <vector>
// using namespace std;

// void findPairs(int arr[], int n) {
//     // Map to store pairs of sum and their indices
//     unordered_map<int, vector<pair<int, int>>> m;

//     for (int i = 0; i < n - 1; i++) {
//         for (int j = i + 1; j < n; j++) {
//             int sum = arr[i] + arr[j];
//             if (m.find(sum) != m.end()) {
//                 // If the sum already exists, print pairs
//                 for (auto &pair : m[sum]) {
//                     cout << "(" << pair.first << ", " << pair.second << ") and (" << arr[i] << ", " << arr[j] << ")" << endl;
//                     return; // Return after finding the first such pair
//                 }
//             }
//             // Store pair in map
//             m[sum].push_back({arr[i], arr[j]});
//         }
//     }
//     cout << "No such pairs found." << endl;
// }
// int main() {
//     int arr[] = {2, 4, 6, 8, 8, 3, 4, 9};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     findPairs(arr, n);
//     return 0;
// }
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// ////Q1. Given an array of integers and a number k, write a function that returns true if the given array can be divided
// into pairs such that the sum of every pair is divisible by k.
// #include<iostream>
// #include<unordered_map>
// using namespace std;

// bool devpairs(int arr[], int n, int k) {
//     // If n is odd, it's impossible to form pairs
//     if (n % 2 != 0) return false;
//     unordered_map<int, int> remCount;
//     // Count the occurrences of each remainder
//     for (int i = 0; i < n; i++) {
//         int rem = arr[i] % k;
//         if (rem < 0) rem += k;  // Handle negative remainders
//         remCount[rem]++;
//     }
//     // Check if each remainder can be paired with another remainder
//     for (auto x : remCount) {
//         int rem = x.first;
//         int count = x.second;
//         // If remainder is 0, we need an even count
//         if (rem == 0) {
//             if (count % 2 != 0) return false;
//         } else {
//             // If remainder is not 0, it must pair with (k - remainder)
//             if (remCount[k - rem] != count) return false;
//         }
//     }
//     return true;
// }
// int main() {
//     int arr[] = {1, 2, 3, 4, 5, 10};
//     int k = 5;
//     int n = sizeof(arr) / sizeof(arr[0]);

//     if (devpairs(arr, n, k)) {
//         cout << "TRUE" << endl;
//     } else {
//         cout << "FALSE" << endl;
//     }
//     return 0;
// }
////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q2. Given an array of names of candidates in an election. A candidate’s name in the array represents a vote
// cast on the candidate. Print the name of candidates who received the maximum vote. If there is a tie, print a
// lexicographically smaller name.
// #include<iostream>
// #include<algorithm>
// #include<vector>
// #include<unordered_map>
// using namespace std;
// void findwinner(vector<string>& str,int n){
//     int maxvote =0 ;
//     unordered_map<string,int> m;
//     for(auto can : str){
//         m[can]++;
//     }
//     for(auto x : m){
//         maxvote = max(maxvote,x.second);
//     }
//     vector<string> topCandidates;
//     for (auto entry : m) {
//         if (entry.second == maxvote) {
//             topCandidates.push_back(entry.first);
//         }
//     }
//     // Sort the candidates lexicographically
//     sort(topCandidates.begin(), topCandidates.end());
//     cout << topCandidates[0] << endl;
// }

// int main() {
//     vector<string> str = {"Alice", "Bob", "Alice", "Bob", "Alice", "Charlie"};
//     int n = str.size();
//     findwinner(str,n);

// return 0;
// }
