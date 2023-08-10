#include<iostream>
using namespace std;

void printforwardbackward(int n)
{
	if(n==0)
	return;
	else
	{
		cout<<n<<" ";
		printforwardbackward(n-1);
		cout<<n<<" ";
	}
}

void forwardseries(int n)
{
	if(n==0)
	return;
	else
	{
		forwardseries(n-1);
		cout<<n<<" ";
	}
}

void reverseseries(int n)
{
	if(n==0)
	return ;
	else
	{
		cout<<n<<" ";
		reverseseries(n-1);
	}
}

int main()
{
	int n;
	cin>>n;
	
	//reverseseries(n);
	//forwardseries(n);
	printforwardbackward(n);
	return 0;
}
