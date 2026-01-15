//Flatten a Multilevel DLL
// class Solution {
// public:
//     Node* flatten(Node* head) {
//         Node* temp = head;
//         while(temp){
//             Node* a = temp->next;
//             if(temp->child){
//                 Node* c = temp->child;
//                 temp->child = NULL;
//                 c = flatten(c);
//                 temp->next = c;
//                 c->prev = temp;
//                 while(c->next){
//                     c = c->next;
//                 }
//                 c->next = a;
//                 if(a) a->prev = c;
//             }
//             temp = a;
//         }
//         return head;
//     }
// };
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Copy list with random pointer
// class Solution {
// public:
//     Node* copyRandomList(Node* head) {
//         //step 1 -> create deep copy without random pointer
//         Node* dummy = new Node(0);
//         Node* tempC = dummy;
//         Node* temp = head;
//         while(temp){
//             Node* a = new Node(temp->val);
//             tempC->next = a;
//             temp = temp ->next;
//             tempC = tempC ->next;
//         }
//         Node* duplicate = dummy->next;
//         //step 2 -> alter nate connection
//         Node* a = head ;
//         Node* b = duplicate;
//         dummy = new Node(-1);
//         Node* tempD = dummy;
//         while(a){
//             tempD ->next = a;
//             a = a->next;
//             tempD = tempD->next;
//             tempD->next = b ;
//             b = b->next;
//             tempD = tempD ->next;
//         }
//         dummy = dummy ->next;
//         //step 3 ->assigning random pointer
//         Node* t1 = dummy;
//         while(t1){
//         Node*  t2 = t1 ->next;
//             if(t1->random) t2->random = t1->random ->next;
//             t1 = t1 ->next->next;
//         }
//         //step 4-> removing the connections (seperate)
//         Node* d1 = new Node(-1);
//         Node* d2 = new Node(-1);
//         t1 = d1;
//         Node* t2 = d2;
//         Node* t = dummy;
//         while(t){
//             t1->next = t;
//             t = t ->next;
//             t1= t1->next;
//             t2->next = t;
//             t = t ->next;
//             t2= t2->next;
//         }
//         t1 ->next=NULL;
//         t2 ->next = NULL;
//         d1 = d1->next; // original with random
//         d2 = d2->next; // duplicate with random
//         return d2;
//     }
// };