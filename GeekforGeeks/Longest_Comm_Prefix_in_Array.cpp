#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    
    while(t--)
    {
        int n; cin>>n;
        
        vector<string> v;
        
        string demo;
        
        while(n--)
        {
            cin>>demo;
            v.push_back(demo);
        }
        
        
        int flag = 1,i=0,len = v[0].size();
        
        string temp;
        
        while(flag)
        {
            if(i>=len) break;
            
            else temp.push_back(v[0][i]);
            
            for(auto s: v)
            {
                
                if(temp[i]!=s[i])
                {
                    temp.pop_back();
                    flag = 0;
                    break;
                }
            }
            
            i++;
        }
        
        
        
        cout<<(temp.size()==0?"-1":temp)<<"\n";
    }
}