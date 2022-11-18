class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int f = 0;
        for(int it:nums) if(it==0) f++;
        
        vector<int> ans;
        
        if(f==0)
        {
            int sum = 1;
            for(int it:nums)
                sum*=it;
            for(int it:nums)
                ans.push_back(sum/it);
        }
        else if(f==1)
        {
            int sum = 1;
            for(int it:nums)
                if(it!=0) sum*=it;
            for(int it:nums)
            {
                if(it==0)ans.push_back(sum);
                else ans.push_back(0);
            }
        }
        else
        {
            for(int it:nums)
                ans.push_back(0);
        }
        
        return ans;
        
    }
};