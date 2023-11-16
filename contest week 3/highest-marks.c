#include<stdio.h>

int main(){
    int N;
    int marks[N],i,highest;
    scanf("%d",&N);

    for(i=0;i<N;i++){
        scanf("%d", &marks[i]);
highest =0;
        if(marks[i]>highest){
            highest = marks[i];

        }
        
        printf("%d\n",highest);
}
//    highest-=marks[i];
   

}