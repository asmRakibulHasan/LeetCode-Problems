class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>suffix(n+10),ans;
        
        suffix[n+1]=1;
        

        for(int i=n-1;i>=0;i--){
            int now = i+1;
            suffix[now] = nums[i]*suffix[now+1];
        }
        int now = 1;
        for(int i=1;i<=n;i++){
            int st = now,en=suffix[i+1];
            ans.push_back(st*en);
            now*=nums[i-1];
        }
        return ans;
    }
};