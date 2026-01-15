///// ARRAY IMPLEMENTATION /////
#include<iostream>
using namespace std;
class queue{
    public:
    int f ;
    int b;
    int s;
    int arr[5];
    queue(){
        f = 0;
        b = 0; 
        s =0;
    }
    void push(int val){
        if(b==5){
            cout<<"QUEUE IS FULL!"<<endl;           // DISADVANTAGE  -> limited size,wastage of space
            return;
        }
        arr[b] =val;
        b++;
        s++;
    }
    void pop(){
        if(f-b==0){
            cout<<"QUEUE IS EMPTY!"<<endl;
            return;
        }
        f++;
        s--;
    }
    int top(){
        if(s==0){
            cout<<"QUEUE IS EMPTY!"<<endl;
            return -1;
        }
        return arr[f];
    }
    int back(){
        if(s==0){
            cout<<"QUEUE IS EMPTY!"<<endl;
            return -1;
        }
        return arr[b-1];
    }
    int size(){
        return s;
    }
    bool empty(){
        if(s==0) return true;
        else return false;
    }
    void display(){
        for(int i=f;i<b;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};
int main() {
    queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.display();
    q.push(50);
    q.push(60);
    q.display();
    q.pop();
    q.display();
return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// IMPLEMENTATION OF LINKEDLIST
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
// class queue{        //USER DEFINED DATA STRUCTURE
// public:
//     node* head;
//     node* tail;
//     int s;
//     queue(){
//         head = tail = NULL;
//         s = 0;
//     }
//     void push(int data){
//         node* temp = new node(data);                //TC =O(1) 
//         if(s == 0)  head = tail = temp;
//         else{
//             tail->next = temp;
//             tail = temp;
//         }
//         s++;
//     }
    
//     void pop(){
//         if(s == 0) {
//             cout<<"queue is empty"<<endl;                          // ADVANTAGE
//             return ;
//         }
//         node* temp = head;                                         //UNLIMITED SIZE
//         head = head ->next;                                        // NO SPACE WASTAGE
//         s--;
//         delete(temp);
//     } 
//     int front(){                            // DISADVANTAGE -> each element pe value or next ka adderess 
//         if(s == 0) {                                            ////hota hai isliye extra space leta ha
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
//         while(temp != NULL){
//             cout<<temp->data<<" ";
//             temp = temp->next;
//         }
//         cout<<endl;
//     }
// };

// int main() {
//     queue q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.display();
//     q.push(50);
//     q.push(60);
//     q.display();
//     q.pop();
//     q.display();
    
// return 0;
// }