// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* next;
//     node* prev;
//     node(int data){
//         this->data = data;
//         this ->next = NULL;
//         this-> prev = NULL;
//     }
// };

// class deque{
//     public:
//     node* head;
//     node* tail;
//     int s;
//     deque(){
//         head = tail = NULL;
//         s = 0;
//     }

//     void pushback(int data){
//         node* temp = new node(data);
//         if(s == 0) head = tail = temp;
//         else{
//             tail->next = temp;
//             temp->prev = tail;
//             tail =temp;
//         }
//         s++;
//     }
//     void pushfront(int data){
//         node* temp = new node(data);
//         if(s == 0) head = tail = temp;
//         else{
//             temp->next = head;
//             head->prev = temp;
//             head = temp;
//         }
//         s++;
//     }
   
//     void popfront(){
//         if(s == 0) {
//             cout<<"linked list is empty"<<endl;
//             return ;
//         }
//         head = head ->next;
//         if(head) head->prev=NULL;
//         if(head == NULL) tail = NULL;
//         s--;
//     }
//     void popback(){
//         if(s == 0) {
//             cout<<"linked list is empty"<<endl;
//             return ;
//         }
//         else if(s==1){
//             popfront();
//             return;
//         }
//         node* temp = tail->prev;
//         temp->next = NULL;
//         tail = temp;
//         s--;
//     }
//     int front(){                             
//         if(s == 0) {                                            
//             cout<<"queue is empty"<<endl;
//             return -1;
//         }
//         return head->data;
//     }
//     int back(){
//         if(s == 0) {
//             cout<<"queue is empty"<<endl;
//             return -1;
//         }
//         return tail->data;
//     }
//     int size(){
//         return s;
//     }
//     bool empty(){
//         if(s==0) return true;
//         else return false;
//     }
//     void display(){
//         node* temp = head;
//         while(temp){
//             cout<<temp->data<<" ";
//             temp = temp->next;
//         }
//         cout<<endl;
//     }
// };

// int main() {
//     deque dq;
//     dq.pushback(10);
//     dq.pushback(20);
//     dq.pushback(30);
//     dq.pushback(40);
//     dq.display();
//     dq.popback();
//     dq.display();
//     dq.pushfront(50);
//     dq.pushfront(60);
//     dq.display();
//     dq.popfront();
//     dq.display();
//     cout<<dq.front()<<endl;
//     cout<<dq.back()<<endl;
// return 0;
// }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// #include<iostream>
// #include<deque>
// using namespace std;
// void display(deque<int>& dq) { 
//     for (int i : dq) { 
//     cout << i << " "; 
//     } 
//     cout << endl; 
// }

// int main() {
//     deque<int> dq;
//     dq.push_back(10);
//     dq.push_back(20);
//     dq.push_back(30);
//     dq.push_back(40);
//     display(dq);
//     dq.pop_back();
//     display(dq);
//     dq.push_front(50);
//     dq.push_front(60);
//     display(dq);
//     dq.pop_front();
//     display(dq);
//     cout<<dq.front()<<endl;
//     cout<<dq.back()<<endl;
// return 0;
// }