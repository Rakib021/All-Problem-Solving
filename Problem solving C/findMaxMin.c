#include<stdio.h>
void findMaxMin(int n,int nums[],int* p, int*q){
    *p=nums[0];
    *q=nums[0];
for(int i=0;i<n;i++){
    if(nums[i]>*p)
    *p=nums[i];

if(nums[i]<*q)
    *q=nums[i];
}
}
int main(){
    int ara[]={20,21,43,2,5,4,76};
    int n=7;
    int maxx,minn;
    findMaxMin(n,ara,&maxx,&minn);
    printf("max =%d, min=%d\n",maxx,minn);

}