#include <iostream>
using namespace std;

int main() {
	
	int t,N;
	cin>>t;
	
	while(t--)
	{
	    cin>>N;
	    
	    int arr[N];
	    
	    bool b=false;
	    
	    for(int &x: arr) cin>>x;

	    cout<<"\n Required stock buy and sell \n";
	    
	    for(int i=0;i<N-1;i++)
	    {
	        if(arr[i]<arr[i+1])
	        {
	            b=true;
	            
	            cout<<"("<<i<<" ";
	            
	            while(arr[i+1]>arr[i]&&i<N)
	            {
	                i++;
	            }
	            
	            if(i == N) i = N-1;
	            
	            cout<<i<<")"<<" ";
	        }
	    }
	    
	    if(!b) cout<<"No Profit\n";
	    
	    cout<<"\n";
	}
}