#include<stdio.h>
#include<math.h>
int main(){

    int i,m,a;

    printf("enter the no for power series:");
    scanf("%d",&a);

    for(i=0;i<20;i++){

        m=pow(a,i);
        printf("a^%d=%d",i,m);
    }
    

    return 0;
}