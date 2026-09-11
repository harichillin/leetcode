class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int len=digits.size();
        int count=0;
        int freq[10]={0};
        for(int i=0;i<len;i++)
        {
            freq[digits[i]]++;
            if(freq[digits[i]]==1 && digits[i]%2==0)
            {
                count++;
            }
        }
        if(count==0) return 0;

        int val=0;
        for(int h=1;h<=9;h++)
        {
            for(int t=0;t<=9;t++)
            {
                for(int u=0;u<=8;u+=2)
                {
                    int need[10]={0};
                    need[h]++;
                    need[t]++;
                    need[u]++;

                    bool ok=true;
                    for(int d=0;d<10;d++)
                    {
                        if(need[d]>freq[d])
                        {
                            ok=false;
                            break;
                        }
                    }
                    if(ok) val++;
                }
            }
        }
        return val;
    }
};