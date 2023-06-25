class Solution {
public:
    double  findMedianSortedArrays(vector<int>& n, vector<int>& m) {
        vector<int> v;
       for(int i=0;i<n.size();i++)
       {
           v.push_back(n[i]);
       }
        for(int i=0;i<m.size();i++)
       {
           v.push_back(m[i]);
       }
       sort(v.begin(),v.end());
         int d=v.size();
       double r = d % 2 == 0 ? (double)(v[d / 2] + v[d / 2 - 1]) / 2 : v[d / 2];
       return r;
    }
};