class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        // for(int i=0;i<nums.size();i++)
        // {
        //     for(int j=0;j<nums.size();j++)
        //     {
        //         if(i!=j)
        //         { 
        //             ans=max(ans,(nums[i]-1)*(nums[j]-1));
        //         }
        //     }
        // }
        // return ans;
        sort(nums.begin(),nums.end());
        return( (nums[n-1]-1)*(nums[n-2]-1));
        
    }
};