#include<bits/stdc++.h>
using namespace std;

static int x = []()
{
	ios_base::sync_with_stdio(false);

	cin.tie(0);

	cout.tie(0);

	return 0;
}();


vector< vector<int> > pascal;

void display(int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<"[ ";

		for(auto j: pascal[i])
		{
			cout<<j<<" ";
		}

		cout<<"] ,\n";
	}
}


int main()
{

	int n;

	cin>>n;

	vector<int> jai;

	for(int i=0;i<n;i++)
	{
		
		
		    jai.clear();

		    jai.push_back(1);

		    for(int j=1;j<i;j++) jai.push_back(pascal[i-1][j-1] + pascal[i-1][j]); 

		    if(i>0) jai.push_back(1);
				
		     pascal.push_back(jai);

	}

	display(n);
}
