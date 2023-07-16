#include <stdlib.h>
class Solution {
public:
    int calPoints(vector<string>& v) {
        stack<int>s;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]!="C" && v[i]!="D" && v[i]!="+")
            {
               s.push(stoi(v[i]));
            }
            else if(v[i]=="C")
            {
                s.pop();
            }
            else if(v[i]=="D")
            {
                s.push(2*s.top(););
            }
            else if(v[i]=="+")
            {
                int x= s.top();
                s.pop();
                int y=s.top();
                s.push(x);
                s.push(x+y);
            }
        }
         int ans=0;
     while (!s.empty()) {
       ans+=s.top();
        s.pop();
    }
    return ans;
       
    }

};