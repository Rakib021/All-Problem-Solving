#include<stdio.h>
int main()
{
    int row =4, col = 3;
    int array [4][3];

    for(int i =0;i<=row-1;i++){
        for(int j =0;j<=col-1;j++){
            scanf("%d",&array[i][j]);
        }
        printf("\n");
      
    }
    for(int i =0;i<=row-1;i++){
        for(int j =0;j<=col-1;j++){
            printf("%d ",array[i][j]);
        }
                printf("\n");

      
    }
    return 0;
}