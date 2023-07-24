class Solution {
public:
    int minimizedStringLength(string s) {
        unordered_set<char> m;
        int n=s.length();
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(m.count(s[i])==1)
            {
                count++;
            }
            else
            {
                m.insert(s[i]);
            }
        }
        return n-count;
        
    }
};