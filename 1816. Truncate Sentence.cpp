class Solution {
public:
    string truncateSentence(string s, int k) {
       
        int count=0;
        int temp=0;
        for(int i=0;i<s.length();i++)
        {
           if(s[i]==' ') 
           {
               count++;
               if(count==k)
               {
                   break;
               }
           }
           temp++;
           
        }
       s=s.substr(0,temp);
        return s;
       
    }
};
