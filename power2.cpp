#include<bits/stdc++.h>
using namespace std;

bool power2(int n)
{
	if(!n||n<0) return 0;

	float num = log2(n);

	if(num != floor(num) ) return 0;

	return 1;
}

bool bits(int n)
{
	if(!n||n<0) return 0;

	int count = 0;

	while(n)
	{
		n = n&(n-1);
		count=abs(~count);
	}

	if(count==1) return 1;

	return 0;
}

int main()
{
	int n ;

	cin>>n;

	
	cout<<power2(n)<<"\n";

	cout<<bits(n);
	

}