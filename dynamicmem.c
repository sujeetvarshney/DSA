#include<stdio.h>
#include<malloc.h>

int main()
{
   /*
   int *p;

   int n=10;

   p=&n;

   printf("... %d ",sizeof(int));


   printf("\nAddress is %x",p); //61ff18
   printf("\nValue is %d",*p);

   n=20;

   printf("\nAddress is %x",p);
   printf("\nValue is %d",*p);

   *p=50;

   printf("\nAddress is %x",&n);
   printf("\nValue is %d",n);
*/

   int ar[]={10,20,30,40,50};

   printf("\n.... = %x",ar); //name of array will give its base address

   printf("\n.... = %x",&ar[0]);

   printf("\n.... = %x",&ar[1]);  //what will be the output 10
 
   printf("\n.... = %x",&ar[2]); //what will be the output 14

   printf("\n.... = %x",&ar[3]); //what will be the output 18

   printf("\n.... = %x",&ar[4]); //what will be the output 18 19 1a 1b 1c

   //array always stored at contigous memory location
   
    //what will be the output

   int *q=ar+3; //pointer q is containing address of first location of the array
               // q pointer is pointing to first element of the array

   printf("\nValue by pointer%d ",*q);


   int *p,sz;

   printf("Enter size of memory:");
   scanf("%d",&sz);

   p=(int * )malloc(sizeof(int)*sz); //p is converted array of size (sz)
   //dynamic memory allocation

   for(int i=0;i<sz;i++)
   {
      scanf("%d",&p[i]);


   }

   free(p); //return the memory to computer (dynamic memory deallocation)

   return 0;
   


}