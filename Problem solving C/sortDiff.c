#include <stdio.h> 
int main()
{
    int arr[100],arr2[100];
    int size;
    int i, j,temp;
    scanf("%d", &size);
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr2[i]);
    }
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(arr[i] > arr[j])
            {
                temp     = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
             if(arr2[i] < arr2[j])
            {
                temp     = arr2[i];
                arr2[i] = arr2[j];
                arr2[j] = temp;
            }
        }
         printf("%d ", arr[i]-arr2[i]);
    }
    return 0;
}