class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int lo = 0, hi = nums.size();
        
        while( hi > lo ) {
            int mid = (lo+hi)>>1;
            
            if(nums[mid]>=target) hi = mid;
            else lo = mid+1;
        }
        
        return lo;
    }
};