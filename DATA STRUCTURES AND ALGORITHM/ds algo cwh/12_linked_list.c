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
// printf("%d",head2->next->data);

    return 0;
}