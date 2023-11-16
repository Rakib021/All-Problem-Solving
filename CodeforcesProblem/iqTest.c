#include<stdio.h>
int main(){
    int n,arr[105],i,even_c=0,odd_c=0,ans;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=n;i++){
        if(arr[i]%2==0)
        even_c++;
        else
        odd_c++;
    }
    // printf("%d",odd_c);

    if(even_c ==1){
        //ev en position
        for(i=1;i<=n;i++){
            if(arr[i]%2==0){
                ans=i;
                break;
            }
        }
    }

    else{
        //odd position
         for(i=1;i<=n;i++){
            if(arr[i]%2!=0){
                ans=i;
            }
        }
    }
    printf("%d\n",ans);
}