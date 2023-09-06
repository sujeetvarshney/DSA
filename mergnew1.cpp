using namespace std;
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<process.h>





void merge(int numbers[], int s,  int e);


void m_sort(int numbers[],  int left, int right)
{
  int mid;

  if (right > left)
  {

    mid = (right + left) / 2;
    m_sort(numbers,  left, mid);
    m_sort(numbers,  mid+1, right);
    merge(numbers,  left, right);
  }


}


void mergen(int left[],int right[],int L1,int L2,int ar[],int s)
{

  int i=0,j=0,k=s;

  while(i<L1 and j<L2)
  {
    if(left[i]<right[j])
    {
      ar[k++]=left[i++];
    }
    else
    {
      ar[k++]=right[j++];
    }
  }

  while(i<L1)
  {
      ar[k++]=left[i++];
  }

while(j<L2)
{

      ar[k++]=right[j++];
}

for(int m=0;m<k;m++)
{
  cout<<ar[m]<<" ";
}


}
void merge(int numbers[], int s,  int e)
{

cout<<s<<" "<<e<<endl;
  int mid=(s+e)/2;

  int L1=mid-s+1;
  int L2=e-mid;

  int *left=new int[L1];
  int *right=new int[L1];

int k=s;
  for(int i=0;i<L1;i++)
  {
    left[i]=numbers[k++];
  }
  k=mid+1;
  for(int j=0;j<L2;j++)
  {
    right[j]=numbers[k++] ;
  }

  mergen(left,right,L1,L2,numbers,s);
  
}




int  main()
{
int ar[10],i,n,ch;

cout<<"\nEnter the number of ele";
cin>>n;




for(i=0;i<n;i++)
{
cin>>ar[i];
}
m_sort(ar,0,n-1);




printf("\nSorted array\n");

for(i=0;i<n;i++)
{
printf("%d ",ar[i]);

}



return 0;
}
