class Solution {
public:
static bool compare(pair<int,int>&p1,pair<int,int>&p2)
{
    return p1.second>p2.second;
}
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> v;
       unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        vector<pair<int,int>>p(m.begin(),m.end());
       sort(p.begin(),p.end(),compare);
       for(int i=0;i<k;i++)
       {
           v.push_back(p[i].first);
       }
        return v;
        
    }
};