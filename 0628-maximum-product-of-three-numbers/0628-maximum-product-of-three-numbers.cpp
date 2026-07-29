class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int len=nums.size();
        
        sort(nums.begin(),nums.end());
        int prod1=nums[len-1]*nums[len-2]*nums[len-3];
        int prod2=nums[0]*nums[1]*nums[len-1];
        
        return max(prod1,prod2);

        
    }
};