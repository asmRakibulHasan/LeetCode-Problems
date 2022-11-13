class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> ans;
        unordered_map<string , int > mp;
        vector<string>temp[10005];
        int cnt = 1;
        
        for(auto it:strs)
        {
            string s = it;
            sort(s.begin(),s.end());
            if(mp[s]==0){
                mp[s] = cnt++;
            }
            temp[mp[s]].emplace_back(it);
        }
        
        for(int i=1;i<cnt;i++)
        {
            ans.push_back(temp[i]);
        }
        
        return ans;
        
    }
};