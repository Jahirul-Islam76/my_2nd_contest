#include<stdio.h>
int main(){
    int n,i,j=0,x=1,y;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]==0){
            j++;
        }
        else{
            x*=a[i];
        }
    }
        for(i=0;i<n;i++){
        if(j>1){
            y=0;
        }
        else if(j==1){
            if(a[i]==0)
            y=x;
            else
            y=0;
        }
        else{
            y=x/a[i];
        }
            if(i!=n-1)
            printf("%d ",y);
            else
            printf("%d\n",y);
        }
    return 0;
}
