// SORT FUNCTION  THEY GIVE THE ORDER BY ASCI VALUE

// ASCI VALUE OF CAPITAL LETTER IS START FROM 65 TO 90
// ASCI VALUE OF SMALL LETTER IS START FROM 97 TO 122  

// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;

// int main() {
//     string s;
//     getline(cin,s);
//     sort(s.begin(),s.end());
//     cout<<s<<" ";

//     // char ch = ' ';
//     // cout<<(int)ch<<" ";  // asci value of space is 32
    
//     // char ch = '@';
//     // cout<<(int)ch<<" " ;  //  asci value of @ is 64 and # is 35
// return 0;
// }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;

// int main() {
//     string s = "saurabhanand";
//     string t = "sauranandabh"; 
//     sort(s.begin(),s.end());
//     sort(t.begin(),t.end());

//     if(s == t) cout<<"both the words are anagram"<<endl;
    
//     else cout<<"both words are not anagram"<<endl;
    
//  cout<<s<<" ";
// return 0;
// }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
// #include<iostream>
// #include<string>

// using namespace std;

// int main() {
//     string s = "saurabh";

//     int max = 0;
//     for(int i=0;i<s.length();i++){
//         char ch = s[i];
//         int count = 1;
//         for(int j=i+1;j<s.length();j++){
//             if(s[j]==s[i]) count++;
//         }
//         if(max<count)  max = count ;
//     }

//     for(int i=0;i<s.length();i++){   // VERY LONG METHOD   first
//         char ch = s[i];
//         int count = 1;
//         for(int j=i+1;j<s.length();j++){
//             if(s[j]==s[i]) count++;
//         }
//         if(count == max ) {
//             cout<<ch<<" : "<<max<<endl; 
//         }
//     }

// return 0;
// }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main() {
    string s = "leetcode";
    vector<int> arr(26,0);
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        int ascii = (int)ch;
        arr[ascii-97]++;
    }
    int mx =0;
    for(int i=0;i<26;i++){
        if(arr[i]>mx)  mx =arr[i];
    }

     for(int i=0;i<26;i++){
        if(arr[i]==mx)  {
            int ascii = i+97;
            char ch= (char)ascii;

            cout<<ch<<" : "<<mx<<endl;
        }
    }
return 0;
}