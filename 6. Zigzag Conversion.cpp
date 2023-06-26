class Solution {
public:
    string convert(string s, int numRows) {

        if(numRows==1)
        {
            return s;
        }
   vector<string> v(numRows);
   bool temp = false;
   int j=0;
    for(int i=0;i<s.length();i++)
    {
      v[j]= v[j]+s[i];
      if(j==0 || j==numRows-1)
      {
          temp=!temp;
      }
      if(temp==true)
      {
          j++;
      }
      if(temp==false)
      {
          j--;
      }
    }
    string str ="";
    for(auto c : v)
    {
        str=str+c;
    }
    return str;
        
    }
};