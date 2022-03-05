class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        
        int lo = n-1, hi = n;
        for(int i=0;i<n;i++) {
            if(nums[i]>=0) {
                lo = i-1;
                hi = i;
                break;
            }
        }
        
        vector <int> ans;
        
        while(hi<n or lo>=0) {
            if(hi<n and lo>=0){
                int x = abs(nums[lo]);
                int y = abs(nums[hi]);
                
                if(y<x) {
                    ans.push_back(y*y);
                    hi++;
                }else {
                    ans.push_back(x*x);
                    lo--;
                }
            }
            else if(hi<n) {
                ans.push_back(nums[hi]*nums[hi]);
                 hi++;
            }else {
                ans.push_back(nums[lo]*nums[lo]);
                lo--;
            }
        }
        
        return ans;
    }
};