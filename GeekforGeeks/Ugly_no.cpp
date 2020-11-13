#include<bits/stdc++.h>
using namespace std;

int main() {
	
	long long t;
	long long n,x = 0,y = 0,z = 0,m;
	
	cin>>t;
	
	vector<long long> ugly = {1};

	for(int i=0;i<1e4+10;i++)
	{
	    m = min({ugly[x]*2,ugly[y]*3,ugly[z]*5});
	    
	    if(m == ugly[x]*2)x++;
	    
	    if(m == ugly[y]*3)y++;
	    
	    if(m == ugly[z]*5)z++;
	    
	    ugly.push_back(m);
	}

// 	for(int i=0;i<30;i++)cout<<ugly[i]<<" ";cout<<"\n";
	
	while(t--)
	{
	    cin>>n;
	    
	    cout<<ugly[n-1]<<"\n";
	}
	
	return 0;
}
