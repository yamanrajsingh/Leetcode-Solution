class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max=0;
        int buy=prices[0];
        int n=prices.size();
        for(int i=1;i<n;i++)
        {
            if(buy>prices[i])  buy=prices[i]; 
            else if(prices[i]-buy>max) max=prices[i]-buy;    
        }
        return max;
    }
};