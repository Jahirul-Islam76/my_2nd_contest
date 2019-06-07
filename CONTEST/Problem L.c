#include<stdio.h>
int main()
{
    int t1,t2,t3,min;
    scanf("%d %d %d",&t1,&t2,&t3);
    min=t1;
    if(min>t2){
        min=t2;
    }
    if(min>t3){
        min=t3;
    }
    printf("%d\n",min);
    return 0;
}
