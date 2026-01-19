//linked list cycle 2
// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
//         ListNode* slow = head ;
//         ListNode* fast = head ;
//         bool flag = false;
//         while(fast != NULL && fast->next != NULL){              //Tc = O(n) sp = O(1)
//             slow = slow->next;
//             fast = fast->next->next;
//             if(slow == fast){
//                 flag = true;
//                 break;
//             }
//         }
//         if(flag == false) return NULL;
//         else{
//             ListNode* temp = head ;
//             while(temp != slow){
//                 slow = slow->next;
//                 temp = temp->next;
//             }
//             return slow;
//         }  
//     }
// };
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Remove Duplicates from Sorted list
// class Solution {
// public:
//     ListNode* deleteDuplicates(ListNode* head) {
//         if(head == NULL || head ->next ==NULL) return head;
//         ListNode* a = head;
//         ListNode* b = head->next;
//         while(b!= NULL){       
//             while(b!= NULL && b->val==a->val){          //Tc = O(n) sp = O(1)
//                 b = b->next;
//             }
//             a->next = b;
//             //for next round
//             a=b;
//             if(b!=NULL)  b = b->next;
//         }
//         return head;
//     }
// };
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//ROTATE LIST
// class Solution {
// public:
//     ListNode* rotateRight(ListNode* head, int k) {
//         if(head == NULL || head -> next == NULL) return head;
//         int n = 0;
//         ListNode* temp = head;
//         ListNode* tail = NULL;
//         while(temp != NULL){
//             if(temp->next == NULL)  tail = temp;
//             temp = temp-> next;
//             n++;                                  //Tc = O(n) sp = O(1)
//         }
//         k=k%n;
//         if(k==0) return head;
//         temp = head;
//         for(int i=1;i<n-k;i++){
//             temp = temp ->next;
//         }
//         tail->next = head;
//         head = temp->next;
//         temp->next = NULL;
//         return head;
        
//     }
// };
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//SPIRAL MATRIX 4
// class Solution {
// public:
//     vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
//         vector< vector<int> > arr(m,vector<int>(n,-1));
//         int minr = 0;
//         int maxr= m-1;
//         int minc = 0;
//         int maxc = n-1;
//         ListNode* temp = head;
//         while(minr<=maxr && minc <= maxr){
//             for(int j=minc;j<=maxc;j++){
//                 if(temp == NULL) return arr;
//                 arr[minr][j] = temp ->val;
//                 temp = temp->next;
//             }
//             minr++;
//             if(minr>maxr || minc>maxc) break;
//             for(int i=minr;i<=maxr;i++){
//                 if(temp == NULL) return arr;
//                 arr[i][maxc] = temp->val;
//                 temp = temp->next;
//             }
//             maxc--;
//             if(minr>maxr || minc>maxc) break;
//             for(int j=maxc;j>=minc;j--){
//                 if(temp == NULL) return arr;
//                 arr[maxr][j] = temp->val;
//                 temp = temp->next;
//             }
//             maxr--;
//             if(minr>maxr || minc>maxc) break;
//             for(int i=maxr;i>=minr;i--){
//                 if(temp == NULL) return arr;
//                 arr[i][minc] = temp->val;
//                 temp = temp->next;
//             }
//             minc++;
//             if(minr>maxr || minc>maxc) break;
//         }
//         return arr;
//     }
// };
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//MERGE TWO SORTED LIST 
// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
//         ListNode* c = new ListNode(100);
//         ListNode* temp = c;
//         while(a !=NULL && b != NULL){
//             if(a->val <= b->val){
//                 temp->next = a;
//                 a = a->next;
//                 temp = temp->next;              //TC =O(n+m) SP=O(n+m)/O(1) 
//             }
//             else{
//                 temp->next = b;
//                 b = b->next;
//                 temp = temp->next;
//             }
//         }
//         if(a == NULL ) temp->next = b;
//         else temp->next = a;
//         return c->next;
//     }
// };
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///MERGE KTH SORTED LIST
// class Solution {
// public:
//     ListNode* merge(ListNode* a, ListNode* b) {
//         ListNode* c = new ListNode(100);
//         ListNode* temp = c;
//         while(a !=NULL && b != NULL){
//             if(a->val <= b->val){
//                 temp->next = a;
//                 a = a->next;
//                 temp = temp->next;
//             }
//             else{
//                 temp->next = b;
//                 b = b->next;
//                 temp = temp->next;
//             }
//         }
//         if(a == NULL ) temp->next = b;
//         else temp->next = a;
//         return c->next;
//     }
//     ListNode* mergeKLists(vector<ListNode*>& arr) {
//         if(arr.size() == 0) return NULL;
//         while(arr.size() > 1){
//             ListNode* a = arr[0];
//             arr.erase(arr.begin());
//             ListNode* b = arr[0];
//             arr.erase(arr.begin());
//             ListNode* c = merge(a,b);
//             arr.push_back(c); 
//         }
//         return arr[0];
//     }
// };
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// SORTLIST
// class Solution {
// public:
//     ListNode* merge(ListNode* a, ListNode* b) {
//         ListNode* c = new ListNode(100);
//         ListNode* temp = c;
//         while(a !=NULL && b != NULL){
//             if(a->val <= b->val){
//                 temp->next = a;
//                 a = a->next;
//                 temp = temp->next;
//             }
//             else{
//                 temp->next = b;
//                 b = b->next;
//                 temp = temp->next;
//             }
//         }
//         if(a == NULL ) temp->next = b;
//         else temp->next = a;
//         return c->next;
//     }
//     ListNode* sortList(ListNode* head) {
//         if(head == NULL || head->next == NULL) return head;
//         //to find left middle
//         ListNode* slow = head;
//         ListNode* fast = head;
//         while(fast->next != NULL && fast->next->next != NULL){
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         //now slow is at left middle
//         ListNode* a = head;
//         ListNode* b = slow->next;
//         slow->next = NULL;
//         a = sortList(a);
//         b = sortList(b);
//         ListNode* c = merge(a,b);
//         return c;
//     }
// };