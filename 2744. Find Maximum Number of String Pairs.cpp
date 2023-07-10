class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int ans=0;
        for(int i=0;i<words.size();i++)
        {
            sort(words[i].begin(),words[i].end());
        }
        for(int i=0;i<words.size();i++)
        {
           ans=ans+count(words.begin(),words.end(),words[i])-1;
        }
        return ans/2;
        
    }
};