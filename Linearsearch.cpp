#include<iostream>

using namespace std;


bool linearsearch(int ar[],int n,int k)
{
	
	if(n==0)
	{
		return false;
	}
	if(ar[0]==k)
		return true;
	else
	{
		return linearsearch(ar+1,n-1,k);
	}
	
}
int main()
{
	int n,se;
	
	cout<<"enter array size";
	cin>>n;
	
	int ar[n];
	
	
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	
	cout<<"enter the search element";
	cin>>se;
	if(linearsearch(ar,n,se))
	{
		cout<<"\nElement found";
	}
	else
	{
		cout<<"\nElement not found";
	}
	
	return 0;
		
}
