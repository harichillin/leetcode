class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        long long len=nums.size();
        long long totidx=0;
        long long numsum=0;
        for(int i=0;i<len;i++)
        {
            numsum=numsum+nums[i];
            totidx=totidx+(long long)i*nums[i];
        }
        long long maxi=totidx;
        for(int i=1;i<len;i++)
        {
            totidx=totidx+numsum-len*nums[len-i];
            maxi=max(maxi,totidx);
        }
        return maxi;
        
    }
};