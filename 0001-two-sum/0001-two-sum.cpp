class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> vp;
        for(int i=0;i<nums.size();i++)
        {
            vp.emplace_back(nums[i],i);
        }
        sort(vp.begin(),vp.end());
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            int idx = vp[i].second;
            int val = vp[i].first;

            int lo = i+1,hi = nums.size()-1;

            while(hi>lo)
            {
                int mid = (lo+hi)>>1;

                int val_mid = vp[mid].first;
                if(target-val<=val_mid) hi = mid;
                else lo = mid+1;
            }

            if(val+vp[lo].first==target)
            {
                ans.emplace_back(vp[lo].second);
                ans.emplace_back(idx);
                break;
            }
        }
        return ans;
    }
};