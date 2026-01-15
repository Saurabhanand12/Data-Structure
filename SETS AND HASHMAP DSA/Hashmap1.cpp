// #include<iostream>
// #include<unordered_map>
// using namespace std;

// int main() {
//     unordered_map<string,int> m;    // map are stored in unordered pair key element 
//     pair<string,int> p1;             // they use pair value <-----> map<key,value> m;
//     p1.first = "Saurabh";             // time comp is same as set in all operations like insert,erase,search
//     p1.second = 87;
//     // pair<string,int> p2;
//     // p2.first = "nitin";
//     // p2.second = 66;
//     // pair<string,int> p3;             //// inserting by long way
//     // p3.first = "Sarthak";
//     // p3.second = 86;
//     m["nitin"] = 66;                   ////inserting by easy way
//     m["sarthak"] = 86;

//     ///INSERTING 
//     m.insert(p1);
//     // m.insert(p2);
//     // m.insert(p3);

//     /// PRINTING
//     for(auto  el : m){                      //auto are use to any pair integer //pair<string,int>
//         cout<<el.first<<" "<<el.second<<endl;
//     }
//     cout<<m.size()<<endl;
//     cout<<m["Saurabh"]<<endl;                //ex 1

//     ///ERASE
//     m.erase("nitin");
//     for(auto  el : m){                     
//         cout<<el.first<<" "<<el.second<<endl;
//     }
//     cout<<m.size()<<endl;

//     /// FIND SAME AS SET TARGET KI JAGAH KEY USE KARNA HAI
//     if(m.find("Saurabh") != m.end()){
//         cout<<"Exists"<<endl;
//     }
//     else cout<<"Not Exists"<<endl;
// return 0;
// }
//////////////////////////////////////////////////////////////////////////////////////////
/// VALID ANAGRAM 242
// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         if(s.size() != t.size()) return false;
//         unordered_map<char,int> mp1;                          // FIRST METHOD
//         unordered_map<char,int> mp2;
//         for(int i=0;i<s.size();i++){
//             mp1[s[i]]++;
//         }
//         for(int i=0;i<t.size();i++){
//             mp2[t[i]]++;
//         }
//         for(auto x : mp1){
//             char ch1 = x.first;
//             int freq1 = x.second;
//             if(mp2.find(ch1) != mp2.end()){
//                 int freq2 = mp2[ch1];           //using ch1 to ye freq de ga ex 1 
//                 if(freq1!=freq2) return false;
//             }
//             else return false;
//         }
//         return true;
//     }
// };
///////////////////////////////////////////////////////////////////////////////
// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         if(s.size() != t.size()) return false;
//         unordered_map<char,int> mp1;
//         for(int i=0;i<s.size();i++){
//             mp1[s[i]]++;
//         }
//         for(int i=0;i<t.size();i++){
//             char ch = t[i];                         // SECOND METHOD
//             if(mp1.find(ch) != mp1.end()){
//                 mp1[ch]--;
//                 if(mp1[ch]==0) mp1.erase(ch);
//             }
//             else return false;
//         }
//         if(mp1.size() > 0) return false;
//         return true;
//     }
// };
//////////////////////////////////////////////////////////////////////////
////// TWO SUM /// 1
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector<int> ans;
//         unordered_map<int,int> m;
//         int n = nums.size();
//         for(int i=0;i<n;i++){                            //TC = O(n)
//             int rem  = target - nums[i];
//             if(m.find(rem) != m.end()){
//                 ans.push_back(m[rem]);
//                 ans.push_back(i);
//             }
//             else m[nums[i]] = i;
//         }
//         return ans;
//     }
// };
////////////////////////////////////////////////////////////////
/// UNIQUE NUMBER OF OCCURENCE////1207
// class Solution {
// public:
//     bool uniqueOccurrences(vector<int>& arr) {
//         unordered_map<int,int> m;
//         int n = arr.size();
//         for(int i=0;i<n;i++){
//             m[arr[i]]++;
//         }                                          // TC =O(n)
//         unordered_set<int> s;
//         for(auto x : m){
//             int freq = x.second;
//             if(s.find(freq) != s.end())  return false;
//             else s.insert(freq);
//         }
//         return true;
//     }
// };