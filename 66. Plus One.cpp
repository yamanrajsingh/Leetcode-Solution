class Solution {
public:
  vector<int> plusOne(vector<int>& v) {
    int n = v.size();
    int carry = 1;
    for (int i = n - 1; i >= 0; i--) {
        int sum = v[i] + carry;
        v[i] = sum % 10;
        carry = sum / 10;
    }
    if(carry>0)
    {
        v.insert(v.begin(),carry);
    }
    return v;
    
}

};