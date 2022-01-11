class Solution {
public:

    string makeFancyString(string s) {
        string temp;
        char now='0';
        int cnt = 0;
        
        for(auto it:s)
        {            
            if(it==now)
            {
                if(cnt==2) continue;
                else cnt++,temp.push_back(it);
            }
            else now=it,cnt=1,temp.push_back(it);
        }
        return temp;
    }
};