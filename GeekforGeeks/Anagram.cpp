#include <iostream>
using namespace std;

int main() {
	
	int t;
	
	cin>>t;
	
	while(t--)
	{
	    long int num1 =0, num2 = 0;
	    
	    string s1 ,s2;
	    
	    cin>>s1>>s2;
	    
	    if(s1.size()!= s2.size()) 
	    {
	        cout<<"NO\n";
	    }
	    
	    else
	    {
	       for(int i =0;i<s1.size();i++)
	      {
	        num1  += (int) s1[i];
	        num2 += (int) s2[i];
	      }
	    
	     if(num1 != num2) cout<<"NO";
	    
	     else cout<<"YES";
	    
	     cout<<"\n";
	     
	    }
	}
}