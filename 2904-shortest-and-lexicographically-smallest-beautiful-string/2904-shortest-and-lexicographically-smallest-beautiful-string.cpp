class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        string ans="";
        int len=s.size();
        vector<int>ones;
        for(int i=0;i<len;i++)
        {
            if(s[i]=='1')
            {
                ones.push_back(i);
        }
        }
        int count=ones.size();
        if(count<k) return "";
        for(int i=0;i<=count-k;i++)
        {
            int start=ones[i];
            int end=ones[i+k-1];
            string curr=s.substr(start,end-start+1);
        
        if(ans==""|| curr.size()<ans.size()||(curr.size()==ans.size() && curr<ans))
        {
            ans=curr;
        }
        }
        return ans;
        
        
    }
};