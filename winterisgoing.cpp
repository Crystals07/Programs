#include<bits/stdc++.h>
using namespace std;

int main()
{

int x,y,z,t;

cin>>t;

while(t--)
{

cin>>x>>y>>z;

 
 if((fmax(x,y)-fmin(x,y)+z)>fmin(x,y)){
     
     
      cout<<fmin(x,y)<<endl;
     
 }
 
 else cout<<(int)( (fmin(x,y)+fmax(x,y)+z)/3)<<endl;

}

}


