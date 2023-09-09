class Solution {
public:
    int combinationSum4(vector<int>& nums, int t) {
        vector<unsigned int>dp(t+1,0);
        dp[0]=1;
        for(int i=1;i<=t;i++)
        {
            for(auto it:nums)
            {
                if(i-it>=0)
                {
                    dp[i]=dp[i]+dp[i-it];
                }
            }
        }
        return dp[t];
    }
};