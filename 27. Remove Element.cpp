class Solution {
public:
    int removeElement(vector<int>& n, int val) {
      n.erase(remove(n.begin(), n.end(), val), n.end()); 
      return n.size(); 
    }
};