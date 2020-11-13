#include<bits/stdc++.h>
using namespace std;

int fun(int N)
{   
    if(!N||N==1) return 1;
    
    int res = 0;
    
    for(int i=1;i<=N;i++)
    {
        res += fun(i-1)*fun(N-i);
    }
    
    return res;
}


int main() {
	//code
	int t; cin>>t;
	
	while(t--)
	{
	    int n; cin>>n;
	    cout<<fun(n)<<"\n";
	}
}