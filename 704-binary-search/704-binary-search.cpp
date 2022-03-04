class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo=0,hi = nums.size();
        int ans = -1;
        while(hi>lo) {
            int mid = (lo+hi)>>1;
            
            if(nums[mid]>=target) {
                hi=mid;
                if(nums[mid]==target) ans=mid;
            }
            else lo = mid+1;
        }
        
        return ans;
    }
};