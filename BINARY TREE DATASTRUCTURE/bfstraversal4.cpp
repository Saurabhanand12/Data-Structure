/// CONSTRUCT BINARY TREE B F S ///////////////////////////////////
#include<iostream>
#include<queue>
#include<climits>
using namespace std;
class node{
    public:
    int val;
    node* left;
    node* right;
    node(int val){
        this->val = val;
        this->left = NULL;
        this-> right =NULL;
    }
};
node* construct(int arr[] , int n){
    queue<node*> q;
    node* root = new node(arr[0]);
    q.push(root);
    int i=1;
    int j=2;
    while(q.size() > 0 && i< n){
        node* temp = q.front();
        q.pop();
        node* l;
        node* r;
        if(arr[i] != INT_MIN)   l = new node(arr[i]);
        else l = NULL;
        if(j != n && arr[j] != INT_MIN)   r = new node(arr[j]);
        else r = NULL;

        temp->left = l;
        temp->right = r;

        if(l != NULL) q.push(l);
        if(r != NULL) q.push(r);

        i += 2;
        j += 2;
    }
    return root;
}
void preorder(node* root){           
    if(root == NULL ) return ;                 
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(node* root){
    if(root == NULL ) return ;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}
void postorder(node* root){
    if(root == NULL ) return ;
    postorder(root->left);
    postorder(root->right); 
    cout<<root->val<<" ";
}
int levels(node* root){
    if(root == NULL) return 0;
    return 1 + max(levels(root->left) , levels(root->right));
}
void nthlevel(node* root,int curr,int level){
    if(root == NULL ) return ;
    if(curr == level){                                    // PRINT SINGLE LEVEL NODE
        cout<<root->val<<" ";
        return;
    }
    nthlevel(root->left,curr+1,level);
    nthlevel(root->right,curr+1,level);
}
void nthlevelrev(node* root,int curr,int level){
    if(root == NULL ) return ;
    if(curr == level){                                   // USE nthlevelrev FOR REVERSE IN nthlevel;
        cout<<root->val<<" ";
        return;
    }
    nthlevelrev(root->right,curr+1,level);
    nthlevelrev(root->left,curr+1,level);
}
void levelorder(node* root){
    int n = levels(root);                
    for(int i=1;i<=n;i++){
       nthlevel(root,1,i);                           
        cout<<endl;
    }
}

void levelorderqueue(node* root){       // BFS  //VIMP
    queue<node*> q;
    q.push(root);
    while(q.size() > 0){
        node* temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left != NULL) q.push(temp->left);
        if(temp->right != NULL) q.push(temp->right);
    }
    cout<<endl;
}

int main() {
    int arr[] = {1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN , 7,8,9};
    // int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int n = sizeof(arr) / sizeof(arr[0]);
    node* root = construct(arr,n);

    // preorder(root);
    // cout<<endl;
    // inorder(root);
    // cout<<endl;
    // postorder(root);
    // cout<<endl;
   
    levelorder(root);
    cout<<endl;

return 0;
}