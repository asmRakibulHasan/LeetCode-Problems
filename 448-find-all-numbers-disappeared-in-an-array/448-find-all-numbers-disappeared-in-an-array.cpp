class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>ans;
        vector<bool>vv(1e5+10);
        for(int it:nums) vv[it]=true;
        for(int i=1;i<=nums.size();i++)
        {
            if(!vv[i]) ans.emplace_back(i);
        }
        return ans;
    }
};