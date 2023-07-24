class Solution {
public:
    bool isFascinating(int n) {
        int count=0;
        string c = to_string(n) + to_string(2 * n) + to_string(3 * n);
    c.erase(remove(c.begin(), c.end(), '0'), c.end());

   sort(c.begin(),c.end());
   for(char i='1';i<='9';i++)
   {
         count=0;
       for(int j=0;j<c.length();j++)
       {
           if(c[j]==i)
           {
               count++;
           }
       }
       if(count>1 || count==0)
       {
           return false;
       }
   }
    return true;
      
         }
     

    
          
    
};