#include<stdio.h>
int main(){

    int a,b,res,res2;

    printf("enter the no:");
    scanf("%d%d",&a,&b);

    res=a%10;
    res2=b%10;

    if(res==res2){

        printf("last digit is same %d",res);
    }
    else
    {
        printf("no is diff");
    }
    
    


}