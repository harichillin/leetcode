class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len=nums.size();
        unordered_map<int,int>map;
        for(int i=0;i<len;i++)
        {
            map[nums[i]]=i;
        }
        for(int i=0;i<len;i++)
        {
            int complement=target-nums[i];
            if(map.count(complement) && map[complement]!=i)
            {
                return {i,map[complement]};
            }
        }
        return {};

    }
};