class Solution {
public:
    bool checkDivisibility(int n) {
        int digitsum=0;
        int digitprod=1;
        int curr=n;
        while(curr!=0)
        {
            int temp=curr%10;
            digitsum=digitsum+temp;
            digitprod=digitprod*temp;
            curr=curr/10;
        }
        if(n%(digitsum+digitprod)==0)
        {
            return true;
        }
        return false;
        
    }
};