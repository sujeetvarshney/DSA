#include<iostream>
using namespace std;

void increaseby1(int a[],int x)
{
	if(x==sizeof(a)/sizeof(a[0]))
	{
		return;
	}
	else
	{
		a[x]=a[x]+1;
		increaseby1(a,x+1);
	}
}

int main()
{
	int n;
	
	cout<<"enter n";
	cin>>n;
	int a[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	increaseby1(a,0);
	
	for(int i=0;i<n;i++)
	{
		cout<<a[i] <<" ";
	}
	
	
}
