// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends


//User function template for C++
class Solution{
public:

void next(int * num,int s,int e)
{
        
        bool flag = 0;
        
        for(int i = e;i>=(e+s)/2;i--)
        {
            if(num[i]>=num[s]&&i!=(e+s)/2)
            {    
                num[i] = num[s];
                flag = 1;
            }
            
            else if(num[i]<num[s]&&i!=(e+s)/2) num[i] = num[s];
            
            else
            {
                if(flag) num[i] += 1;
            }
        }
}

 void   nextPalid(int *num,int s,int e,int n)
    {   
        
          bool flag= 0,extra = 0, odd = n&1 ? 1: 0;
        
          bool even = !(n&1) ? 1 : 0;
     
          int size = e+1;
        
        
        for(int i=e;i>=s;i--)
        {
            if(i!=n/2)
            {    
                if(num[i]<num[size-i-1])
                {
                    flag = 0; extra = 1;  
                }  

                else if(num[i]>num[size-i-1]) flag = 1;

                else if(num[i]==num[size-i-1]&&!extra) flag = 1;
                
                num[i] = num[size-i-1];
               
            }
            
            
            else if(i==n/2&&flag&&odd)
            {
                if(num[i]!=9) num[i] += 1;
                
                else
                {
                    num[i] = 0;
                    
                    num[i-1] += 1;
                    
                  next(num,i-1,i+1);
                }
            }
            
            else if(i==n/2&&even)
            {
                if(num[i]>num[i-1])
                {
                      num[i-1] += 1;
                      num[i] = num[i-1];  
                } 
                
                else if(num[i]==num[i-1]&&flag)
                {
                      num[i-1] += 1;
                      num[i] = num[i-1]; 
                }
                                    
                
                else num[i] = num[i-1];
            }
            
            else if(n==2)
            {
               if(num[i]< num[i-1]) num[i] = num[i-1];
               
               else
               {
                    num[i-1] += 1; num[i] = num[i-1];    
               }
               
            }
        }
        
    }
    
	vector<int> generateNextPalindrome(int num[], int n) {
	    
	    
	    vector<int> v;
	    
	    bool flag = 1;
	    
	    for(int i=0;i<n;i++) if(num[i]!=9) flag = 0;
    
        if(n==1) 
        {
            v.push_back(++num[0]);
            return v;
        }
        
        else if(flag)
        {
            v.push_back(1);
            
            int arr[n+1],j=0;
            
            for(int i=0;i<n;i++) v.push_back(0);
            
            for(auto i: v) 
            {   
                arr[j] = i; j++;
            }
            
            nextPalid(arr,(n+1)/2,n,n+1);
            
            for(int i=0;i<n+1;i++) 
            {   
                v[i] = arr[i];
            }
            
            return v;
            
        }
        
        nextPalid(num,n/2,n-1,n);
 
        for(int i=0;i<n;i++) v.push_back(num[i]);       
    	    
	    return (v);
	    // code here
	}

};

// { Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int num[n];
        for (int i = 0; i < n; i++) {
            cin >> num[i];
        }
        Solution ob;
        auto ans = ob.generateNextPalindrome(num, n);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Endsn