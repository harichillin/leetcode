class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int len=nums.size();
        int left=1;
        int right=1;
        int maxi=INT_MIN;
        for(int i=0;i<len;i++)
        {
            if(left==0)left=1;
            if(right==0)right=1;
            left=left*nums[i];
            int j=len-i-1;
            right=right*nums[j];
            maxi=max({maxi,left,right});
        }
        return maxi;
    }
};