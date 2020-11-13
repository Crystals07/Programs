int static x = [](){
   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    return x;
    
}();


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        
        int prefixlen = 0,maxlen = 0, len = s.length();
        
        unordered_map<char,int> m;
        
        for(int i=0;i<len;i++)
        {
            if(m.find(s[i])!=m.end() && prefixlen >= i - m[s[i]])
            {
               if(prefixlen != i-m[s[i]]) prefixlen = i-m[s[i]];
            }            
            
            else prefixlen++;
            
            m[s[i]] = i;
                      
            maxlen = max(prefixlen,maxlen);
        }
        
        
        return maxlen;
    }
};