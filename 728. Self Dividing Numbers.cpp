class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>v;
        for(int i=left;i<=right;i++)
        {
            if(check(i))
            {
                 v.push_back(i);
            }
        }
        return v;
    }
    bool check(int n)
    {
        int temp=n;
        while(temp!=0)
        {
            int d=temp%10;
            if(d==0 || n%d!=0)
            {
                return false;
            }
            temp/=10;
        }
        return true;
    }
};