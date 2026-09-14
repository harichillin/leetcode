class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>res;
        int len=nums.size();
        for(int i=len-1;i>=0;i--)
        {
            int temp=nums[i];
            while(temp!=0)
            {
                res.push_back(temp%10);
                temp=temp/10;
            }
        }
        reverse(res.begin(),res.end());
        return res;

        
    }
};