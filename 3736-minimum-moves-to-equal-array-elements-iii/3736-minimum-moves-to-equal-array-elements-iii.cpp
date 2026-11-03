class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxi=*max_element(nums.begin(),nums.end());
        long long result=0;
        int len=nums.size();
        for(int i=0;i<len;i++)
        {
            result=result+(maxi-nums[i]);
        }
        return result;
    }
};