class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
       int sum=0;
       int n=nums.size();
       for(int i=1;i<=nums.size();i++){
           if(n%i==0){
               sum+=nums[i-1]*nums[i-1];
           }
       } 
       return sum;
    }
};