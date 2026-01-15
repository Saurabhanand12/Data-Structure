//middle of the linked list  
// ********************************** interview important question *************************************************
// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         int len = 0;
//         ListNode* temp = head;
//         while(temp != NULL){
//             len++;
//             temp = temp->next;
//         }                                    // FIRST METHOD TC=O(n)    // but they give ans by two passes 
//         int mididx = len/2;
//         ListNode* mid = head;
//         for(int i=1;i<=mididx;i++){
//             mid = mid->next;
//         }
//         return mid;

//     }
// };
/////////////////// in one pass 
// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         ListNode* slow = head;                                     //slow traverse one step and fast two steps
//         ListNode* fast = head;
//         while(fast != NULL && fast->next != NULL){
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         return slow;
//     }
// };

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//REMOVE NTH NODE FROM END OF THE LINKED LIST 
//*******************************************************interview question  */
// class Solution {
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         int len =0;
//         ListNode* temp = head;
//         while(temp != NULL){
//             len++;
//             temp = temp->next;
//         } 
//         if(n == len){
//             head = head ->next;            // first method
//             return head;
//         }
//         int m = len-n+1;
//         int idx = m-1;
//         temp = head;
//        for(int i=1;i<=idx-1;i++){
//         temp= temp->next;
//        }
//         temp->next =  temp->next->next;
//         return head;
//     }
// };
///////////////  2 second method///////////////////////////////////////////////////////
// class Solution {
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         ListNode*  slow = head;
//         ListNode*  fast = head;
//         // traverse fast to (n+1) steps
//         for(int i=1;i<=n+1;i++){
//             if(fast == NULL ) return head ->next;
//             fast = fast->next;
//         }
//         while(fast != NULL){                               
//             slow = slow->next;
//             fast = fast ->next;
//         }
//         slow->next =  slow->next->next;
//         return head;
//     }
// };
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Intersection of Two Linked Lists
// class Solution {
// public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//         ListNode* tempA = headA;
//         ListNode* tempB = headB;
//         int lenA =0;
//         while(tempA != NULL){
//             lenA++;
//             tempA = tempA->next;
//         }
//         int lenB =0;
//         while(tempB != NULL){
//             lenB++;
//             tempB = tempB->next;
//         }
//         tempA = headA;
//         tempB = headB;
//         if(lenA > lenB){
//             int diff = lenA - lenB;
//             for(int i=1;i<=diff;i++){
//                 tempA = tempA ->next;
//             }
//             while(tempA != tempB){
//             tempA = tempA ->next;
//             tempB = tempB->next;
//             }
//         return tempA;
//         }
//        else{
//             int diff = lenB - lenA;
//             for(int i=1;i<=diff;i++){
//             tempB = tempB->next; 
//             }
//             while(tempA != tempB){
//             tempA = tempA->next;
//             tempB = tempB->next;
//             }
//         return tempA;
//         }
//     }
// };
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//LINKED LIST CYCYLE
// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         ListNode* slow = head;                                   
//         ListNode* fast = head;
//         while(fast != NULL && fast->next != NULL){
//             slow = slow->next;
//             fast = fast->next->next;
//             if(slow==fast) return true;
//         }
//         return false;  
//     }
// };