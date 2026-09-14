class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int len=colors.size();
        int first=0;
        int last=len-1;
        int maxi=INT_MIN;
        while(colors[0]==colors[last])
        {
            last--;
        }
        while(colors[len-1]==colors[first])
        {
            first++;
        }
        return max(last,len-1-first);
        
    }
};