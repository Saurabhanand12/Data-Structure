// //GET AT INDEX
// #include<iostream>
// using namespace std;

// class node{         // USER DEFINED DATA TYPE
// public:
//     int data;
//     node* next;
//     node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };
// class linkedlist{        //USER DEFINED DATA STRUCTURE
// public:
//     node* head;
//     node* tail;
//     int size;
//     linkedlist(){
//         head = tail = NULL;
//         size = 0;
//     }
//     void insertattail(int data){
//         node* temp = new node(data);                //TC =O(1) 
//         if(size == 0)  head = tail = temp;
//         else{
//             tail->next = temp;
//             tail = temp;
//         }
//         size++;
//     }
//     void insertathead(int data){
//         node* temp = new node(data);
//         if(size == 0) head = tail = temp;
//         else{
//             temp -> next = head ;
//             head = temp;
//         }
//          size++;
//     }

//     void insertatidx(int idx,int data){
//         if(idx<0 ||idx > size) cout<<"invalid index"<<endl;
//         else if(idx == 0) insertathead(data);
//         else if(idx == size) insertattail(data);
//         else{
//             node* t = new node(data);
//             node* temp = head;
//             for(int i=1;i<=idx-1;i++){
//                 temp=temp->next;
//             }
//             t->next = temp->next;
//             temp->next = t;
//             size++;
//         }
//     }
//     int getatidx(int idx){           // give the value of the idx
//         if(idx<0 || idx >=size){
//             cout<<"invalid index "<<" ";
//             return -1;
//         }
//         else if(idx == 0) return head->data;
//         else if(idx == size-1) return tail->data;
//         else{
//             node* temp = head;
//             for(int i=1;i<=idx;i++){
//                 temp = temp->next;
//             }
//             return temp -> data;
//         }
//     }

//     void display(){
//         node* temp = head;
//         while(temp != NULL){
//             cout<<temp->data<<" ";
//             temp = temp->next;
//         }
//         cout<<endl;
//     }
// };

// int main() {
//     linkedlist ll;
    
//     ll.insertattail(10);
//     ll.display();
//     ll.insertattail(20);
//     ll.display();
//     ll.insertattail(30);
//     ll.insertattail(40);
//     ll.display();
//     ll.insertathead(50);
//     ll.display();
//     cout<<ll.size<<endl;
//     ll.insertatidx(3,80);
//     ll.display();
//     cout<<ll.size<<endl;

//     cout<<ll.getatidx(2)<<endl;

// return 0;
// }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//DELETE AT HEAD 
// #include<iostream>
// using namespace std;

// class node{         // USER DEFINED DATA TYPE
// public:
//     int data;
//     node* next;
//     node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };
// class linkedlist{        //USER DEFINED DATA STRUCTURE
// public:
//     node* head;
//     node* tail;
//     int size;
//     linkedlist(){
//         head = tail = NULL;
//         size = 0;
//     }
//     void insertattail(int data){
//         node* temp = new node(data);                //TC =O(1) 
//         if(size == 0)  head = tail = temp;
//         else{
//             tail->next = temp;
//             tail = temp;
//         }
//         size++;
//     }
//     void insertathead(int data){
//         node* temp = new node(data);
//         if(size == 0) head = tail = temp;
//         else{
//             temp -> next = head ;
//             head = temp;
//         }
//          size++;
//     }
//     void deleteathead(){
//         if(size == 0) {
//             cout<<"linked list is empty"<<endl;
//             return ;
//         }
//         head = head ->next;
//         size--;
//     }
//     void deleteattail(){
//         if(size == 0) {
//             cout<<"linked list is empty"<<endl;
//             return ;
//         }
//         node* temp =head ;
//         while(temp->next != tail){
//             temp = temp->next;
//         }
//         temp->next = NULL;
//         tail = temp;
//         size--;
//     }
//     void deleteatidx(int idx){
//         if(size==0){
//             cout<<"list is empty "<<endl;
//             return;
//         }
//         else if(idx<0 || idx >= size){
//             cout<<"invalid index "<<endl;
//             return;
//         }
//         else if(idx == 0) return deleteathead();
//         else if(idx == size-1) return deleteattail();
//         else{
//             node* temp = head ;
//             for(int i=1;i<=idx-1;i++){
//                 temp = temp->next;
//             }
//             temp->next = temp->next->next;
//             size--;
//         }
//     }

//     void display(){
//         node* temp = head;
//         while(temp != NULL){
//             cout<<temp->data<<" ";
//             temp = temp->next;
//         }
//         cout<<endl;
//     }
// };

// int main() {
//     linkedlist ll;
    
//     ll.insertattail(10);
//     ll.display();
//     ll.insertattail(20);
//     ll.display();
//     ll.insertattail(30);
//     ll.insertattail(40);
//     ll.display();
//     ll.insertathead(50);
//     ll.display();
//     cout<<ll.size<<endl;
//     // ll.deleteathead();
//     ll.deleteattail();
//     ll.display();
//     cout<<ll.size<<endl;
//     ll.deleteatidx(2);
//     ll.display();
//     cout<<ll.size<<endl;

// return 0;
// }
// //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//delete node in linkedlist 
// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* next;
//     node(int data){
//         this -> data = data;
//         this -> next = NULL;
//     }
// };
// node*  deletenode(node* head , int target){
//     if(head->data == target) {
//         head = head ->next ;
//         return head;
//     }
//     node* temp = head;
//     while(temp -> next->data != target){
//         temp = temp -> next;
//     }
//     temp->next = temp->next->next;
//     return head;
// } 
// void display(node* head){
//     node* temp = head ;
//     while(temp != NULL){
//         cout<<temp->data<<" ";
//         temp = temp -> next;
//     }
//     cout<<endl;
// }
// int main() {
//     node* a = new node(10);
//     node* b = new node(20);
//     node* c = new node(30);
//     node* d = new node(40);
//     node* e = new node(50);

//     a->next = b;
//     b->next = c;
//     c-> next = d;
//     d-> next = e;
//     node* head =a;
//     display(head);
//     head = deletenode(head,10);
//     display(head);
// return 0;
// }
