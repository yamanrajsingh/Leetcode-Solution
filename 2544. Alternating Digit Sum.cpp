class Solution {
public:
    int alternateDigitSum(int n) {
        int sum1=0;
        int sum2=0;
        long k=1;
        while(n!=0){
            int dig=n%10;
            if(k%2==0){
                sum1+=dig;
            }
            else{
                sum2+=dig;
            }
            k++;
            n/=10;
        }
        if(k%2==0) return sum2-sum1;
        return sum1-sum2;
    }
};