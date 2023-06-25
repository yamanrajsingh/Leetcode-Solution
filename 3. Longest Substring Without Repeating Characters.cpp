class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count=-1;
        int ans=0;
        vector<int> dict(256,-1);
        for(int i=0;i<s.length();i++)
        {
            if(dict[s[i]]>count)
            
               
                count =dict[s[i]];
                 dict[s[i]]=i;
                 ans=max(ans,i-count);
        
        }
        return ans;
        
    }
};