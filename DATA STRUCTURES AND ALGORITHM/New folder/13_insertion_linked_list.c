#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void show(struct node *head)
{
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
}

struct node *insertatfirst(struct node *head,int data)
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}
struct node *insertatindex(struct node *head,int data,int index){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    struct node *p=head;
    int i=0;
    while(i!=index-1){
        ptr->next=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}
int main()
{
    struct node *head;
    struct node *head2;
    struct node *head3;
    struct node *head4;

    head = (struct node *)malloc(sizeof(struct node));
    head2 = (struct node *)malloc(sizeof(struct node));
    head3 = (struct node *)malloc(sizeof(struct node));
    head4 = (struct node *)malloc(sizeof(struct node));

    head->data = 7;
    head->next = head2;
    head2->data = 75;
    head2->next = head3;
    head3->data = 90;
    head3->next = head4;
    head4->data = 100;
    head4->next = NULL;
    show(head);


    head=insertatfirst(head,1);
    show(head);

 
    return 0;
}