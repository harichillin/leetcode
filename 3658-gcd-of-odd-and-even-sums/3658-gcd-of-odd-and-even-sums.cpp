class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int odd=0;
        int even=0;
        for(int i=1;i<=n*2;i=i+2)
        {
            odd=odd+i;
            even=even+i+1;
        }
        return gcd(odd,even);
        
    }
};