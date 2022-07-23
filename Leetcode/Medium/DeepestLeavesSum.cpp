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
      int maxDepth=0;
    int sum = 0;
    void addDeepest(TreeNode* root,int currDepth){
        if(!root) return;
        
        if(maxDepth==currDepth){ //if both the depth is same, then just add root value in sum
            sum+=root->val;
        }
        
        if(currDepth>maxDepth){ //if the currDepth is greater than maxDepth, than make sum as root value and update the maxDepth
            sum=root->val;
            maxDepth=currDepth;
        }
        
        addDeepest(root->left,currDepth+1); //call on left
        addDeepest(root->right,currDepth+1); //call on right
        
    }
    int deepestLeavesSum(TreeNode* root) {
        addDeepest(root,0);
        return sum; 
    }
};