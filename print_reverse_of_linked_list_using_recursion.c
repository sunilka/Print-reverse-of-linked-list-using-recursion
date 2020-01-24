// reversal of a singly linked list using recursion
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *start = NULL;
struct node *last = NULL;

void print()
{
    struct node *temp;
    temp = start;

    printf("\n printing the linked list\n");
    while(temp!=NULL)
    {
        printf("%d-->",temp->data);
        temp = temp->next;
    }
}

void reverse(struct node *temp)
{
    if( temp == NULL) return;

    else
    {
        struct node *cur = temp;
        reverse(temp->next);
        printf("%d-->",cur->data);
    }
}

void insert(int ele)
{
    struct node *newnode;
    newnode= (struct node*)malloc(sizeof(struct node));
    newnode->data = ele;
    newnode->next = NULL;

    if(start==NULL)
    {
        start = newnode;
        last = newnode;
    }
    else{
        last->next = newnode;
        last = newnode;
    }
}

int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    print();
    printf("NULL");
    printf("\n\n\n printing in the reverse form\n");
    reverse(start);
    printf("NULL");
    printf("\n\n");
}
