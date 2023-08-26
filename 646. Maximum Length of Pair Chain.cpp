class Solution {
public:
    static bool compare(vector<int>&v1,vector<int>&v2){
        return v1[1]<v2[1];
        
    }
    int findLongestChain(vector<vector<int>>& pairs) {
         sort(pairs.begin(),pairs.end(),compare);
        int pre=0;
        int ans=1;
        for(int i=1;i<pairs.size();i++){
            if(pairs[pre][1]<pairs[i][0]){
                pre=i;
                ans++;
            }
        }
        return ans;
    }
};