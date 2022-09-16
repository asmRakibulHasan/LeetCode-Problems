class Solution {
public:
    
    int dp[1005][1005];
    
    int call(int idx,vector<int>& nums, vector<int>& M,int s){
        if(idx==M.size()) return 0;
        if(dp[idx][s]!=INT_MIN) return dp[idx][s];
        
        int x = nums[s]*M[idx]+call(idx+1,nums,M,s+1);
        int y = nums[(nums.size()-(idx-s)-1)]*M[idx]+call(idx+1,nums,M,s);
        
        return dp[idx][s]=max(x,y);
    }
    
    int maximumScore(vector<int>& nums, vector<int>& M) {
        for(int i=0;i<1002;i++)
        for(int j=0;j<1002;j++)
            dp[i][j] = INT_MIN;
        
        return call(0,nums,M,0);
    }
};