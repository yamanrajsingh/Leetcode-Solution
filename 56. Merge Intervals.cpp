class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
        int r=in.size();
        sort(in.begin(),in.end());
        vector<vector<int>> ans;
        int x1=in[0][0] , x2=in[0][1];
        for(int i=1;i<r;i++)
        {
            int y1=in[i][0] , y2=in[i][1];
            if(y1>x2){
                ans.push_back({x1,x2});
                x1=y1;
                x2=y2;
        }
            else if(x2>=y1)
                x2=max(x2,y2);
        }
        ans.push_back({x1,x2});
        return ans;
    }
};