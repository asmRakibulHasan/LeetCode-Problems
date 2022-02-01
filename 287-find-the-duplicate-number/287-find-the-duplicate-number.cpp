class Solution {
public:
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