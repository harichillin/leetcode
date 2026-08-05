class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int len=words.size();
        int mini=INT_MAX;
        for(int i=0;i<len;i++)
        {
            if(words[i]==target)
            {
                int curr=abs(i-startIndex);
                int circ=len-curr;
                mini=min(mini,min(curr,circ));
            }
        }
        if(mini==INT_MAX)
        {
            return -1;
        }
        return mini;

    }
};