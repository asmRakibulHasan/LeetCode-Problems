class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int cnt[20005]={0};
        int sub = 10000;
        
        for(int &it:nums) it+=sub,cnt[it]++;
        
        vector<int>vv[20005];
        
        for(int i=0;i<20005;i++)
        {
            if(cnt[i]) vv[cnt[i]].emplace_back(i);
        }
        
        vector<int>ans;
        
        for(int i=20002;i>=0;i--)
        {  
           for(int it:vv[i]) 
           {
               k--;
               ans.emplace_back(it-sub);
               if(!k) return ans;
           }
        }
        
        return ans;
    }
};