#include<stdio.h>

int main(){

    int i,j,a,ele,b;
    int p[10];
    printf("enter the array\n");
    scanf("%d",&a);

    for(i=0;i<a;i++)
    {
        scanf("%d",&p[i]);

    }

    for(i=0;i<a;i++)
    {
        printf("%d\n",p[i]);

    }


    printf("enter the ele u want to insert\n");
    scanf("%d",&ele);

    printf("enter the location\n");
    scanf("%d",&b);

    for(i=a;i>=b;i--)
    {
        p[i]=p[i-1];

        p[i-1]=ele;
        
    }    
    a++;
    
    printf("result of array is\n");
    
    for(i=0;i<a;i++)
    {
        printf("%d",p[i]);

    }   
    
}