class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& m) {
        int col=m[0].size();
        int ro =m.size();
        vector<vector<int>> result(col, vector<int>(ro));
    
    for (int i = 0; i < ro; i++) {
        for (int j = 0; j < col; j++) {
            result[j][i] = m[i][j];
        }
    }
    
    return result;
        
    }
};