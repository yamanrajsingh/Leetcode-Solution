class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int s=0;
        int max=0;
        int idex;
        for(int i=0;i<mat.size();i++)
        {
            s=0;
            for(int j=0;j<mat[i].size();j++)
            {
                s+=mat[i][j];
               
            }
             if(s>max)
             {
                 max=s;
                 idex=i;
             }
        }
        vector<int>v;
       v.push_back(idex);
       v.push_back(max);
        return v;
        
    }
};