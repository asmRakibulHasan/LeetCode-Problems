class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<int> low(1e5),hi(1e5);
        for(int it:nums)
        {
            if(it<0) low[-it]++;
            else hi[it]++;
        }
        int ans;
        for(int i=0;i<1e5;i++)
        {
            if(low[i]==1)
            {
                ans = -i;
                break;
            }
            if(hi[i]==1)
            {
                ans = i;
                break;
            }
        }
        return ans;
    }
};