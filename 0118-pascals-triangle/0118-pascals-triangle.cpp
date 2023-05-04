class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int>temp;
        
        if(numRows == 1){
            temp.emplace_back(1);
            ans.push_back(temp);
            
            return ans;
        }
        else if(numRows == 2 ){
            temp.emplace_back(1);
            ans.push_back(temp); 
            temp.emplace_back(1);
            ans.push_back(temp);
            
            return ans;
        }
        
        temp.emplace_back(1);
        ans.push_back(temp); 
        temp.emplace_back(1);
        ans.push_back(temp);
        
        for(int i=3;i<=numRows;i++){
            temp.clear();
            temp.push_back(1);
            
            for(int j=1;j<=i-2;j++){
                int x = ans[i-2][j-1];
                int y = ans[i-2][j];
                temp.push_back(x+y);
            }
            
            temp.push_back(1);
            ans.push_back(temp);
        }
        
        return ans;
    }
};