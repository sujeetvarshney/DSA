#include<stdio.h>
#include<malloc.h>

struct Node 
{
   int data;
   struct Node *next;
};


struct Node *head=NULL,*tail=NULL;


int main()
{

   for(int i=1;i<=3;i++)
   {
   struct Node *temp;  //i am going to make a node temp

   temp=(struct Node *)malloc(sizeof(struct Node)); //node created
   
   printf("Enter node information "); //add data to node
   scanf("%d",&temp->data);
   temp->next=NULL;

   if(tail==NULL)
   {
      head=tail=temp;
   }
   else
   {
      tail->next=temp;

      tail=temp;
   }
   }

   //traversal of linked list
   struct Node *p=head;

   printf("\nLinked List\n");
   while(p!=NULL)
   {
      printf("%d ",p->data);
      p=p->next;
   }





   //give data to node


   //create a node and assign address to pointer 

   //malloc =>allocate memory (get memory for a node from computer)
}