class Solution {
public:
    int differenceOfSum(vector<int> nums) {
        
       int elementsum = 0,digitsum=0,i;
       elementsum = accumulate(nums.begin(), nums.end(), 0);
        for(i =0; i<nums.size(); i++)
        {
            // elementsum = elementsum + nums[i];
            int a = nums[i];
            while (a != 0)
            {
                digitsum = digitsum + a%10;
                a = a/10;
            }
        }
        return abs(elementsum - digitsum);
    }
};