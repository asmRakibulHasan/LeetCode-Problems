struct _ { ios_base::Init i; _() { cin.sync_with_stdio(0); cin.tie(0); cout << fixed << setprecision(10); } } ___;

class Solution {
public:
    int m,n;
    vector<int> samne,pichone,multi;
    int dp[1005][1005];
    
    int call(int idx1,int idx2){
        //cout<<samne[0]<<' '<<pichone[0]<<' '<<n<<' '<<m<<endl;
        if( idx1+idx2>=m) return 0;
        
        if(dp[idx1][idx2]!=INT_MIN) return dp[idx1][idx2];
        
        int now = idx1+idx2;
        int x = samne[idx1]*multi[now]+call(idx1+1,idx2);
        int y = pichone[idx2]*multi[now]+call(idx1,idx2+1);
        
        return dp[idx1][idx2]=max(x,y);
    }
    
    
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        samne = nums;
        pichone = nums;
        reverse(pichone.begin(),pichone.end());
        multi = multipliers;
        n = nums.size();
        m = multi.size();
        
        for(int i=0;i<1002;i++)
        for(int j=0;j<1002;j++)
            dp[i][j] = INT_MIN;
        
        return call(0,0);
    }
};