class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int count=0,temp=0;
        int n=moves.size();
        for(int i=0;i<n;i++)
        {
            if(moves[i]=='L') temp--;
            else if(moves[i]=='R') temp++;
            else count++;
        }
        return abs(temp)+count;
    }
};