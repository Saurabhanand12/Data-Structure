// #include<iostream>
// #include<string>
// #include<stack>
// using namespace std;
// int prio(char ch){
//     if(ch == '+' || ch == '-') return 1;
//     else return 2;
// }
// string solve(string val1,string val2,char ch){
//     string s ="";
//     s += val1;
//     s += val2;
//     s.push_back(ch);       // infix to postfix
//     return s;
// }
// int main() {
//     string s = "(7+9)*4/8-3";
//     // make two stack 1 for values and 2 for operator
//     stack<string> val;
//     stack<char> op;
//     for(int i=0;i<s.size();i++){
//         // by the using of asciee value
//         if(s[i] >= 48 && s[i] <= 57){        // acsii val for 48 = 1 and 57 = 9
//             val.push(to_string(s[i]-48));
//         }
//         else{
//             // s[i] it is operator
//             if(op.size() == 0)  op.push(s[i]);
//             else if(s[i] =='(' || op.top() == '(')   op.push(s[i]);
//             else if(s[i] == ')') {
//                 while(op.top() != '(') {
//                 char ch = op.top();
//                 op.pop();
//                 string val2 = val.top();
//                 val.pop();
//                 string val1 = val.top();
//                 val.pop();
//                 string ans = solve(val1,val2,ch);
//                 val.push(ans); 
//                 }
//                 op.pop();
//             }
//             else if(prio(s[i]) > prio(op.top()))  op.push(s[i]);
//             else{
//                 while(op.size()> 0 && prio(s[i]) <= prio(op.top())){
//                     char ch = op.top();
//                     op.pop();
//                     string val2 = val.top();
//                     val.pop();
//                     string val1 = val.top();
//                     val.pop();
//                     string ans = solve(val1,val2,ch);
//                     val.push(ans);
//                 }
//                 op.push(s[i]);
//             }
//         }
//     }
//     while(op.size() > 0){
//         char ch = op.top();
//         op.pop();
//         string val2 = val.top();
//         val.pop();
//         string val1 = val.top();
//         val.pop();
//         string ans = solve(val1,val2,ch);
//         val.push(ans);
//     }
//     cout<<val.top()<<endl;
// return 0;
// }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//POSTFIX EVALUTION -> POSTFIX TO INFIX(VALUE)
// #include<iostream>
// #include<string>
// #include<stack>
// using namespace std;
// int solve(int val1,int val2,char ch){
//     if(ch == '+') return val1 +val2;
//     else if(ch == '-') return val1 -val2;
//     else if(ch == '*') return val1 *val2;
//     else return val1 /val2;
// }
// int main() {
//     string s = "79+4*8/3-";
//     // make two stack 1 for values and 2 for operator
//     stack<int> val;
//     for(int i=0;i<s.size();i++){
//         // by the using of asciee value
//         if(s[i] >= 48 && s[i] <= 57){        // acsii val for 48 = 1 and 57 = 9
//             val.push(s[i]-48);
//         }
//         else{
//             // s[i] it is operator
//             int val2 = val.top();
//             val.pop();
//             int val1 = val.top();
//             val.pop();
//             int ans = solve(val1,val2,s[i]);
//             val.push(ans);
//         }
//     }
//     cout<<val.top()<<endl;
// return 0;
// }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// POSTFIX TO INFIX CONVERSION
// #include<iostream>
// #include<string>
// #include<stack>
// using namespace std;
// string solve(string val1,string val2,char ch){
//     string s ="";
//     s += val1;
//     s.push_back(ch);
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