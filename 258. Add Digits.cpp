class Solution {
public:
    int addDigits(int num) {
        vector<int>v;
      jump:
      int r;
        while(num!=0)
        {
           r=num%10;
          v.push_back(r);
           num=num/10;
        }
        
           int ans =  accumulate(v.begin(),v.end(),0);
          if(ans<10)
          {
              return ans;
          }
          else
          {
              num=ans;
              v.clear();
              goto jump;
          }
    }
};