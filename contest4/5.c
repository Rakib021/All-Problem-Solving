#include<stdio.h>

int i;
int summation(int arr[], int x);

int main()
{
    int t;
    scanf("%d", &t);
    int arr[t];
    for(i=0; i<t; i++){
        scanf("%d", &arr[i]);
    }
    int m = summation(arr, t);
    printf("%d", m);
    return 0;
}
int summation(int arr[], int x)
{
    int sum= 0;
    for(i=1; i<=x; i++){
        if((i%2 != 0) && (arr[i-1]%2 != 0))
        {
            sum += (arr[i-1] + i);
        }
        else if((i%2 == 0) && (arr[i-1]%2 == 0))
        {
            sum += (arr[i-1] + i);
        }
        else{
            sum += 0;
        }
    }
    return sum;
}