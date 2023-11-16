#include<stdio.h>

int i;
int swapping(int arr[], int x);

int main()
{
    int t;
    scanf("%d", &t);
    int arr[t];
    for(i=0; i<t; i++)
    {
        scanf("%d", &arr[i]);
    }
    swapping(arr, t);
    return 0;
}
int swapping(int arr[], int x)
{
    int r, p, q, temp;
    int *m, *n;
    scanf("%d", &r);
    for(i=0; i<r; i++)
    {
        scanf("%d %d", &p, &q);
        m= &arr[p-1];
        n= &arr[q-1];
        temp = *m;
        *m = *n;
        *n =temp;
    }
    for(i=0; i<x; i++)
    {
        printf("%d ", arr[i]);
    }
}