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
    TreeNode* searchBST(TreeNode* root, int val) {
        // while(root!=NULL && root->val!=val)
        // {
        //     root = val<root->val?root->left:root->right;
        // }
        // return root;
        if(root==NULL)
        {
            return root;
        }
        else if(root->val==val)
        {
            return root;
        }
        else if(root->val<val)
        {
            return searchBST(root->right,val);
        }
        else
        {
            return searchBST(root->left,val);
        }
        
    }
};