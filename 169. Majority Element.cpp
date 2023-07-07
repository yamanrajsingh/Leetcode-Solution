class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
           int k = nums[i];
            m[k]++;
        }
        for (auto it =m.begin();it!=m.end();it++)
        {
            if((n/2)<it->second)
            {
                return it->first;
            }
        }
        return -1;
        
    }
};