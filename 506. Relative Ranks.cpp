class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
      vector<pair<int,int>>p;
      int n=score.size();
        for(int i=0;i<score.size();i++)
        {
          p.push_back(make_pair(score[i],i));
        }
        sort(p.rbegin(),p.rend());
        vector<string> ans(score.size());
        ans[p[0].second]="Gold Medal";
        if(n>=2)
        {
 ans[p[1].second]="Silver Medal";
        }
        if(n>=3)
        {
           ans[p[2].second]="Bronze Medal";

        }
         
          for(int i=3;i<score.size();i++)
          {
              ans[p[i].second]=to_string(i+1);
          }
  return ans;
        
    }
};