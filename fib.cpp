#include<iostream>
using namespace std;

static int count,fastcout;

long int Dp[20000] = {0};

long int fib(int num)
{
	if(num <= 1) return num;

	count++;

	return fib(num-1) + fib(num-2);
}

long int fastfib(int num)
{

	if(num <= 1)
	{

		Dp[num] = num;
	    
	    return num;
	}

	if(Dp[num]) return Dp[num];

	fastcout++;

	Dp[num] = fastfib(num-1) + fastfib(num-2);

	return Dp[num];

}


int main()
{
	int N = 20;

	cout<<fib(N);

	cout<<"\n steps : "<<count<<"\n";

	cout<<fastfib(100);

	cout<<"\n steps : "<<fastcout;

}