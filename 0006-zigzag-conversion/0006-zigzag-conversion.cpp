class Solution {
public:
    string convert(string s, int numRows) {
        int len=s.length();
        int step=-1;
        int temprow=0;
        if(numRows==1||numRows>=len)
        {
            return s;
        }
        vector<string>row(numRows);
        for(int i=0;i<len;i++)
        {
            row[temprow]=row[temprow]+s[i];
            if(temprow==0||temprow==numRows-1)
            {
                step=-step;
            }
            temprow=temprow+step;
        }
        string res="";
        for(int i=0;i<numRows;i++)
        {
            res=res+row[i];
        }
        return res;

        
    }
};