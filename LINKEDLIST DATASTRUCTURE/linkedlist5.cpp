//PARTITION LIST
// class Solution {
// public:
//     ListNode* partition(ListNode* head, int x) {
//         ListNode* low = new ListNode(100);
//         ListNode* high = new ListNode(200);
//         ListNode* templow = low;
//         ListNode* temphigh = high;
//         ListNode* temp = head;
//         while(temp != NULL){
//             if(temp->val < x){
//                templow ->next = temp;
//                temp = temp ->next;
//                templow = templow ->next;
//             }
//             else{
//                 temphigh ->next = temp;
//                temp = temp ->next;
//                temphigh = temphigh ->next;
//             }
//         }
//         templow->next = high ->next;
//         temphigh ->next = NULL;
//         return low->next;
//     }
// };
//////////////////////////////////////////// //////////////////////////////////////////////////////////////////
//REVERSE LINKED LIST  ******************interview question
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode* prev = NULL;
//         ListNode* curr = head;
//         ListNode* Next = head;
//         while(curr != NULL){                      // BY ITREATIVE WAY  AND USING THREE POINTER METHOD
//             Next = curr->next;                    // TC = O(n) SP =O(1)
//             curr->next = prev;
//             prev = curr;
//             curr= Next;
//         }
//         return prev;
//     }
// };
/////////////////////////////////////////////////////////////
//BY RECURSIVE METHOD 
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         if(head == NULL || head ->next == NULL) return head;
//         ListNode* newhead = reverseList(head->next);
//         head ->next ->next = head ;                           //TC = O(n) SP =O(n)
//         head ->next = NULL;
//         return newhead;
//     }
// };
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//PALINDROME LINKED LIST
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode* prev = NULL;
//         ListNode* curr = head;
//         ListNode* Next = head;
//         while(curr != NULL){                    //TC = O(n) SP =O(1)
//             Next = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr= Next;
//         }
//         return prev;
//     }
//     bool isPalindrome(ListNode* head) {
//         // to find left middle
//         ListNode* slow = head;
//         ListNode* fast = head;
//         while(fast->next != NULL && fast->next->next != NULL){
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         ListNode* newhead = reverseList(slow->next);
//         ListNode*  a = head;
//         ListNode* b = newhead;
//         while(b){
//             if(a->val != b->val) return false;
//             a = a->next;
//             b = b->next;
//         }
//         return true;
//     }
// };
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// REVERESE LIST 2
// class Solution {
// public:
// ListNode* reverseList(ListNode* head) {
//         ListNode* prev = NULL;
//         ListNode* curr = head;
//         ListNode* Next = head;
//         while(curr != NULL){
//             Next = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr= Next;
//         }
//         return prev;
//     }
//     ListNode* reverseBetween(ListNode* head, int left, int right) {
//         if(head == NULL || head->next == NULL) return head;
//         ListNode* a = NULL;
//         ListNode* b = NULL;
//         ListNode* c = NULL;
//         ListNode* d = NULL;
//         ListNode* temp = head;
//         int n=1;
//         while(temp){
//             if(n == left-1) a = temp;
//             if(n == left ) b = temp;
//             if(n == right) c = temp;
//             if(n == right+1) d = temp;
//             temp = temp->next;
//             n++;
//         }
//         if(a)  a->next = NULL;
//         c->next = NULL;
//         c= reverseList(b);
//         if(a)  a->next = c;
//         b->next = d;
//         if(a) return head;
//         return c;
//     }
// };
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//REORDER LIST
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode* prev = NULL;
//         ListNode* curr = head;
//         ListNode* Next = head;
//         while(curr != NULL){
//             Next = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr= Next;
//         }
//         return prev;
//     }
//     void reorderList(ListNode* head) {
//         ListNode* slow = head;
//         ListNode* fast = head;
//         while(fast->next != NULL && fast->next->next != NULL){
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         ListNode* b = reverseList(slow->next);
//         ListNode*  a = head;
//         slow ->next = NULL;

//         ListNode* c = new ListNode(100);
//         ListNode* tempC = c;
//         ListNode* tempB = b;
//         ListNode* tempA = a;
//         while(tempA && tempB){
//             tempC ->next = tempA;
//             tempA = tempA->next;
//             tempC = tempC ->next;

//             tempC ->next = tempB;
//             tempB = tempB->next;
//             tempC = tempC ->next;
//         }
//         tempC ->next = tempA;
//         head = c ->next;
//     }
// };