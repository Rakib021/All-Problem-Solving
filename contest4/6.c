#include<stdio.h>

int i;
int byThree(int x)
{
    int count= 0;
    if(x%3==0){
        count++;
    }
    return count;
}
int byFive(int x)
{
    int count= 0;
    if(x%5==0){
        count++;
    }
    return count;
}
int main()
{
    int t, count=0;
    scanf("%d", &t);
    int arr[t];
    for(i=0; i<t; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<t; i++)
    {
        int m = byThree(arr[i]);
        int n = byFive(arr[i]);
        if(m==1 || n==1)
        {
            count++;
        }
    }
    if(count==0)
        printf("-1");
    else
        printf("%d", count);
    return 0;
}