#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;

int count=1;

cin>>n;

int arr[n];

vector<int>v1;

for(int i=0;i<n;i++) 
{
cin>>arr[i];
}

if(n==1) v1.push_back(1);

else
{
for(int i=1;i<n;i++)
{

if(arr[i]>=arr[i-1])
{
count=count+1;
//v1.push_back(count);
//cout<<"count :"<<count<<endl;
}

if(i==n-1)
{

if(arr[i]>=arr[i+1]) v1.push_back(count+1);

else count=1;

}

else if(arr[i]<arr[i-1]) {

v1.push_back(count);

count=1;

}

}
}
cout<<endl<<"\n"<<"max element is :"<<*max_element(v1.begin(),v1.end());

for(int i=0;i<v1.size();i++) cout<<endl<<v1[i];

}
