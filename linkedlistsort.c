#include <linkedlistsort.h>

typedef struct Node
{
  int data;
  struct Node* next;
}Node;

Node* initLinkedList()
{
  Node* head=(Node*)malloc(sizeof(Node));
  head->next=NULL;
  
  int temp;
  while(scanf("%d",&temp)!=EOF)
  {
    Node* node=(Node*)malloc(sizeof(Node));
    node->data=temp;
    node->next=head->next;
    head->next=node;
  }

int main()
{
  
}
