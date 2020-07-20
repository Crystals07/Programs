#include<bits/stdc++.h>
using namespace std;

//code is contributed by Jaideep Rana 

/*
Complexity O(1) time n O(1) space
*/

int main()
{
	int n;

	cin>>n;

	if(!n||n==1) 
	{
		cout<<n;
		return 0;
	}

	if(n<0)
	{
		cout<<"\nTerm does not exists\n";
		return 0;
	}


long double sqt = sqrt(5);


long double phi1 = (1+sqt)/2, phi2 = (1-sqt)/2;


long double result = ((pow(phi1,n)-pow(phi2,n))/sqt);


cout<<trunc(result)<<"\n";


}
