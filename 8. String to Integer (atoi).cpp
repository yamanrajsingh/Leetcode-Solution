class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        while(s[i]==' ')
        {
            i++;
        }
        int psign=0;
        if(s[i]=='+')
        {
           psign++;
           i++;
        }
        int nsign=0;
        if(s[i]=='-')
        {
          nsign++;
          i++;
        }
        double ans=0;
        while(i<s.size() && s[i]>='0' && s[i]<='9')
        {
            ans=ans*10+(s[i]-'0');
            i++;
        }
        if(nsign>0)
        {
            ans=-ans;
        }
        if(psign>0 && nsign>0)
        {
            return 0;
        }
        if(ans<INT_MIN)
        {
            return INT_MIN;
        }
        if(ans>INT_MAX)
        {
            return INT_MAX;
        }
        return ans;
        
    }
};