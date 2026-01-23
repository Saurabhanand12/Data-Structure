// #include<iostream>
// #include<stack>
// using namespace std;
// void displayrev(stack<int>& st){
//     if(st.size() == 0) return;
//     int x = st.top();
//     cout<<x<<" ";                   // TC = O(n) and  SP = O(n)
//     st.pop();
//     displayrev(st);
//     st.push(x);
// }
// void display(stack<int> st){
//     if(st.size() == 0) return;
//     int x = st.top();
//     st.pop();
//     display(st);
//     cout<<x<<" ";   
//     st.push(x);
// }

// void pushatbottom(stack<int>& st,int val){
//     if(st.size() == 0){
//         st.push(val);
//         return;
//     }                                  //by using recursion  sp = O(n)
//     int x = st.top();
//     st.pop();
//     pushatbottom(st,val);
//     st.push(x);
// }
// void reverse(stack<int>& st){
//     if(st.size() == 1) return;
//     int x = st.top();                 //by recursion
//     st.pop();
//     reverse(st);
//     pushatbottom(st,x);
// }

// int main() {
//     stack<int> st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);
//     st.push(60);
//     // displayrev(st);
//     // display(st);
//     // pushatbottom(st,-10);
//     cout<<endl;
//     display(st);
//     reverse(st);
//     cout<<endl;
//     display(st);
// return 0;
// }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//ARRAY IMPLEMENTATION OF STACK
// #include<iostream>
// using namespace std;
// class stack{
//     public:
//     int arr[5];
//     int idx;
//     stack(){
//         idx = -1;
//     }
//     void push(int val){
//         if(idx == sizeof(arr)/sizeof(arr[0])-1){
//             cout<<"Stack is Full"<<endl;
//             return;
//         }
//         idx++;
//         arr[idx] = val;
//     }
//     void pop(){
//         if(idx == -1){
//             cout<<"Stack is empty"<<endl;
//             return;
//         }
//         idx--;
//     }
//     int top(){
//         if(idx == -1){
//             cout<<"Stack is empty"<<endl;
//             return -1;
//         }
//         return arr[idx];
//     }
//     int size(){
//         return idx+1;
//     }
//     void display(){
//         for(int i=0;i<=idx;i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }
// };

// int main() {
//     stack st;
//     cout<<st.top()<<endl;

//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);
//     st.push(60);
//     cout<<st.size()<<endl;
//     cout<<st.top()<<endl;
//     st.display();
// return 0;
// }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//by vector
// #include<iostream>
// #include<vector>
// using namespace std;
// class stack{
//     public:
//     vector<int> v;
//     stack(){
//     }
//     void push(int val){
//         v.push_back(val);
//     }
//     void pop(){
//         if(v.size() ==0){
//             cout<<"Stack is empty"<<endl;
//             return;
//         }
//         v.pop_back();
//     }
//     int top(){
//         if(v.size() ==0){
//             cout<<"Stack is empty"<<endl;
//             return -1;
//         }
//         return v[v.size()-1];
//     }
//     int size(){
//         return v.size();
//     }
// };

// int main() {
// stack st;
// cout<<st.top()<<endl;

// st.push(10);
// st.push(20);
// st.push(30);
// st.push(40);
// st.push(50);
// st.push(60);
// cout<<st.size()<<endl;
// cout<<st.top()<<endl;
// return 0;
// }
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// STACK IMPLEMENT BY LINKED LIST
// #include<iostream>
// using namespace std;
// class node{
// public:
//     int data;
//     node* next;
//     node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };
// class stack{
//     public: 
//     node* head ;
//     int size;
//     stack(){
//         head = NULL;
//         size = 0;
//     }
//     void push(int data){
//         node* temp = new node(data);
//         temp->next =head ;
//         head = temp;
//         size++;
//     }
//     void pop(){
//         if(head == NULL){
//             cout<<"stack is empty!"<<endl;
//             return;
//         }
//         head = head->next;
//         size--;
//     }
//     int top(){
//         if(head == NULL){
//             cout<<"stack is empty!"<<endl;
//             return -1;
//         }
//         return head ->data;
//     }
//     void print(node* temp){
//         if(temp == NULL) return; 
//         print(temp->next);
//         cout<<temp->data<<" ";
//     }
//     void display(){
//         node* temp = head;
//         print(temp);
//         cout<<endl;
//     }
// };

// int main() {
//     stack st;
//     cout<<st.top()<<endl;

//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);
//     st.push(60);
//     cout<<st.size<<endl;
//     cout<<st.top()<<endl;
//     st.display();

// return 0;
// }