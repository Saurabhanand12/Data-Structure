// #include<iostream>
// using namespace std;
// class node{
// public:
//     int data;
//     node* next;
//     node* prev;
//     node(int data){
//         this->data = data;
//         this->next = NULL;
//         this->prev =NULL;
//     }
// };
// void display(node* head){
//     while(head){
//         cout<<head->data<<" ";
//         head = head->next;
//     }
//     cout<<endl;
// }
// void displayrev(node* tail){
//     while(tail){                                     // DLL FIRST ADVANTAGE REVERSE THE NODE
//         cout<<tail->data<<" ";
//         tail = tail->prev;
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
//     c->next = d;
//     d->next = e; 
//     b->prev = a;
//     c->prev = b;
//     d->prev = c;
//     e->prev = d;

//     display(a);
//     displayrev(e);
// return 0;
// }
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// ALL OPERATIONS 
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

// class dll{
//     public:
//     node* head;
//     node* tail;
//     int size;
//     dll(){
//         head = tail = NULL;
//         size =0;
//     }

//     void insertattail(int data){
//         node* temp = new node(data);
//         if(size == 0) head = tail = temp;
//         else{
//             tail->next = temp;
//             temp->prev = tail;
//             tail =temp;
//         }
//         size++;
//     }
//     void insertathead(int data){
//         node* temp = new node(data);
//         if(size == 0) head = tail = temp;
//         else{
//             temp->next = head;
//             head->prev = temp;
//             head = temp;
//         }
//         size++;
//     }
//     void insertatidx(int idx ,int data){
//         if(idx < 0 || idx > size) cout<<"INVALID INDEX";
//         else if(idx == 0) insertathead(data);
//         else if(idx == size) insertattail(data);
//         else{
//         node* t = new node(data);
//         node* temp = head;
//         for(int i=1;i<idx-1;i++){
//             temp = temp->next;
//         }
//         t->next = temp->next;
//         temp->next = t;
//         t->prev = temp;
//         t->next->prev = t;
//         size++;
//         } 
//     }
//     void deleteathead(){
//         if(size == 0) {
//             cout<<"linked list is empty"<<endl;
//             return ;
//         }
//         head = head ->next;
//         if(head) head->prev=NULL;
//         if(head == NULL) tail = NULL;
//         size--;
//     }
//     void deleteattail(){
//         if(size == 0) {
//             cout<<"linked list is empty"<<endl;
//             return ;
//         }
//         else if(size==1){
//             deleteathead();
//             return;
//         }
//         node* temp = tail->prev;
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
//             temp->next->prev = temp;
//             size--;
//         }
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
//     dll list ;
//     cout<<"INSERTATTAIL :"<<" ";
//     list.insertattail(10);
//     list.insertattail(20);
//     list.insertattail(30);
//     list.insertattail(40);

//     list.display();

// cout<<"INSERTATHEAD :"<<" ";
//     list.insertathead(50);
//     list.display();
// cout<<"INSERTATIDX :"<<" ";
//     list.insertatidx(4,55);
//     list.display();
// return 0;
// }