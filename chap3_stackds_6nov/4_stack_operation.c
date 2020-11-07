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

void push(stack *ptr, int value)
{
    if (isFullStack(ptr))
    {
        printf("\nStack overflow...");
    }
    else
    {
        ptr->top++;
        ptr->a[ptr->top] = value;
        printf("\n%d is pushed into stack at position %d ", ptr->a[ptr->top], ptr->top);
    }
}
int pop(stack *ptr, int value)
{
    if (isEmptyStack(ptr))
    {
        printf("\nStack underflow...");
        return -1;
    }
    else
    {
        value = ptr->a[ptr->top];
        ptr->top--;

        return value;
        printf("\n%d is poped ", value);
    }
}

int main()
{

    stack *s = (stack *)malloc(sizeof(stack));

    s->size = 80;
    s->top = -1;
    s->a = (int *)malloc(s->size * sizeof(int));

    int x = 10;
    int y = 20;
    push(s, x);
    push(s, y);
    if (isEmptyStack(s))
    {
        printf("\nStack is Empty");
    }

    return 0;
}