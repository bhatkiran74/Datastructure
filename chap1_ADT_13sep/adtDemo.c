#include <stdio.h>
#include <stdlib.h>

typedef struct myArray
{
    int t_size; // total size of structure array
    int u_size; // used size of structure array
    int *ptr;   // base address of structure pointer
} myArray;

void createArray(myArray *a, int ts, int us)
{
    a->t_size = ts;
    a->u_size = us;
    a->ptr = (int *)malloc(ts * sizeof(int));
}
void setValueToArray(myArray *a)
{
    int i;
    int n;
    for (i = 0; i < a->u_size; i++)
    {
        printf("\nEnter %d position value : ", i);
        scanf("%d", &n);
        (a->ptr)[i] = n;
    }
}

void showArray(myArray *a)
{
    int i = 0;
    for (i = 0; i < a->u_size; i++)
    {
        printf("\n%d is value : %d ", i, (a->ptr)[i]);
    }
}
int main()
{
    myArray marks;
    createArray(&marks, 10, 2); // myarray ch structure , total size and used size passed to the function

    setValueToArray(&marks);
    showArray(&marks);

    return 0;
}