// /// implentation of cq
// #include <iostream>
// using namespace std;

// class CircularQueue {
// public:
//     int *arr;
//     int front;
//     int rear;
//     int capacity,currsize;

//     CircularQueue(int currsize) {
//         capacity = currsize;
//         arr = new int[capacity];
//         front = 0;
//         rear = -1;
//     }

//     // enqueue (insert)
//     void enqueue(int data) {
//         // full condition
//         if (currsize == capacity) {
//             cout << "Queue is Full" << endl;
//             return;
//         }

//         rear = (rear + 1) % capacity;
//         arr[rear] = data;
//         currsize++;
//     }

//     // dequeue (remove)
//     void dequeue() {
//         if (empty()) {
//             cout << "Queue is Empty" << endl;
//             return;
//         }

//         front = (front + 1) % capacity;
//         currsize--;
//     }

//     // get front element
//     int Front() {
//         if (empty()) {
//             cout << "Queue is Empty" << endl;
//             return -1;
//         }
//         return arr[front];
//     }

//     // get rear element
//     int Back() {
//         if (rear == -1) {
//             cout << "Queue is Empty" << endl;
//             return -1;
//         }
//         return arr[rear];
//     }

//     // check empty
//     bool empty() {
//         return currsize == 0;
//     }

//     // display queue
//     void display() {
//         if (empty()) {
//             cout << "Queue is Empty" << endl;
//             return;
//         }

//         int i = front;
//         while (true) {
//             cout << arr[i] << " ";
//             if (i == rear)
//                 break;
//             i = (i + 1) % capacity;
//         }
//         cout << endl;
//     }
// };

// int main() {
//     CircularQueue cq(5);

//     cq.enqueue(10);
//     cq.enqueue(20);
//     cq.enqueue(30);
//     cq.enqueue(40);
//     cq.display();

//     cq.dequeue();
//     cq.display();

//     cq.enqueue(50);
//     cq.enqueue(60);   // wraps around
//     cq.display();

//     cout << "Front: " << cq.Front() << endl;
//     cout << "Back: " << cq.Back() << endl;

//     return 0;
// }


// class MyCircularQueue {
// public:
//     int f ;
//     int b;
//     int s;      // curr size
//     int c;       // capacity
//     vector<int> arr;
//     MyCircularQueue(int k) { // k is capacity 
//         f = 0;
//         b = 0;
//         s = 0;
//         c=k;
//         vector<int> v(k);
//         arr = v;
//     }
//     bool enQueue(int val) {
//         if(s==c) return false;
//         arr[b] =val;
//         b++;
//         if(b==c) b=0;
//         s++;
//         return true;
//     } 
//     bool deQueue() {
//         if(s==0) return false;
//         f++;
//         if(f==c) f=0;
//         s--;
//         return true;
//     }   
//     int Front() {
//         if(s==0) return -1;
//         return arr[f];
//     }  
//     int Rear() {
//         if(s==0) return -1;
//         if(b==0) return arr[c-1];
//         return arr[b-1];     
//     }   
//     bool isEmpty() {
//         if(s==0) return true;
//         return false;      
//     }
//     bool isFull() {
//         if(s==c) return true;
//         return false;       
//     }
// };
