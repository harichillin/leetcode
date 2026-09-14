class Solution {
public:
    int mirrorDistance(int n) {
        int no=n;
        int temp=n;
        int prod=1;
        while(temp>=10)
        {
            prod=prod*10;
            temp=temp/10;
        }
        temp=n;
        int val=0;
        for(int i=prod;i>=1;i=i/10)
        {
            val=val+(temp%10)*i;
            temp=temp/10;
        }
        return abs(val-no);
        
    }
};