class Solution {
public:
    int addDigits(int num) {
        int t=num;
        int r;
        int f=0;
        int sum=0;
        while(true)
        {
            sum=0;
        while(t!=0)
        {
            r=t%10;
            sum+=r;
            t=t/10;
        }
        if(sum<10)
        {
            return sum;
           
        }
        t=sum;
        }
return sum;
    }
};