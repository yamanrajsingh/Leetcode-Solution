class Solution {
public:
    bool isValid(string str) {
      stack<char> s;

   for (int  i = 0; i < str.length(); i++)
   {
   if (str[i]=='[' || str[i]=='{' || str[i]=='(')
   {
    s.push(str[i]);
   }
    else{
        if (s.empty()==true)
        {
           return false;
        }
        else if (match (s.top(),str[i]) ==false)
        {
          return false;
        }
        else{
            s.pop();
        }
        
    }
   }
   return(s.empty()==true);
        
    }
    bool match(char a, char b){
    if (a=='{' && b=='}' ||a=='(' && b==')'|| a=='[' && b==']' )
    {
       return true;
    }
    return false;
}
};