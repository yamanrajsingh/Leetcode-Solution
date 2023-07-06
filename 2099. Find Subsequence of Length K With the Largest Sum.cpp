class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        int n=nums.size()-k;
        for(int i=0;i<n;i++)
        {
            int min= *min_element(nums.begin(),nums.end());
            nums.erase(find(nums.begin(),nums.end(),min));
        }
        return nums;
        
    }
};