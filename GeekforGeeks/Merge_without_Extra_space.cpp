#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function template for C++

static int x = []()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 0;
}();

class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
	    
	    int left = 0, right = n-1;
	    
	    if(arr2[left]>=arr1[right]) return;
	    
	    while(left!=m&&right>=0)
	    {
	        if(arr2[left]>=arr1[right]) break;
	        
	        swap(arr2[left],arr1[right]);
	        
	        left++; right--;
	        
	    }
	    
	    sort(arr1,arr1+n);
	    
	    sort(arr2,arr2+m);
	    
	    
	    
	}
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < m; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);
        for (i = 0; i < n; i++) {
            cout << arr1[i] << " ";
        }
        for (i = 0; i < m; i++) {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends