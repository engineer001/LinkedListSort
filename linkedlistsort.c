#include <linkedlistsort.h>

// 定义单链表节点
typedef struct Node
{
  int data;
  struct Node* next;
}Node;

// 链表初始化，读入整数
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

// 链表中的整数冒泡排序，从小到大的顺序，仅改变整数顺序，不改变节点顺序
Node* sortLinkedList(Node* Linkedlist)
{
  for(Node* p=Linkedlist->next;p->next!=NULL;p=p->next)
    for(Node* q=p;q->next!=NULL;)
    {
      q=q->next;
      if((p->data)>(q->data))
      {
        int temp=p->data;
        p->data=q->data;
        q->data=temp;
      }
    }
  return LinkedList;
}

// 打印链表中的整数
void printLinkedList(Node* Linkedlist)
{
   
}
  
// 释放链表空间
void delLinkedList(Node* Linkedlist)
{
    
}

int main()
{
  
}
