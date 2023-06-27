class Solution {
public:
    int strStr(string h, string n) {
     size_t foundIndex = h.find(n);
     if (foundIndex != string::npos) {
       return foundIndex;
    } else {
        return -1;
    }
        
    }
};