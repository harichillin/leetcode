class Solution {
public:
    int minElement(vector<int>& nums) {
        int len=nums.size();
        int mini=INT_MAX;
        for(int i=0;i<len;i++)
        {
            int sum=0;
            int temp=nums[i];
            while(temp!=0)
            {
                sum=sum+temp%10;
                temp=temp/10;
            }
            nums[i]=sum;
            mini=min(mini,nums[i]);
        }
        return mini;
        
    }
};