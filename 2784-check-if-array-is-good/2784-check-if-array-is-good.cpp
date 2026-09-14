class Solution {
public:
    bool isGood(vector<int>& nums) {
        int len=nums.size()-1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<len;i++)
        {
            if(nums[i]!=i+1)
            {
                return false;
            }
        }
        if(nums[len]!=len)
        {
            return false;
        }
        return true;
    }
};