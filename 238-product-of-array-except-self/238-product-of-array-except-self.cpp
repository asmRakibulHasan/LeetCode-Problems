class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>prefix(n+10),suffix(n+10),ans;
        
        prefix[0]=suffix[n+1]=1;
        
        for(int i=0;i<n;i++)
        {
            int now = i+1;
            prefix[now] = nums[i]*prefix[i];
        }
        for(int i=n-1;i>=0;i--){
            int now = i+1;
            suffix[now] = nums[i]*suffix[now+1];
        }
        
        for(int i=1;i<=n;i++){
            int st = prefix[i-1],en=suffix[i+1];
            ans.push_back(st*en);
        }
        return ans;
    }
};