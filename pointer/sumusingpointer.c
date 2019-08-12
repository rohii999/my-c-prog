#include<stdio.h>
int main(){

    int a[10],i,sum=0,*p;

    printf("enter the elements in array");
    for(i=0;i<10;i++)
    {
        scanf("%d\n",&a[i]);
    }

    
    p=a;
    for(i=0;i<10;i++){

        sum=sum+(*p);
        p++;
    }
    printf("the sum of all elements is%d",sum);

    return 0;

}