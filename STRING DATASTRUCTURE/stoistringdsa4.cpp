// #include<iostream>
// #include<string>
// #include<limits>
// using namespace std;

// int main() {
//     // string s = "12345678";
//     // int x = stoi(s);       //STOI FUNCTION FOR ONLY INT NUMBER 
//     // cout<<x<<endl;

//     string s = "1234567845678956";
//     long long x = stoll(s);       //STOLL FUNCTION for more number  use in long 
//     cout<<x<<endl;
    
// return 0;
// }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<iostream>
// #include<string>
// using namespace std;

// int main() {
//     string arr[] = {"0123","0023","456","00182","940","0002901"};
//     int max = stoi(arr[0]);
//     string maxS = arr[0];
//     for(int i=0;i<6;i++){
//         int x = stoi(arr[i]);
//         if(x>max) {
//             max =x ;
//             maxS = arr[i];  
//         }
//     }
//     cout<<maxS<<endl;

// return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// *****longest common prifix

// class Solution {
// public:
//     string longestCommonPrefix(vector<string>& strs) {
//         int n= strs.size();
//         if(n == 1) return strs[0];
//         sort(strs.begin(),strs.end());
//         string first = strs[0];
//         string last = strs[n-1];
//         string s = "";
//         for(int i=0;i<min(first.size(),last.size());i++){
//             if(first[i] == last[i]){
//                 s += first[i];
//             }
//             else return s;
//         }
//     return s;
//     }
   
// };

////////////////////////////////////////////////////////////////////////////////////////////////////////////
// ****prove isomorphic

// class Solution {
// public:
//     bool isIsomorphic(string s, string t) {
//         if(s.length() != t.length())  return false;
//         vector<int> v(150,1000);
//         for(int i=0;i<s.length();i++){
//             int idx = (int)s[i];
//             if(v[idx]==1000)  v[idx] = s[i] - t[i];
//             else if(v[idx] != (s[i]-t[i])) return false;
//         }
//         for(int i=0;i<150;i++)
//             v[i]=1000;
//             for(int i=0;i<s.length();i++){
//             int idx = (int)t[i];
//             if(v[idx]==1000)  v[idx] = t[i] - s[i];
//             else if(v[idx] != (t[i]-s[i])) return false;
//         }
//         return true;
//     }
// };

#include <bits/stdc++.h>
using namespace std;
int main() {
string s;
cin >> s;
int val = 0, pw = 1;
while (s.size()) {
val += pw * (s.back() - '0');
s.pop_back();
pw *= 10;
}
cout << val;
}

