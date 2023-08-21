#include<iostream>
using namespace std;

void countdiv10(int ar[],int i,int n,int c)
{
	if(i>=n-1)
	{
		cout<<"Count :"<<c;
	}
	else
	{
		if(ar[i]%10==0)
		c++;
		countdiv10(ar,i+1,n,c);
	}
}
int main()
{
	int ar[6]={1,20,30,40,5};
	countdiv10(ar,0,5,0);
	
}
