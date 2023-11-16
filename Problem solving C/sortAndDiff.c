#include<stdio.h>
void sortAsc(int a[1000],int n);
void sortDes(int b[1000],int n);

int main(){
    int n,i;
    scanf("%d",&n);
    int a[n],b[i];

    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    sortAsc(a,n);

    printf("Displaying ascending order \n");

    for(i=0;i<n;i++)
    printf("%d",a[i]);

    for(i=0;i<n;i++)
    scanf("%d",&b[i]);

    sortDes(a,n);
    printf("\n\nDisplaying descending order\n");
     for(i=0;i<n;i++)
    printf("%d",b[i]);
    printf("\n\n");

    printf("Displaying Difference between two arrays\n");



 for (int i = 0; i < n; i++)
        printf("%d ", a[i] - b[i]);

}
void sortAsc(int a[105],int n)
{
    int i, j, temp;

    for (i = 0; i <n-1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
void sortDes(int b[105],int n)
{
    int i, j, temp;

    for (i = 0; i <n-1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (b[i] < b[j])
            {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
}