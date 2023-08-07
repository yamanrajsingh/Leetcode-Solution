class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int target) {
      int i=0;
      int j=m[0].size()-1;
      while(i<m.size() && j>=0)
      {
          if(m[i][j]==target)
          return true;
          else if(target<m[i][j]){j--;}
          else i++;
      }
      return false;
    }
};