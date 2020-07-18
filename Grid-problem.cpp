#include<iostream>
using namespace std;

//n*m grid

int path(int n,int m)
{
    if( n == 1 || m == 1) return 1;
    
    return path(n,m-1)+ path(n-1,m);
}

int main()
{
  int n = 4 , m = 4;
  
  cout<<path(n,m);
}