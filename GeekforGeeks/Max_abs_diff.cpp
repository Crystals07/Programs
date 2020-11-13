#include <iostream>
using namespace std;

int main() 
{
	//code
    
    int t;
    
    cin>>t;
    
    while(t--)
    {
        int n;
        
        cin>>n;

        long int arr[n],leftmax[n],leftmin[n],rightmax[n],rightmin[n];
        
        for(auto &x: arr) cin>>x;

        if(n==1) return arr[0];
        
        long int prefix = 0,maxsum = arr[0],minsum = arr[0],prefix2 = 0;
        
       for( int i = 0;i < n; i++)
       {
           prefix = max(arr[i],arr[i]+prefix);
           
           prefix2 = min(arr[i],arr[i]+prefix2);

           maxsum = max(prefix,maxsum);

           minsum = min(prefix2,minsum);

           leftmax[i] = maxsum;

           leftmin[i] = minsum;
       }
       
       prefix = 0;
       prefix2 = 0;
       maxsum = arr[n-1];
       minsum = arr[n-1];
         
       for( int i = n-1;i >= 0; i--)
       {
           prefix = max(arr[i],arr[i]+prefix);

           prefix2 = min(arr[i],arr[i]+prefix2);

           maxsum = max(prefix,maxsum);

           minsum = min(prefix2,minsum);

           rightmax[i] = maxsum;

           rightmin[i] = minsum;
                       
       }

       // cout<<"\n\nleftmax\n";

       // for(auto j: leftmax) cout<<j<<" ";

       // cout<<"\n\nrightmin\n";

       // for(auto j: rightmin) cout<<j<<" ";

       // cout<<"\n\nrightmax\n";

       // for(auto j: rightmax) cout<<j<<" ";
 
       // cout<<"\n\nleftmin\n";

       // for(auto j: leftmin) cout<<j<<" ";
 

        long int abs_max = 0;
       
        for(int i=0;i <=n-2;i++)
        {
          abs_max = max(leftmax[i]-rightmin[i+1],abs_max);
          abs_max = max(rightmax[i+1]-leftmin[i],abs_max);

        }

       // cout<<"\n\n";

        cout<<abs_max<<"\n";

        
    }
}