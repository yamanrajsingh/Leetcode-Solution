class Solution {
public:
    bool search(vector<int>& v, int t) {
      int l=0,r=v.size()-1;
      while(l<=r)
      {
          if(v[l]==t || v[r]==t)
              return true;
          l++;
          r--;
      }
      return false;
    }
};