class Solution {
    int dp[22][2005];
    bool dp1[22][2005];
public:
    
    int call(int idx,int now,vector<int>& nums,int target){
        if(idx==nums.size()) return now==target;
        if(dp1[idx][now+1000]) return dp[idx][now+1000];
        
        dp1[idx][now+1000] = true;
        
        int ans = call(idx+1,now-(nums[idx]),nums,target);
        ans += call(idx+1,now+(nums[idx]),nums,target);
        
        return dp[idx][now+1000]=ans;
    }
    
    int findTargetSumWays(vector<int>& nums, int target) {

        return call(0,0,nums,target);
    }
};