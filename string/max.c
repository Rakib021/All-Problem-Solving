#include<stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int marks[100],N,i,diff;

    scanf("%d\n",&N);
    for(i=0;i<N;i++)
        {
        scanf("%d",&marks[i]);
        }
        int highest=marks[0];
        for(i=0;i<N;i++)
        {
        if(highest<marks[i])
            {
                highest = marks[i];
            }
        
           
        }
        for(i=0;i<N;i++)
        {
             diff = highest - marks[i];
            printf("%d ",diff);
        }
return 0;

}