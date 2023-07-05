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
     bool is(TreeNode* root, TreeNode* min,TreeNode* max)
     {
         if(root==NULL)
         {
             return true;
         }
         if (min && root->val <= min->val)
         {
            return false;
         }
    
          if (max && root->val >= max->val)
         {
         return false;
          }
    
         return is(root->left,min,root) && is(root->right,root,max);
     }
    bool isValidBST(TreeNode* root) {
        
        return is(root,NULL,NULL);
        
    }
};