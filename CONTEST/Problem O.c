#include<stdio.h>
int main()
{
    int test,i=0;
    float n,sum=0;
    scanf("%d",&test);
    while(test!=0){
        scanf("%f",&n);
        test--;
    if(n>0){
         sum=sum+n;
         i++;
         }
    }
    if(sum==0)
        printf("Not Found\n");
    else{
    printf("%.2f\n",sum/i);
    }
    return 0;
}
