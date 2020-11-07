#include <stdio.h>
void travarsal(int a[], int s)
{
    int i;
    for (i = 0; i < s; i++)
    {
        printf("\n%d position : %d element", i, a[i]);
    }
}

int indInsertion(int a[], int s, int c, int ind, int e)
{
    int i;
    if (s >= c)
    {
        return -1;
        printf("\nthere is no space for insertion: ");
    }
    for (i = s - 1; i >= ind; i--)
    {
        a[i + 1] = a[i];
    }
    a[ind] = e;
}

int main()
{

    int a[10] = {7, 8, 12, 27, 88};
    int size = 5, cap = 100, ele = 45, ind = 3;

    indInsertion(a, size, cap, ind, ele);
    size += 1;
    travarsal(a, size);
    return 0;
}