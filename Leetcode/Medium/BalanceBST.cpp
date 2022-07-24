/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void inorder(TreeNode *root, vector<int> &inorderTraversal){
        if(root==NULL) return ;
        inorder(root->left, inorderTraversal);
        inorderTraversal.push_back(root->val);
        inorder(root->right, inorderTraversal);
    }
    
    TreeNode *inOrderBST(vector<int> &in, int s, int e){
        if(s>e){
            return NULL;
        }
        int mid = s+(e-s)/2;
        TreeNode *root = new TreeNode(in[mid]);
        root->left = inOrderBST(in,s,mid-1);
        root->right = inOrderBST(in,mid+1,e);
        return root;
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> inOrder;
        inorder(root, inOrder);
        
        int n = inOrder.size();
        return inOrderBST(inOrder, 0, n-1);
    }
};