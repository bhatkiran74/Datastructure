#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;

} node;

int isEmpty(node *top)
{

    if (top = NULL)
    {
        printf("\nStack is empty");
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(node *top)
{
    node *p = (node *)malloc(sizeof(node));

    if (p == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

node *push(node *top, int x)
{
    if (isFull(top))
    {
        printf("\nStack is Overflow");
    }
    else
    {
        node *p = (node *)malloc(sizeof(node));
        p->data = x;
        p->next = top;

        top = p;
        return top;
    }
}
int pop(node **top)
{
    if (isEmpty(*top))
    {
        printf("\nStack is underflow...");
    }
    else
    {
        node *n = *top;
        *top = (*top)->next;
        int x = n->data;
        free(n);
        return x;
    }
}

void linkedListTraversal(node *top)
{
    while (top != NULL)
    {
        printf("\nElement is %d", top->data);
        top = top->next;
    }
}

int main()
{
    node *top = NULL;

    top = push(top, 10);
    top = push(top, 20);
    top = push(top, 30);

    int x = pop(&top);
    printf("\nElement : %d is popped", x);

    linkedListTraversal(top);

    return 0;
}