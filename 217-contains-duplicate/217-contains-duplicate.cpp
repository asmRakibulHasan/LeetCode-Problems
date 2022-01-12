class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>mm;
        for(int it:nums)
        {
            mm[it]++;
            if(mm[it]==2) return true;
        }
        return false;
    }
};