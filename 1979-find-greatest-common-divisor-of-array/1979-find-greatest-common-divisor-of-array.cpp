class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n1=nums[0];
        int n2=nums[nums.size()-1];
        if(n1==0)
        {
            return 0;
        }
        if(n1==1)
        {
            return 1;
        }
        int maxi=1;
        for(int i=n1;i>=1;i--)
        {
            if(n2%i==0 && n1%i==0)
            {
                return i;
            }
        }
        return 0;
        
    }
};