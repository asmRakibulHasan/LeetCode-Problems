class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int xx=10000;
        for(auto it:strs) {
            if(it.size()==0) return "";
            if(it.size()<xx) xx=it.size();
        }
        string ans="";
        int n=strs.size();
        for(int i=0;i<xx;i++) {
            for(int j=1;j<n;j++) {
                if(strs[0][i]!=strs[j][i]) {
                    return ans;
                }
            }
            ans.push_back(strs[0][i]);
        }
        return ans;
    }
};