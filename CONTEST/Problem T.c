#include <stdio.h>
int main()
{
    int test,i,max=0,min=0;
    scanf("%d",&test);
    int a[test];
    for(i=0;i<test;i++){
        scanf("%d",&a[i]);
    }
    min=a[0];
    max=a[0];
    if(test>1){
        for(i=1;i<test;i++){
            if(a[i]>max){
                max=a[i];
            }
            if(a[i]<min){
                min=a[i];
            }
        }
        printf("%d %d\n",min,max);
    }
    else{
        printf("Ooops!\n");
    }
    return 0;
}
