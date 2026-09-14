class Solution {
public:
    int numberOfSpecialChars(string word) {
        int low[26]={0};
        int up[26]={0};
        int len=word.size();
        int count=0;
        for(int i=0;i<len;i++)
        {
            if(islower(word[i]))low[word[i]-'a']++;
            else if(isupper(word[i])) up[word[i]-'A']++;
        }
        for(int i=0;i<26;i++)
        {
            if(low[i]>0&&up[i]>0)count++;
        }
        return count;
        
    }
};