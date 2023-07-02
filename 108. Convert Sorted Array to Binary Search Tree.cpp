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
TreeNode* insert(vector<int> nums,int s, int e)
{
    if(s>e)
    {
        return NULL;
    }
    int m = s+ (e-s)/2;
    TreeNode* ans = new TreeNode(nums[m]);
    ans->left= insert(nums,s,m-1);
    ans->right=insert(nums,m+1,e);
    return ans;
}
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size()==0)
        {
            return NULL;
        }
        int n=nums.size();
        return insert(nums,0,n-1);
        
    }
};