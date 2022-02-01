class Solution {
public:
    Solution() {
        std::ios::sync_with_stdio(false);
        std::cin.tie(nullptr);
    }
    int findDuplicate(vector<int>& nums) {
        vector<bool>vis(nums.size()+10);
        int ans;
        for(int it:nums) {
            if(vis[it]) {
                ans=it;
                break;
            }
            vis[it]=true;
        }
        return ans;
    }
};