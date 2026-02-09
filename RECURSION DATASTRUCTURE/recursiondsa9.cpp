// // kth symbol in grammar

// #include<iostream>
// using namespace std;

// class Solution {
// public:
//     int kthGrammar(int n, int k) {      // TC =O(n)
//         if(n==1) return 0;
//         if(k % 2==0){
//             int prevans = kthGrammar(n-1,k/2); // odd//flip
//             if(prevans == 0 ) return 1;
//             else return 0;
//         }
//         else{
//             int prevans = kthGrammar(n-1,k/2+1);  // even//same
//             return prevans;
//         }
//     }
// };

// int main() {
//     Solution s;
//     cout<<s.kthGrammar(3,4);
// return 0;
// }

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//COUNT AND SAY

// #include<iostream>
// using namespace std;

// class Solution {
// public:
//     string countAndSay(int n) {
//         if(n == 1) return "1";
//         string str = countAndSay(n-1);
//         string ztr = "";
//         int freq = 1;
//         char ch = str[0];
//         for(int i=1;i<str.length();i++){
//             char dh = str[i];
//             if(ch == dh){
//                 freq++;
//             }
//             else{
//                 ztr += (to_string(freq)+ch);
//                 freq = 1;
//                 ch = dh;
//             }
//         } 
//         ztr += (to_string(freq)+ch);
//         return ztr;
//     }
// };

// int main() {

//     Solution s;
//     int n =  4;

//     cout<<s.countAndSay(n)<<" ";

// return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// permutation squence

// #include<iostream>
// #include<string>
// #include<vector>
// using namespace std;

// void permutation(vector<string>& v,string  ans ,string original){
//     if(original==""){
//        v.push_back(ans);
//         return;
//     }
//     for(int i=0;i<original.length();i++){
//         char ch =original[i];
//         string left = original.substr(0,i);
//         string right = original.substr(i+1);
//         permutation(v,ans+ch,left + right);
//     }
// }

// int main() {
//     string str = "123";
//     vector<string> v;
//     permutation(v,"",str);
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<endl;
//     }

// return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// class Solution {
// public:
//    string helper(string str,int k,string ans){
//         int n = str.length(); 
//         if(n==1){
//             ans += str;
//             return ans;
//         }
//         int fact = 1;
//         for(int i=2;i<=n-1;i++){
//             fact *= i;
//         }
//         int idx = k/fact;
//         if(k % fact==0) idx--;
//         char ch = str[idx];
//         string left = str.substr(0,idx);
//         string right = str.substr(idx+1);
//         int q=1;
//         if(k % fact==0) q = fact;
//         else q = k % fact;
//         return helper(left+right,q,ans+ch);
//    }

//     string getPermutation(int n, int k) {
//         string str = "";
//         for(int i=1;i<=n;i++){
//             str += to_string(i);
//         }
//         string ans = "";
//         return helper(str,k,"");
//     }
// };

///////////////////////////////////////////////////////////////////
// #include<iostream>
// using namespace std;

// int main() {
//     int n=5;
//     cout<<n<<++n<<n++<<--n<<n--<<endl;

// return 0;
// }