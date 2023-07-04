class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int>m;
        int max=-1;
        int el=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                m[nums[i]]++; 
            }
        }
        for(auto it : m)
        {
            if(max<it.second)
            {
                max=it.second;
                el=it.first;
            }
        }
        return el;

        
    }
};