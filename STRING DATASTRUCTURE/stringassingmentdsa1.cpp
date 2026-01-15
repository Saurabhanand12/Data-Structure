// Q1. Input a string of size n and update all the odd positions in the string to character ‘#’. Consider
// 0-based indexing.

// #include<iostream>
// #include<string>
// using namespace std;

// int main() {
//     int  n;
//     cout<<"Enter the value of n : "<<endl;
//     cin>> n;
    
//     char str[n];
//     for(int i=0;i<n;i++){
//         cin>>str[i];
//     }
//     cout<<"final answer"<<endl;
//     for(int i=0;i<n;i++){

//         if( i % 2 == 1 )  str[i] = '#';
//     }
//     cout<<str<<" ";

// return 0;
// }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q2. Input a string of length n and count all the consonants in the given string.
// Input : "pwians"
// Output : 4
// Input : "abdc"
// Output : 3

// #include<iostream>
// using namespace std;

// int main() {
// int  n ;
// cout<<"Enter the value of n :"<<" ";
// cin>>n;
// char str[n];
// for(int i=0;i<n;i++){
//     cin>>str[i];
// }

// int count =0;
// for(int i=0;i<n;i++){
//     if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' )  count++;
// } 
// cout<<n-count<<endl;
// return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q3. Check whether the given string is palindrome or not.
// Input : "abcde"
// Output : No

// Input : "abcdcba"
// Output : Yes

// #include<iostream>
// using namespace std;

// int main() {
// string str = "abcdcba";
// int n=str.size();
// int i=0;
// int j=n-1;
// bool ispalindrome = true;
// while(i<=j){
//     if(str[i] != str[j]) ispalindrome =false;
//     break;
//     i++;
//     j--;
// }
// if(ispalindrome){
//     cout<<"true"<<" ";
// }
// else{
//     cout<<"false"<<" ";
// }

// return 0;
// }

// //////////////////////////////////////////////////////////////////////////////////////////////////////

// Q4. Input a string of even length and reverse the second half of the string
// Input : str = "abcdefgh"
// Output : abcdhgfe

// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;

// int main() {
//     int no;
//     cout<<"Enter the value of no :"<<endl;
//     cin>>no;
//     string str;
//     cin>>str;
//     int n=str.length();
//     if(n %2 == 1) cout<<"invalid input!"<<endl;
//     else {
//     reverse(str.begin()+ n/2 ,str.end() );
//     }
//     cout<<str<<endl;

// return 0;
// }
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q5. Input a string of length less than 10 and convert it into integer without using builtin function.
// Input : "3244"
// Output : 3244
// Input : "12"
// Output : 12

// #include<iostream>
// #include<string>
// using namespace std;

// int main() {
// string s;
// cin>>s;
// cout<<s<<endl;

// return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// string s;
// cin >> s;                                         //// FIRST METHOD
// int val = 0, pw = 1;
// while (s.size()) {
// val += pw * (s.back() - '0');
// s.pop_back();
// pw *= 10;
// }
// cout << val;
// }
//////////////////////////////////////////////////////////////////////////////////////////////////////////
// #include <iostream>
// using namespace std;

// int stringToInt(string str) {
//     int num = 0;
//     for (int i = 0; i < str.length(); i++) {
//         num = num * 10 + (str[i] - '0');
//     }
//     return num;
// }
// int main() {
//     string str;                                                   //////////SECOND METHOD
//     cout << "Enter a string of length less than 10: ";
//     cin >> str;
//     int result = stringToInt(str);
//     cout << "The integer value is: " << result << endl;
//     return 0;
// }
