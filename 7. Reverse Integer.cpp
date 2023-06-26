class Solution {
public:
    long long reverse(int x) {

        long long ans=0;
        while(x!=0)
        {
            int r=x%10;
             ans= ans*10+r;
             x=x/10;
            if(ans>INT_MAX || ans<INT_MIN)
            {
                return 0;
            }
        }
        return ans;
        
    }
};