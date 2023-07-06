class Solution {
public:
    int lastStoneWeight(vector<int>& v) {
       priority_queue<int> p;
       for(int i:v)
       {
           p.push(i);
       }
       while(p.size()>1)
       {
           int max = p.top();
           p.pop();
           int min=p.top();
           p.pop();
           if(max!=min)
           {
               p.push(max-min);

           }
       }
       if(p.empty()==false)
       {
           return p.top();
       }
       return 0;

        
    }
};