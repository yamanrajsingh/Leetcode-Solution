class Solution {
public:
    int averageValue(vector<int>& nums) {
        int sum=0;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%6==0)
            {
                sum=sum+nums[i];
                count++;
            }
        }
        if(sum>0)
        {
             int ans = sum/count;
                 return ans;
        }
       
      
            return 0;
        
    }
};