#include <bits/stdc++.h>
using namespace std;


int a[1000000];

void sortByFreq(int arr[],int n);

int main() {
	
	
	int t;
	cin >> t;
	
	
	while(t--){
	    
	    
	    int n;
	    cin >> n;
	    
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    
	    sortByFreq(a,n);
	    cout << endl;
	}
	
	return 0;
}

//Complete this function

//The array is declared globally

bool jai(pair<int,int> m1,pair<int,int> m2)
{
    if(m1.second==m2.second) return (m1.first<m2.first);
    
    else return (m1.second>m2.second);
}

void sortByFreq(int arr[],int n)
{
    unordered_map<int,int> m;
    
    for(int i=0;i<n;i++) m[arr[i]]++;
    
    vector<pair<int,int>> v;
    
    for(auto x: m) v.push_back(make_pair(x.first,x.second));
    
    sort(v.begin(),v.end(),jai);
    
    for(auto it=v.begin();it!=v.end();it++) {
     int k=it->second;
     
    while(k--)  cout<<it->first<<" ";
    }
  
}