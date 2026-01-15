//////////$I kth Smallest element in a BST [Leetcode 230]
// class Solution {
// public:
//     void inorder(TreeNode* root,vector<int>& v){
//         if(root == NULL) return;
//         inorder(root->left,v);
//         v.push_back(root->val);
//         inorder(root->right,v);
//     }
//     int kthSmallest(TreeNode* root, int k) {
//         vector<int> v;
//         inorder(root,v);
//         return v[k-1];
//     }
// };
//////////////////////////*I Given the root of a binary search tree, return a balanced BST with the same node values.[Leetcode 1382]D/
// class Solution {
// public:
//     void inorder(TreeNode* root,vector<int>& v){
//         if(root == NULL) return;
//         inorder(root->left,v);
//         v.push_back(root->val);
//         inorder(root->right,v);
//     }
//     TreeNode*  makebst(vector<int>& v,int lo,int hi){
//         if(lo > hi) return NULL;
//         int mid = lo + (hi - lo)/ 2;
//         TreeNode* temp = new TreeNode(v[mid]);
//         temp->left = makebst(v, lo, mid-1);
//         temp->right = makebst(v, mid+1 ,hi);
//         return temp;
//     }
//     TreeNode* balanceBST(TreeNode* root) {
//         vector<int> v;
//         inorder(root,v);
//         return makebst(v,0,v.size() -1);
//     }
// };
///////////////////////I Given the root node of a binary search tree and two integers low and high, return the sum ofvalues of all
//////nodes with a value in the inclusive range [low, high]. [Leetcode 938]
// class Solution {
// public:
//     void inorder(TreeNode* root,vector<int>& v){
//         if(root == NULL) return ;
//         inorder(root->left,v);
//         v.push_back(root->val);
//         inorder(root->right,v);
//     }
//     int rangeSumBST(TreeNode* root, int low, int high) {
//         vector<int> v;                                            /// FIRST METHOD
//         inorder(root,v);
//         int sum =0;
//         for(int i : v){
//             if(i >= low && i <= high){
//                 sum += i;
//             }
//         }
//         return sum;
//     }
// };
////////////////////////////////
// class Solution {
// public:
//     int rangeSumBST(TreeNode* root, int low, int high) {
//         if (!root) return 0;
//         int sum = 0;
//         if (root->val >= low && root->val <= high) {      //SECOND METHOD
//             sum += root->val;
//         }
//         if (root->val > low) {
//             sum += rangeSumBST(root->left, low, high);
//         }
//         if (root->val < high) {
//             sum += rangeSumBST(root->right, low, high);
//         }
//         return sum;
//     }
// };
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <cmath>
using namespace std;

// Definition for a binary tree node
struct TreeNode {
    int value;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : value(x), left(nullptr), right(nullptr) {}
};

// Function to find the LCA (Lowest Common Ancestor) of two nodes in the BST
TreeNode* findLCA(TreeNode* root, int key1, int key2) {
    if (root == nullptr)
        return nullptr;

    // If both keys are smaller, LCA lies in the left subtree
    if (key1 < root->value && key2 < root->value)
        return findLCA(root->left, key1, key2);

    // If both keys are larger, LCA lies in the right subtree
    if (key1 > root->value && key2 > root->value)
        return findLCA(root->right, key1, key2);

    // If one key is smaller and the other is larger, or if root is one of the keys, return root
    return root;
}

// Function to find the distance from the current node to the given key
int findDistance(TreeNode* root, int key) {
    int distance = 0;
    while (root != nullptr) {
        if (key < root->value)
            root = root->left;
        else if (key > root->value)
            root = root->right;
        else
            break;  // When the key is found
        distance++;
    }
    return distance;
}

// Function to find the distance between two nodes in the BST
int findDistanceBetweenNodes(TreeNode* root, int key1, int key2) {
    // Find the Lowest Common Ancestor (LCA) of the two keys
    TreeNode* lca = findLCA(root, key1, key2);

    // Find the distance from LCA to key1 and key2
    int dist1 = findDistance(lca, key1);
    int dist2 = findDistance(lca, key2);

    // Return the sum of the distances
    return dist1 + dist2;
}

// Utility function to insert nodes in a BST
TreeNode* insert(TreeNode* root, int value) {
    if (root == nullptr)
        return new TreeNode(value);

    if (value < root->value)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);

    return root;
}

int main() {
    // Constructing the BST
    TreeNode* root = nullptr;
    root = insert(root, 20);
    root = insert(root, 10);
    root = insert(root, 30);
    root = insert(root, 5);
    root = insert(root, 15);
    root = insert(root, 25);
    root = insert(root, 35);

    // Example: Find the distance between nodes 5 and 15
    int key1 = 5, key2 = 15;
    int distance = findDistanceBetweenNodes(root, key1, key2);
    cout << "Distance between nodes " << key1 << " and " << key2 << ": " << distance << endl;

    return 0;
}
