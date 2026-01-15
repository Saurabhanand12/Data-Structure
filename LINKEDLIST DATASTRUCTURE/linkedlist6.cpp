////Split LL in parts
// class Solution {
// public:
//     vector<ListNode*> splitListToParts(ListNode* head, int k) {
//         int n =0;
//         ListNode* temp = head;
//         while(temp){
//             temp= temp->next;
//             n++;
//         }
//         vector<ListNode*> ans;
//         int size = n/k;
//         int rem = n%k;
//         temp = head;
//         while(temp){
//             ListNode* c = new ListNode(100);
//             ListNode* tempC =c;
//             int s= size;
//             if(rem > 0) s++;
//             rem--;
//             for(int i=1;i<=s;i++){
//                 tempC->next = temp;
//                 temp = temp->next;
//                 tempC = tempC->next;
//             }
//             tempC ->next = NULL;
//             ans.push_back(c->next);
//         }
//         if(ans.size()<k){
//             int extra = k- ans.size();
//             for(int i=1;i<=extra;i++){
//                 ans.push_back(NULL);
//             }
//         }
//         return ans;
//     }
// };
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Find the min and Max number of node between critical points
// class Solution {
// public:
//     vector<int> nodesBetweenCriticalPoints(ListNode* head) {
//         int idx = 1;
//         int fidx = -1;
//         int sidx = -1;
//         ListNode* a = head;
//         ListNode* b = head ->next;
//         ListNode* c = head ->next ->next;
//         if(c == NULL) return {-1,-1};
//         while(c){
//             if(b->val > a->val && b->val > c->val || b->val < a->val && b->val < c->val ){
//                 if(fidx == -1)  fidx = idx ;
//                 else sidx =idx;
//             }
//             a = a->next;
//             b = b->next;
//             c = c->next;
//             idx++;
//         }
//         if(sidx==-1) return {-1,-1};
//         int maxd = sidx-fidx;
//         int mind = INT_MAX;
//         fidx =-1;
//         sidx =-1;
//         idx =1;
//         a = head;
//         b = head ->next;
//         c = head ->next ->next;
//         while(c){
//             if(b->val > a->val && b->val > c->val || b->val < a->val && b->val < c->val ){
//                 fidx = sidx;
//                 sidx = idx;
//                 if(fidx !=-1){
//                     int d = sidx -fidx;
//                     mind = min(mind,d);
//                 }
//             }
//             a = a->next;
//             b = b->next;
//             c = c->next;
//             idx++;
//         }
//         return {mind,maxd};
//     }
// };
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Reverse nodes in even length Groups
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
//     ListNode* reverseEvenLengthGroups(ListNode* head) {
//         ListNode* temp = head;
//         int gap =1;
//         while(temp && temp->next){
//             int remlen = 0;
//             ListNode* t = temp->next;
//             for(int i=1;i<=gap+1 && t != NULL;i++ ){
//                 t = t->next;
//                 remlen++;
//             }
//             if(remlen < gap+1) gap = remlen-1;
//             if(gap%2 !=0) reverseBetween(temp,2,2+gap);
//             gap++;
//             for(int i=1;temp != NULL && i<=gap;i++ ){
//                 temp = temp->next;
//             }
//         }
//         return head;
//     }
// };