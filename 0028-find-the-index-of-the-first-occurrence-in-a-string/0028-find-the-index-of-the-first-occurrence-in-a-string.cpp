class Solution {
public:
    int strStr(string haystack, string needle) {
        
        if(haystack.size()<needle.size()) return -1;
        
        int i=0;
        int siz = haystack.size()-needle.size();
        
        siz++;
        
        while(siz--){
            int f=0;
            for(int j=i,k=0;k<needle.size();j++,k++){
                if(haystack[j]!=needle[k]) f=1;
            }
            
            if(!f) return i;
            i++;
        }
        
        return -1;
    }
};