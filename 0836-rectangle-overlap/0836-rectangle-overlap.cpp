class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        /*int x1val=abs(rec1[0]-rec2[0]);
        int y1val=abs(rec1[1]-rec2[1]);
        int x2val=abs(rec1[2]-rec2[2]);
        int y2val=abs(rec1[3]-rec2[3]);
        if(x1val==1 || x2val==1 ||y1val==1 || y2val==1)
        {
            return true;
        }
        return false;
        */
        bool nope=(rec1[2]<=rec2[0]||rec1[0]>=rec2[2]||rec1[3]<=rec2[1]||rec1[1]>=rec2[3]);
        return !nope;
        
    }
};