class Solution {
public:
    bool check(vector<int>& a) {
        int n=a.size();
        int ans=0;
        for(int i=0;i<n;i++)
    {
        if(a[i]>a[(i+1)%n])
        {
            ans++;
        }

    }
    if(ans>1) return false;
    return true;
    }
};