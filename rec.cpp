#include <bits/stdc++.h>
using namespace std;

void cal(int n,int i,bool check)
{
	if(i == n && check)
	{ 
		cout<<i<<"\n";
		return;
	}

	if(i > 0 && !check) 
	{
		cout<<i<<" ";

		cal(n,i-5,check);
	}

	else
	{
		cout<<i<<" ";

		check = true;

		cal(n,i+5,check);
	}
}

int main() {
	//code
	
	int t,n;
	
	cin>>t;
	
	while(t--)
	{
	   cin>>n;

	   cal(n,n,0);
	   
	}

	return 0;

}