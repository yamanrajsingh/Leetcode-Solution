class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int sum=0;
        for(int i=1;i<n;i++)
        {
           sum+=min(nums[i],nums[i-1]);
           i++;
        }
        return sum;
        
    }
};