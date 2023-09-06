#include<stdio.h>

struct Node
{
   int data;
   struct Node *next;
};

int main()
{
   struct Node *head,N1,N2,N3,N4; //4 nodes of a linked list
   N1.data=10;
   N2.data=20;
   N3.data=35;
   N4.data=15;

   head=&N1;
   N1.next=&N2;
   N2.next=&N3;
   N3.next=&N4;
   N4.next=NULL;

//traversing a linked list
 
   while(head!=NULL)
   {
      printf("%d ->",head->data);
      head=head->next;

   }

//-> operator (when we want to access any structure member using structure pointer)


printf("Link List Created...");

return 0;
}