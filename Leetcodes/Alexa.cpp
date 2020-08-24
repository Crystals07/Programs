#include<bits/stdc++.h>
using namespace std;

string arr[] = {" zero ","one "," two "," three "," four "," five "," six "," seven "," eight "," nine "," ten "};

void printnum(stack<int> s)
{
	while(!s.empty())
	{
		cout<<arr[s.top()];
		s.pop();
	}
}


void alexa(int num)
{
    
    int digit;
	
    stack<int> s;

    while(num)
    {
      digit = num%10;                 
      num = num/10;
      s.push(digit);
    }
    
    printnum(s);
    
}


int main()
{
    int num;
    
    cin>>num;
    
    alexa(num);

    cout<<"\n";
}
