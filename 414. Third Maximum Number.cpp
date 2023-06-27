class Solution {
public:
    int thirdMax(vector<int>& v) {
          sort(v.begin(),v.end());
       v.erase(unique(v.begin(), v.end()), v.end());
        int n=v.size();
        if(n<3)
        {
          return v[n-1];
        }
        else{
         return v[n-3];
        }
       
        
    }
};