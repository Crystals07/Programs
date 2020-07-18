#include <bits/stdc++.h>
using namespace std;

int main()
{

 string s;

 cin>>s;

 int len=s.length();

 char arr[len]; 

 for(int i=0;i<len;i++)
{
   arr[i]=s[i];

}

 sort(arr,arr+len);


  for(int i=0;i<len;i++)
  {
     if(arr[i]!='+'&&i!=len-1) 

     {
       cout<<arr[i]<<"+";    
   
  }

else if(arr[i]!='+') cout<<arr[i];

 }

  
}
