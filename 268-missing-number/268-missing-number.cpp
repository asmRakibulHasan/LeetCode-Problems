class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<int> vv(1e5);
        for(int it:nums) vv[it]=1;
        int x;
        for(int i=0;i<1e5;i++) 
            if(!vv[i])
                {
                    x=i;
                    break;
                }
        return x;
    }
};