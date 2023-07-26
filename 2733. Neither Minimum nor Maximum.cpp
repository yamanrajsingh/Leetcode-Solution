class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int max =*max_element(nums.begin(),nums.end());
        int min =*min_element(nums.begin(),nums.end());
        for(auto x:nums)
        {
            if(max!=x && min!=x)
                return x;
        }
        return -1;
        
    }
};