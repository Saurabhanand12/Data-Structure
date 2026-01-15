// 16 Given the head of a sorted linked list, delete all nodes that have duplicate numbers, leaving
// only distinctnumbers from the original list. Return the linked list sorted as well.[Leetcode 82]
// // class Solution {
// public:
//     ListNode* deleteDuplicates(ListNode* head) {
//         ListNode* dummy = new ListNode(0);
//         dummy->next = head;
//         ListNode* temp = dummy;
//         while(head){
//             if(head->next and head->val == head->next ->val){
//                 while(head->next and head->val == head->next ->val){
//                 head = head->next;
//             }
//             temp->next = head ->next;
//             }
//             else{
//                 temp = temp->next;
//             }
//             head = head ->next;
//         }
//         return dummy ->next;
//     }
// };