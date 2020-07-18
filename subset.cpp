#include<bits/stdc++.h>
using namespace std;

vector<int> subset; 

void Sub(int k,int arr[])
{
	int n=4;

	if(k==n)
	{
		 for(auto x: subset) cout<<x<<" , ";
         cout<<"\n";
    }

	else
	{
        cout<<"\n";

		subset.push_back(arr[k]);

		Sub(k+1,arr);

		subset.pop_back();

		Sub(k+1,arr);
	}
}


int main()
{

   int arr[]={1,3,5,10};

   Sub(0,arr);

	/* code */
	return 0;
}