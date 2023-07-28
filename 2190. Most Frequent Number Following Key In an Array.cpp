    class Solution {
    public:
        int mostFrequent(vector<int>& nums, int key) {
        unordered_map<int,int>m;
            int frq=0;
            int ans=0;
            for(int i =0;i<nums.size()-1;i++)
            {
                if(nums[i]==key)
                {
                    m[nums[i+1]]++;
                }
            }
            for(auto it: m)
            {
                if(it.second>frq)
                {
                    ans=it.first;
                    frq=it.second;
                }
            }
            return ans;

        }
    };