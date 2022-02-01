class Solution {
    map<pair<int,int>,int>dp;
    map<pair<int,int>,bool>dp1;
public:
    
    int call(int idx,int now,vector<int>& nums,int target){
        if(idx==nums.size()) return now==target;
        if(dp1[{idx,now}]) return dp[{idx,now}];
        
        dp1[{idx,now}] = true;
        
        int ans = call(idx+1,now-(nums[idx]),nums,target);
        ans += call(idx+1,now+(nums[idx]),nums,target);
        
        return dp[{idx,now}]=ans;
    }
    
    int findTargetSumWays(vector<int>& nums, int target) {

        return call(0,0,nums,target);
    }
};