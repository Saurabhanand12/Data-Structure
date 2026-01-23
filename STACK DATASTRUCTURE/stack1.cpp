// #include<iostream>
// #include<stack>
// using namespace std;

// int main() {
//     stack <int> st;
//     // cout<<st.size()<<endl;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);
//     st.push(60);
//     // cout<<st.size()<<endl;
//     st.pop();
//     // cout<<st.size()<<endl;
//     // cout<<st.top()<<endl;

//     //printing the stack   but this method stack is empty
//     // while(st.size() > 0){
//     //     cout<<st.top()<<" ";
//     //     st.pop();
//     // }

//     //printing the stack using extra stack  without empty the stack;
//     stack<int> temp;
//     while(st.size() > 0){
//         cout<<st.top()<<" ";
//         temp.push(st.top());
//         st.pop();
//     }
//     cout<<endl;

    // while(temp.size() > 0){
    //     st.push(temp.top());
    //     temp.pop();
    // }
    // cout<<st.top()<<endl;

// return 0;
// }

//////////// stack in correct order 10 20 30 40 50///////////////////////////////////////////////////////////////////////////////////////////////////////////
// #include<iostream>
// #include<stack>
// using namespace std;

// int main() {
//     stack<int> st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);
//     st.push(60);
//     stack<int> temp;
//     while(st.size()>0){
//         temp.push(st.top());
//         st.pop();
//     }
//     while(temp.size()>0){
//         cout<<temp.top()<<" ";
//         st.push(temp.top());
//         temp.pop();
//     }
//     cout<<endl;
// return 0;
// }

////////// REVERSE A STACK IN ORIGINAL STACK///////////////////////////////////////////////////////////////////////////////////////////////////
// #include<iostream>
// #include<stack>
// using namespace std;

// int main() {
//     stack<int> st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);
//     st.push(60);
//     stack<int> temp1,temp2;
//     while(st.size() >0){
//         temp1.push(st.top());
//         st.pop();
//     }
//     while(temp1.size() >0){
//         temp2.push(temp1.top());
//         temp1.pop();
//     }
//     while(temp2.size() >0){
//         st.push(temp2.top());
//         temp2.pop();
//     }
//     while(st.size() >0){
//         cout<<st.top()<<" ";
//         temp1.push(st.top());
//         st.pop();
//     }

// return 0;
// }
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// COPY STACK IN ANOTHER STACK IN THE SAME ORDER
// #include<iostream>
// #include<stack>
// using namespace std;

// int main() {
//     stack<int> st1,st2;
//     st1.push(10);
//     st1.push(20);
//     st1.push(30);
//     st1.push(40);
//     st1.push(50);
//     st1.push(60);
//     stack<int> temp1;
//     while(st1.size() >0){
//         cout<<st1.top()<<" ";
//         temp1.push(st1.top());
//         st1.pop();
//     }
//     cout<<endl;
//     while(temp1.size() >0){
//         st2.push(temp1.top());
//         temp1.pop();
//     }
//     while(st2.size() >0){
//         cout<<st2.top()<<" ";
//         temp1.push(st2.top());
//         st2.pop();
//     }
// return 0;
// }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// PUSH AT A BOTTOM / AT ANY INDEX
//  #include<iostream>
//  #include<stack>
//  using namespace std;
//  void printstack(stack<int>& st){
//      stack<int> t;
//      while(st.size() > 0){
//          t.push(st.top());
//          st.pop();
//      }
//      cout<<endl;
//      while(t.size() > 0){
//          cout<<t.top()<<" ";
//          st.push(t.top());
//          t.pop();
//      }
//  }
//  void pushatbottom(stack<int>& st,int value){
//      stack<int> temp;
//      while(st.size()>0){
//          temp.push(st.top());
//          st.pop();
//      }
//      st.push(value);
//      while(temp.size() >0){
//          st.push(temp.top());
//          temp.pop();
//      }
//  }
//  void pushatidx(stack<int>& st,int idx,int value){
//      stack<int> temp;
//      while(st.size()> idx){
//          temp.push(st.top());
//          st.pop();
//      }
//      st.push(value);
//      while(temp.size() >0){
//          st.push(temp.top());
//          temp.pop();
//      }
//  }

// int main() {
//     stack<int> st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);
//     st.push(60);
//     printstack(st);
//     pushatbottom(st,80);
//     printstack(st);
//     pushatidx(st,2,110);
//     printstack(st);
// return 0;
// }
////////////////////////////////////
// #include <iostream>
// #include <stack>
// using namespace std;
// void fun(int n){
//     stack<int> s;
//     while (n > 0){
//         s.push(n % 2);
//         n = n / 2;
//     }
//     while (!s.empty()){
//         cout << s.top();
//         s.pop();
//     }
// }
// int main(){
//     int n = 5;
//     fun(5);

//     return 0;
// }