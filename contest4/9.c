#include<stdio.h>
int prime(int* array,int n);
float average(int* arr,int n);

int main(){
    int n,i,arr[100],count=0,isPrime =0,*array;
    float avg;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    array = arr;

    prime(arr,n);
    avg=average(array,n);

    printf("\nAverage of all positive integers :%0.2f",avg);
    

}
int prime(int* array,int n){
    int i,j,count=0;

    for(i=0;i<n;i++){
        int a=1;
        int x=array[i];

        for(j=2;j<x;j++){
            if(x%j==0){
                a=0;
            }
        }
        if(a){
            count++;
        }

    }
    printf("Prime numbers : %d",count);
}
float average(int* arr,int n){
    int i=0,sum=0;
    float avg;

    for(i=0;i<n;i++){
        sum +=*(arr +i);
    }
    avg = sum/n;
    return avg;

}