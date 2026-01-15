// POSTFIX TO PREFIX
// #include<iostream>
// #include<string>
// #include<stack>
// using namespace std;
// string solve(string val1,string val2,char ch){
//     string s ="";
//     s.push_back(ch);
//     s += val1;
//     s += val2;       //  postfix to infix
//     return s;
// }
// int main() {
//     string s = "79+4*8/3-";
//     // make two stack 1 for values and 2 for operator
//     stack<string> val;
//     for(int i=0;i<s.size();i++){
//         // by the using of asciee value
//         if(s[i] >= 48 && s[i] <= 57){        // acsii val for 48 = 1 and 57 = 9
//             val.push(to_string(s[i]-48));
//         }
//         else{
//             // s[i] it is operator
//             string val2 = val.top();
//             val.pop();
//             string val1 = val.top();
//             val.pop();
//             string ans = solve(val1,val2,s[i]);
//             val.push(ans);
//         }
//     }
//     cout<<val.top()<<endl;
// return 0;
// }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// PREFIX TO POSTFIX 
// #include<iostream>
// #include<string>
// #include<stack>
// using namespace std;
// string solve(string val1,string val2,char ch){
//     string s ="";
//     s += val1;
//     s += val2;
//     s.push_back(ch);       //  postfix to infix
//     return s;
// }
// int main() {
//     string s = "-/*+79483";
//     // make two stack 1 for values and 2 for operator
//     stack<string> val;
//     for(int i=s.size()-1;i>=0;i--){
//         // by the using of asciee value
//         if(s[i] >= 48 && s[i] <= 57){        // acsii val for 48 = 1 and 57 = 9
//             val.push(to_string(s[i]-48));
//         }
//         else{
//             // s[i] it is operator
//             string val1 = val.top();
//             val.pop();
//             string val2 = val.top();
//             val.pop();
//             string ans = solve(val1,val2,s[i]);
//             val.push(ans);
//         }
//     }
//     cout<<val.top()<<endl;
// return 0;
// }