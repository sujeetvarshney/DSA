#include<iostream>

using namespace std;


void bseries(int n)
{
		
	if(n==0) //base condition where recursion should stop
	return;
	else
	{
	
	cout<<n<<" ";
	bseries(n-1); //recursive call, recursive relation
	}
}

void fseries(int n)
{
	
	if(n==0)
	{
		return;
	}
	else
	{
		fseries(n-1);
		cout<<n<<" ";
	}
}

void mseries(int n)
{
	if(n==0)
	{
		return;
	}
	else
	{
		cout<<n<<"";
		mseries(n-1);
		cout<<n<<"";
	}
}
int main()
{
	
	/*fseries(10);
	cout<<endl;
	bseries(10); */
	
	mseries(9);
}
