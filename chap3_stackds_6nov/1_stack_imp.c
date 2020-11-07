#include <stdio.h>
#include <stdlib.h>

typedef struct stack
{
    int size;
    int top;
    int *a;

} stack;

int isFullStack(stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isEmptyStack(stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
}

int main()
{
    // stack s;
    // s.size = 80;
    // s.top = -1;
    // s.a = (int *)malloc(s.size * sizeof(int));

    stack *s = (stack *)malloc(sizeof(stack));

    s->size = 80;
    s->top = -1;
    s->a = (int *)malloc(s->size * sizeof(int));

    // s->a[0] = 10;
    // s->top++;

    if (isEmptyStack(s))
    {
        printf("\nStack is Empty");
    }

    return 0;
}