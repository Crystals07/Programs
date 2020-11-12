#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	
	cin>>t;
	
	while(t--)
	{
	    int n,K;
	    
	    cin>>n;
	    
	    int arr[n];
	    
	    for(int &x: arr) cin>>x;
	    
	    cin>>K;
	    
	    int Dp[n][K+1];


	     for(int i =0;i<n;i++)
	    {
	    	for(int j=0;j<=K;j++)
	    	{
	    		Dp[i][j] = 0;
	    	}

	    	
	    }	

	    
	    for(int i = 0;i < n; i++)
	    {
	        Dp[i][0] = 1;
	    }
	    
	    for(int j =0;j<=K;j++)
	    {
	        if(arr[0] == j) Dp[0][j] = 1;
	    }
	    
	    for(int i = 1; i < n; i++)
	    {
	        for(int j = 1;j <= K; j++)
	        {
	            int includecurr = 0, excludecurr = 0;
	            
	            if(arr[i] <= j) includecurr = Dp[i-1][j-arr[i]];
	            
	            excludecurr = Dp[i-1][j];
	            
	            Dp[i][j] = includecurr + excludecurr;

	            cout<<Dp[i][j]<<" ";
	        }

	        cout<<"\n";
	    }
	    
	    cout<<Dp[n-1][K]<<"\n";
	}

}