class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
  //  int ans = 0;
  //   for (vector<int>& row : nums)
    
  //   // int n = row.size();
  //     sort(row.begin(), row.end());
  //     //  ans = ans + row[n-1];
  

  //   for (int i = 0; i < nums[0].size(); i++) {
  //     int larg = 0;
  //     for (int j = 0; j < nums.size(); j++)
  //       larg = max(larg, nums[j][i]);
  //     ans =ans + larg;
  //   }
  // return ans;
  int result = 0,i;
       int col=nums[0].size();
       int row = nums.size();
      for(int j=0; j<col; j++) 
      {
          int max = nums[0][j];
         for (int i = 0; i < row; i++)
         {
             if (nums[j][i] > max)
             {
                max = nums[j][i];
             }
         }
         result = result + max;
     }
     return result;
    }

  


};