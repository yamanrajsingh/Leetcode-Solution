class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
       vector<int> v;
        set<int>s;
        for(int i:nums)
        {
            s.insert(i);
        }
         for(int i=1;i<=nums.size();i++)
         {
           auto it = s.find(i);
           if(it==s.end())
           {
               v.push_back(i);
           }
         }
         return v;
    }
};