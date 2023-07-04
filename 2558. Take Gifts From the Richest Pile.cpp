class Solution {
public:

    long long pickGifts(vector<int>& v, int k) {
        for(int i=0;i<k;i++)
        {
          int max= *max_element(v.begin(),v.end());
          int pos = distance(v.begin(), find(v.begin(), v.end(), max));
          v[pos]=sqrt(max);
        }
        return accumulate(v.begin(),v.end(),0LL);
    }
};