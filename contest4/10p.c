#include<stdio.h>
#include <math.h>

int has_seven_digit(int *array, int n){
    int i, count=0, half_number, remainder;
    for(i=1; i<=n; i++){
        printf("%d ", array[i]);
        if(n%2==0){
            half_number = n/2;
        }
        else{
             half_number = n/2+1;
        }
       
        while(array[i] > 0){
            remainder = array[i] % 10;
            if(remainder == 7){
                count++;
            }
            array[i] = array[i] / 10;
        }
    }

    if(count >= half_number){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
     int n, i, arr[100], count=0, has_digit, *array;
     scanf("%d", &n);

     for(i=1; i<=n; i++){
        scanf("%d", &arr[i]);
     }
     array = arr;
     has_digit = has_seven_digit(array, n);
     if(has_digit){
        printf("Beautiful");
     }
     else{
        printf("Ugly");
     }

     return 0;
}