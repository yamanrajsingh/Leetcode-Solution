class Solution {
public:
    int findPoisonedDuration(vector<int>& t, int d) {
          int mini=0;
        for(int i=0;i<t.size()-1;i++)
        {
          mini +=min((t[i+1]-t[i]),d);
        }
        return mini+d;
        
    }
};