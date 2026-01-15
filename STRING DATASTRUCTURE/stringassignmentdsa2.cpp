// Q1. Input a string and concatenate with its reverse string and print it.
// Input : str = "PWSkills"
// Output : "PWSkillssllikSWP"

// #include<iostream>
// #include<string>
// #include<algorithm>
// #include<limits>
// using namespace std;

// int main() {
//     string s = "saurabhanand";
//     string temp = s;
//         reverse(temp.begin(),temp.end());
//     s += temp;
//     cout<<s<<endl;
// return 0;
// }

/////////////////////////////////////////////////////////////////////////////////////////////////////
// Q2. Find the second largest digit in the string consisting of digits from ‘0’ to ‘9’.
// Input : str = "2947578"
// Output : 8
 
// #include<iostream>
// #include<string>
// #include<climits>
// using namespace std;
 
// int main() {
//     // string p;
//     // cin>>p;
//     string p = "123879";
//     int max = INT_MIN;
//     for(int i=0;i<p.size();i++){
//         if(max < p[i] - '0') max = p[i] -'0';
//     }
//     cout<<max<<endl;
    
//     int smax = INT_MIN;
   
//     for(int i=0;i<p.size();i++){
//         int current = p[i] -'0';
//         if(current > smax && current  < max )   smax = p[i] -'0';
//     }
//     cout<<smax<<endl;
// return 0;
// }