#include<bits/stdc++.h>
using namespace std;

static int x = []()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    return 0;
}();

class Solution {
public:
    int firstUniqChar(string s) {
        
        unordered_map<char,int> m;
        
        for(auto c: s) m[c]++;
        
        int index = -1,i = 0;
        
        for(auto c: s)
        {
            if(m[c]==1)
            {
                index = i;
                break;
            }
            
            i++;
        }
        
        return index;
        
    }
};