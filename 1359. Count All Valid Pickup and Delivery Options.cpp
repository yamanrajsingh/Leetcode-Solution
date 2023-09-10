class Solution {
public:
int mod = 1000000007;
    int countOrders(int n) {
    long long fact=1;
    for(int i=1;i<n;i++)
    {
      fact=(fact*(i+1)*(2*i+1))%mod;
    }
        return fact;
    }
};