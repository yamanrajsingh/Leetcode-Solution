class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> m;
        for (int i=0;i<nums.size();i++)
        {
            int k=nums[i];
            m[k]++;
        }
        for (auto it=m.begin();it!=m.end();it++)
        {
            if(it->second == 1)
            {
                return it->first;
            }
        }
        return 0;
        
    }
};