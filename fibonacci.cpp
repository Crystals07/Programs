#include<bits/stdc++.h>
using namespace std;

  int main()
 {

    int x=0,y=1;
 
    cout<<"Enter the no the terms :";

    cin>>num;

    if(!num)
   {
	cout<<"Cannot display zero terms ";
	exit(0);
   }

     cout<<x;

     for(int i=0;i<num-1;i++)
     {

	 x=x+y;
 
         y=x-y;

	 cout<<" "<<x;


     } 



  }
