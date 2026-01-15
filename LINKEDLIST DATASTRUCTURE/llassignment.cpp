//Q3. Implement a Linked List class.
// The user defined LL should have insert (head,tail,idx) , delete(head,tail,idx) , get(idx) and display
// functions.
#include<iostream>
using namespace std;
class node{
    public: 
    int data;
    node* next;
    node(int data){
        this->data = data;
        this->next = NULL;
    }
};
class linkedlist{
    public:
    node* head;
    node* tail;
    int size;
    linkedlist(){
        head = tail = NULL;
        size =0;
    }
    void insertattail(int data){
        node* temp = new node(data);
       if(size == 0)  head = tail = temp;
       else{
        tail -> next = temp;
        tail = temp;
       }
        size++;
    }
    void insertathead(int data){
        node* temp = new node(data);
        if(size == 0) head = tail  = temp;
        else{
            temp ->next = head;
            head = temp;
        }
        size++;
    }
    void insertatidx(int idx ,int data){
        if(idx < 0 && idx > size ){
            cout<<"invalid index "<<" ";
        }
        else if(idx == 0) insertathead(data);
        else if(idx == size) insertattail(data);
        else{
            node* t = new node(data);
            node* temp = head;
            for(int i=1;i<=idx-1;i++){
                temp = temp->next;   
            }
            t->next = temp ->next;
            temp->next = t;
            size++;
        }
    }
    void deleteathead(){
       if(size == 0){
        cout<<"linked list is empty"<<endl;
        return;
       }
       head = head->next;
       size--;
    }
    void deleteattail(){
        if(size == 0){
        cout<<"linked list is empty"<<endl;
        return;
       }
       node* temp = head;
       while(temp->next != tail){
        temp = temp->next;
       }
       temp->next = NULL;
       tail = temp;
       size--;
    }
    void deleteatidx(int idx){
        if(size == 0){
        cout<<"linked list is empty"<<endl;
        return;
       }
        else if(idx < 0 && idx > size ){
            cout<<"invalid index "<<" ";
        }
        else if(idx == 0) deleteathead();
        else if(idx == size) deleteattail();
        else{
            node* temp = head;
            for(int i=1;i<=idx-1;i++){
                temp = temp->next;   
            }
            temp->next = temp->next->next;
            size--;
        }
    }
    display(){
        node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main() {
    linkedlist ll;
    ll.insertattail(20);
    ll.insertattail(30);
    ll.insertattail(40);
    ll.insertattail(60);
    ll.display();
    ll.insertathead(10);
    ll.display();
    ll.insertatidx(4,50);
    ll.display();
    ll.deleteathead();
    ll.display();
    ll.deleteattail();
    ll.display();
    ll.deleteatidx(2);
    ll.display();

return 0;
}