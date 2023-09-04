class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        int k=0,s=0,p=0,maximum=0,d=0;
        int arr[46]={0};
        for(int i= lowLimit ; i<=highLimit ;i++)
        {
            p=i;
            while(p!=0)
            {
                d=p%10;
                s=s+d;
                p=p/10;
            }
            arr[s]++;
            s=0;
        }

       // int l = sizeof(arr)/4;
        for(int i=0;i<46;i++)
        {
            if(maximum < arr[i])
            {
                maximum = arr[i];
            }
        }

        return maximum;
        
    }
};