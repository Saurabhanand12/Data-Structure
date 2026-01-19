// first linked list class 

// //LINKED LIST 
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

// int main() {
//     node* a = new node(10);
//     node* b = new node(20);
//     node* c = new node(30);
//     node* d = new node(40);
//     //forming ll
//     a->next = b;
//     b->next = c;
//     c->next = d;
//     // cout<<(a.next)->data;
//     node* temp = a;
//     while(temp != NULL){
//         cout<<temp->data<<" ";        //TC = O(n) and SP = O(1)
//         temp = temp->next;
//     }
//     cout<<endl;

// return 0;
// }
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
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
// void display(node* head){
//     node* temp = head;                     // BY USING FUNCTION  TC = O(n) SC=O(1)
//     while(temp != NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
//     cout<<endl;
// }

// int size(node* head){
//     node* temp = head;     
//     int n=0;                // BY USING FUNCTION find size
//     while(temp != NULL){
//         n++;
//         temp = temp->next;
//     }
//     return n;
// }
// void insertatend(node* head,int data){
//     node* temp = new node(data);                      
//     while(head->next != NULL) head = head-> next;  // TC = O(n)
//         head -> next = temp;
// }

// void displayrec(node* head){
//     if(head == NULL) return;
//     cout<<head->data<<" ";                // BY USING RECURSION TC = O(n) SC=O(n)
//     displayrec(head->next);
// }

// int main() {
//     node* a = new node(10);
//     node* b = new node(20);
//     node* c = new node(30);
//     node* d = new node(40);
//     //forming ll
//     a->next = b;
//     b->next = c;
//     c->next = d;
//     display(a);
//     insertatend(a,50);
//     display(a);

//     // displayrec(a);
//     // cout<<size(a);

// return 0;
// }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//INSERT ANT END AND START
//INSERT AT INDEX
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
//         if(idx<0 || idx > size) cout<<"invalid index"<<endl;
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

// return 0;
// }


