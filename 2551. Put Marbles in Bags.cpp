class Solution {
public:
    long long putMarbles(vector<int>& w, int k) {
        vector<int>v;
        int n=w.size();
        for(int i=0;i<n-1;i++)
        {
            v.push_back(w[i]+w[i+1]);
        }
        sort(v.begin(),v.end());
        long long ans=0;
        for(int i=0;i<k-1;i++)
        {
         ans = ans+ v[n-2-i] - v[i];
        }
        return ans;
        
    }
};