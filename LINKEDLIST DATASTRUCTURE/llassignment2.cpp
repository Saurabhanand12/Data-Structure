// Q1. You are given the head of a linked list. Delete the middle node, and return the head of thmodified linkedlist. [Leetcode 2095]
// Input: head = [1,3,4,7,1,2,6]
// Output: [1,3,4,1,2,6]
// class Solution {
// public:
//     ListNode* deleteMiddle(ListNode* head) {
//         if(head == NULL || head ->next == NULL ) return NULL;
//         ListNode* slow = head;
//         ListNode* fast = head;
//         while(fast != NULL && fast->next !=NULL){
//             slow = slow ->next;
//             fast = fast->next->next;
//         }
//         ListNode* temp = head;
//         while(temp->next != slow){
//             temp =temp->next;
//         }
//         temp->next = temp->next->next;
//         return head;
//     }
// };
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//REMOVE LINKED LIST ELEMENT
// class Solution {
// public:
//     ListNode* removeElements(ListNode* head, int val) {
//         ListNode* t = new ListNode(0);
//         t->next = head;
//         ListNode* temp = t;
//         while (temp->next != NULL) {
//             if (temp->next->val == val) {
//                 temp->next = temp->next->next;
//             } else {
//                 temp = temp->next; // Move to the next node
//             }
//         }
//         return t->next;
//     }
// };
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//MERGE IN BETWEEN LINKED LIST
// class Solution {
// public:
//     ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
//         ListNode* temp = list1;
//         for(int i=0;i<a-1;i++){
//             temp = temp->next;
//         }
//         ListNode* curr = temp;
//         for(int i=0;i<=b-a+1;i++){
//             curr = curr->next;
//         }
//         ListNode* t = list2;
//         temp->next = t;
//         while(t->next){
//             t = t->next;
//         }
//         t->next = curr;
//         return list1;
//     }
// };
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Find the length of loop in Cycle of Linked List.
#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
    node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class linkedlist {
public:
    node* head;
    node* tail;
    int size;
    
    linkedlist() {
        head = tail = NULL;
        size = 0;
    }
    
    void display(node* head) {
        node* temp = head;
        int count = 0;  // Prevent infinite loop in case of cycle
        while(temp && count < 20) {  // Adjust count as needed
            cout << temp->data << " ";
            temp = temp->next;
            count++;
        }
        cout << endl;
    }
    
    void addFirst(int val) {
        node *temp = new node(val);
        if(head == NULL) {
            head = temp;
        } else {
            temp->next = head;
            head = temp;
        }
        if(tail == NULL) {
            tail = head;
        }
    }

    void addCycle(int idx) {
        if (idx <= 0) return; // Add check to prevent invalid index
        node *temp = head;
        node *cycleNode = NULL;
        idx--;
        int count = 0;
        while(temp->next != NULL) {
            if(count == idx) {
                cycleNode = temp;
            }
            temp = temp->next;
            count++;
        }
        temp->next = cycleNode;  // Create the cycle
    }
    
    int findLength() {
        node *fast = head;
        node *slow = head;
        while(fast && fast->next) {
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow) {
                int cycle_length = 1;
                node *temp = slow;
                while(temp->next != slow) {
                    temp = temp->next;
                    cycle_length++;
                }
                return cycle_length;
            }
        }
        return 0;
    }
};

int main() {
    linkedlist ll;
    ll.addFirst(1);
    ll.addFirst(2);
    ll.addFirst(3);
    ll.addFirst(4);
    ll.addFirst(5);
    ll.addFirst(6);
    ll.addCycle(4);
    cout << "Cycle length: " << ll.findLength() << endl;
    return 0;
}
