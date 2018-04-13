#include <linkedlistsort.h>

typedef struct Node
{
  int data;
  struct Node* next;
}Node;

Node* initLinkedList()
{
  Node* head=(Node*)malloc(sizeof(Node));
  head->data=0;
  head->next=NULL;
  
  int temp;
  while(scanf("%d",&temp)!=EOF)
  {
    Node* node=(Node*)malloc(sizeof(Node));
    node->data=temp;
    node->next=head->next;
    head->next=node;
  }
  return head;
}

Node* sortLinkedList(Node* Linkedlist)
{
  for(Node* p=Linkedlist->next;p->next!=NULL;p=p->next)
    for(Node* q=p->next;q->next!=NULL;q=q->next)
    {
      if((p->data)>(q->data))
      {
        int temp=p->data;
        p->data=q->data;
        q->data=temp;
      }
    }
}

void printLinkedList(Node* Linkedlist)
{
   
}
  
int main()
{
  
}
