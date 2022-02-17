class Solution {
public:
    vector<vector<int>> cal[600];
    void dhukao(int now, int x, int y)
    {
        for(int i=0;i<cal[y].size();i++) {
            vector<int> vv = cal[y][i];
            vv.push_back(x);
            cal[now].push_back(vv);
        }
    }
    int n;
    int call(int idx, int now,vector<int>& candidates,vector<vector<int>> &dp) {
        if (now == 0)return 1;
        if (idx >= n or now < 0) return 0;
        if (dp[idx][now] != -1) return dp[idx][now];

        int xx = call(idx + 1, now,candidates,dp);
        int yy = call(idx, now - candidates[idx],candidates,dp);
        if (yy) dhukao(now, candidates[idx], now - candidates[idx]);

        return dp[idx][now] = xx | yy;
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>dp(40, vector<int>(600, -1));
        
        n = candidates.size();
        vector<int> lll;
        cal[0].push_back(lll);
        
        call(0,target,candidates,dp);
        
        for(int i=0;i<cal[target].size();i++){
            sort(cal[target][i].begin(),cal[target][i].end());
        }
        
        vector<vector<int>> ans;
        map<vector<int>,bool>mm;
        
        for(auto it:cal[target]){
            if(!mm[it])
                ans.push_back(it);
            mm[it]=true;
        }
        
        return ans;
    }
};