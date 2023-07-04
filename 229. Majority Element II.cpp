class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        vector<int>v;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
           int k = nums[i];
            m[k]++;
        }
        for (auto it =m.begin();it!=m.end();it++)
        {
            if((n/3)<it->second)
            {
                v.push_back(it->first);
            }
        }
        return v;
        
    }
};