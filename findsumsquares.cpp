#include<iostream>

using namespace std;


int findsum(int ar[],int n)
{
	
	if(n==0)
	{
		return 0;
	}
	if(n==1)
		return ar[0]*ar[0];
	else
	{
		return ar[0]*ar[0]+findsum(ar+1,n-1);
	}
	
}
int main()
{
	int n,s=0;
	
	cout<<"enter array size";
	cin>>n;
	int ar[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	
	cout<<findsum(ar,n);
	
	return 0;
		
}
