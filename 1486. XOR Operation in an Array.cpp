class Solution {
public:
    int xorOperation(int n, int start) {
        int num;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            num=start+2*i;
            sum^=num;
        }
        return sum;

    }
};