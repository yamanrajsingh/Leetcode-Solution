class Solution {
public:
    int buyChoco(vector<int>& p, int money) {
        sort(p.begin(),p.end());
        int temp = money;
            money=money- (p[0] + p[1]);
            if(money<0)
            {
                return temp;
            }
            else if(money==0)
            {
                return 0;
            }
        return money;
        
    }
};