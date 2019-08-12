#include<stdio.h>
int main(){

    int i,a,b;

    int p[10];

    printf("enter the no of element");
    scanf("%d",&a);

    for(i=0;i<a;i++){
        scanf("%d",&p[i]);

    }
    printf("enter the element u wan to search");
    scanf("%d",&b);

    for(i=0;i<a && b!=p[i];i++){
        }
        if(b==p[i])
        {
            printf("%d",b);
        }
        else{
            printf("no is not found");
        }
        
    
    



}