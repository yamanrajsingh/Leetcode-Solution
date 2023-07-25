class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n=nums.size();
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            m[nums[i]]++;
        }
          for(int i=1;i<=n-2;i++)
          {
              if(m[i]!=1)
              return false;
          }
          return(m[n-1]==2);
    }
};