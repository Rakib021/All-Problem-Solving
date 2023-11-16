#include<stdio.h>

int i;
int takenInput(int n)
{
    int arr[n];
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++){
        consecutive(arr[i]);
    }
}
int consecutive(int x)
{
    int a, b, c, d;
    a= (x-12)/4;
    b=a+2;
    c=b+2;
    d=c+2;
    return printf("%d %d %d %d\n", a, b, c, d);
}
int main()
{
    int t;
    scanf("%d", &t);
    takenInput(t);
    return 0;
}