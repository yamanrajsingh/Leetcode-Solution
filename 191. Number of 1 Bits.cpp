class Solution {
public:
string intToBinaryString(int n) {
    return bitset<32>(n).to_string();
}
    int hammingWeight(uint32_t n) {
        string b=intToBinaryString( n);
        int count=0;
        for(int i=0;i<b.length();i++)
        {
            if(b[i]=='1')
            {
                count++;
            }
        }
        return count;
        
    }
};