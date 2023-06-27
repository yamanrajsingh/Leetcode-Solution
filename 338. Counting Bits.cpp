class Solution {
public:
    vector<int> countBits(int n) {
         vector<int> v;
        for (int i=0;i<=n;i++)
        {
             int c = __builtin_popcount(i);
             v.push_back(c);
        }
        return v;
        
    }
};