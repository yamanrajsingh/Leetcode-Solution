class Solution {
public:
    bool isPalindrome(int x) {
        long long ans=0, temp=x,r;
        if(x<0)
        {
            return false;
        }
        while(x!=0)
        {
          r=x%10;
          ans=ans*10+r;
          x=x/10;
        }
        if(ans==temp)
        {
            return true;
        }
        return false;
    }
};