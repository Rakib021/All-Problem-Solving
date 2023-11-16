#include<stdio.h>
int main()
{
    int N, i, j;
    printf("Enter size of array : ");
    scanf("%d", &N);
    int ara[N];
    int sortedAra[N];

    for (i = 0; i < N; i++)
    {
        scanf("%d", &ara[i]);
    }
    for(i=0;i<N;i++){
        printf("%d ",ara[i]);
    }
    printf("\n");
    int min,minIndex;

    for(j=0;j<N;j++)
{
     min = ara[0];
     minIndex =0;

    for(i=0;i<N;i++){
        if(min>ara[i]){
            min = ara[i];
            minIndex =i;
        }
    }

    sortedAra[j] = min;
    ara[minIndex] =9999;
    }
    for(i=0;i<N;i++){
        printf("%d ",sortedAra[i]);
    }
    printf("\n");


}