#include<stdio.h>
#include<malloc.h>

struct Node 
{
   int data;

   struct Node *next;
};

typedef struct Node Node;


Node* head = NULL;

//to count number of nodes in the linked list

int countnodes()
{
   int c=0;
   Node *p=head;
   while(p!=NULL)
   {
      c++;
      p=p->next;
   }
   return c;
}


void deletionlast()
{


if(head==NULL)
{
   printf("List empty, Underflow ");

}

else
{

   Node *pn=head;
   Node *cn=head->next;

   while(cn->next!=NULL)
   {
      pn=cn;
      cn=cn->next;
   }
   printf("\n%d deleted",cn->data);
   free(cn);
   pn->next=NULL;

}


}



void inserthead()
{
//create node
Node *temp=(Node *) malloc(sizeof(Node));
//get data in node
printf("enter data");
scanf("%d",&temp->data);
temp->next=NULL;


//conect with head
if(head==NULL)
{

   head=temp;
}
else
{
   temp->next=head;
   head=temp;
}

   
}


void deletefirst()
{

//if list empty
   if(head==NULL)
   {

      printf("list is empty, underflow ");


   }

   else
   {

      Node *p=head;

      head=head->next;

      printf("Node deleted %d",p->data);

      free(p);
   }



}


void traverse()
{
   Node *p=head;

printf("\nLinked list is\n");
   while(p!=NULL)
   {
      printf("%d ",p->data);
      p=p->next;
   }
}

int main()
{

   inserthead();
   inserthead();
   inserthead();
   inserthead();

   traverse();

   int x=countnodes();

   printf("\nCount of Nodes %d",x);

   deletefirst();

   printf("\nNodes after deletetion\n");
   traverse();

   deletionlast();
   printf("\nLinked List after deletetion\n");
   traverse();

   return 0;


   
}b