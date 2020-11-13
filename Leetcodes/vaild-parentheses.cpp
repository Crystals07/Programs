static int x = []()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    return 0;
}();

class Solution {
public:
    
    bool isEqual(char ch1,char ch2)
    {
        if((ch1=='(')&&(ch2==')') )return 1;
        
        else if((ch1=='{')&&(ch2=='}')) return 1;
        
        else if((ch1=='[')&&(ch2==']')) return 1;
        
        return 0;
    }
    
    bool terminate(char ch1,char ch2)
    {
        if((ch1=='(')&&((ch2==']')||(ch2=='}')) ) return 0;
        
        else if((ch1=='{')&&((ch2==']')||(ch2==')'))) return 0;
        
        else if((ch1=='[')&&((ch2==')')||(ch2=='}'))) return 0;
        
        return 1;
    }
    
    bool isValid(string str) {
    if((str.size())&1) return 0;
        
        stack<char> s;
        
        for(auto ch: str)
        {
               
            if(!s.size())
            {
                s.push(ch);
                continue;       
            }
            
        
            else if(!terminate(s.top(),ch)) return 0;
            
                 
             if(s.size()&&isEqual(s.top(),ch))
            {
                 s.pop();
            }
            
             else s.push(ch);
        }
        
    
        return s.size()?0:1;
    }
};
