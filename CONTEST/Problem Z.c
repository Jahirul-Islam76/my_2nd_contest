#include <stdio.h>
int main()
{
    int test,i,max=0,min=0;
    scanf("%d",&test);
    int a[test];
    for(i=0;i<test;i++)
        scanf("%d",&a[i]);
    min=a[0];
    max=a[0];
        for(i=1;i<test;i++){
            if(a[i]>max){
                max=a[i];
            }
            if(a[i]<min){
                min=a[i];
            }
        }
        for(i=0;i<test;i++){
            if(a[i]==max){
                a[i]=min;
            }
            printf("%d ",a[i]);
        }
            printf("\n");
    return 0;
}
