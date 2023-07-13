class Solution {
public:
    int distributeCandies(vector<int>& c) {
        set<int>s;
        for(int i=0;i<c.size();i++)
        {
            s.insert(c[i]);
        }
        int n=c.size()/2;
        int m=s.size();
        if(m>=n)
            return n;
        return m;
        
    }
};