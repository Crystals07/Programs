static int x = []()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    return 0;
}();


class Solution {
public:
    
    int inRange(int n)
    {   
        
        return ((n>=48)&&(n<=57));
    }
    
    int myAtoi(string str) {
        
        string s;
        
        int l = str.length(),flag = 1,flag1 = 1;
        
       for(int i=0;i<l;i++)
       {
           if(flag&&str[i]==' ') continue;
           
           else if(flag&&((str[i]=='+')||(str[i]=='-')) )
           {
               (str[i]=='+')?flag1 = 1:flag1 = 0;
               flag=0;
               continue;
           }
           
           else if(!inRange(str[i])) break;
           
           
           s.push_back(str[i]);
           flag = 0;
       }
        
        
        int num = 0;
        
        for(int i=0;i<s.length();i++)
        {
            if(num>(INT_MAX-(s[i]-48))/10) return flag1?INT_MAX:INT_MIN;
            
            num = num*10 +(s[i]-48);
            
        }
        
        return flag1?num:num*(-1);
    }
};