class Solution {
public:
    int countDigits(int num) {
        int temp=num;
        int count=0;
        while(temp!=0){
            int dig=temp%10;
            if(num%dig==0){
                count++;
            }
            temp=temp/10;
        }
        return count;
    }
};