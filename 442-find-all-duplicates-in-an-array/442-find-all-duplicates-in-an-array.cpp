class Solution {
public:
    Solution() {
        std::ios::sync_with_stdio(false);
        std::cin.tie(nullptr);
    }
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size()+10;
        vector<bool>first(n),second(n);
        vector<int>ans;
        
        for(int it:nums){
            if(first[it] and !second[it]) ans.emplace_back(it),second[it]=true;
            first[it]=true;
        }
        
        return ans;
    }
};