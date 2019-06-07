#include <stdio.h>
int main()
{
    int test,i,max=0,min=0;
    scanf("%d",&test);
    int a[test];
    for(i=0;i<test;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<test;i++){
    if(a[i]%2!=0){
        printf("%d ",a[i]);
       }
    }
    printf("\n");
    return 0;
}
