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
    vector<TreeNode*> generateTrees(int n) {
        return bst(1,n);
    }
     vector<TreeNode*> bst(int l , int r)
     {
         
         if(l>r)
         {
             vector<TreeNode*>b;

             b.push_back(nullptr);
             return b;
         }
         vector<TreeNode*> v;
         for(int i=l;i<=r;i++)
         {
             vector<TreeNode*> left = bst(l,i-1);
              vector<TreeNode*> right = bst(i+1,r);
              for(TreeNode* l1 :left)
              {
                  for(TreeNode* r1:right)
                  {
                      TreeNode* temp = new TreeNode(i);
                      temp->left = l1;
                      temp->right =r1;
                      v.push_back(temp);
                  }
              }

         }
         return v;
     }
};