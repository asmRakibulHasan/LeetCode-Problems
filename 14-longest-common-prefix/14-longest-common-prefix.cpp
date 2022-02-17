class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int hi = 10000;
        for(auto it:strs) {
            if(it.size()<hi) hi = it.size();
        }
        
        if(!hi) return "";
        
        int lo = 1;
        
        while(hi>lo) {
            int mid = (lo+hi+1)>>1;
            
            int f = 1;
            for(int i=1;i<strs.size();i++) {
                int ff=0;
                for(int j=0;j<mid;j++) {
                    if(strs[0][j]!=strs[i][j]) ff=1;
                }
                if(ff) f=0;
            }
            
            if(f) lo = mid;
            else hi = mid-1;
        }
        
        int f = 1;
        for(int i=1;i<strs.size();i++) {
            int ff=0;
            for(int j=0;j<lo;j++) {
                if(strs[0][j]!=strs[i][j]) ff=1;
            }
            if(ff) f=0;
        }
        
        string ans;
        if(f) {
            for(int i=0;i<lo;i++) ans+=strs[0][i];
        }
        return ans;
    }
};