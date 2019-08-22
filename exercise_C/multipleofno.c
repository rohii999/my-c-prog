// multiple of 3 n 7
#include<stdio.h>
int main(){
    int a,res1,res2;

    printf("enter the any no:");
    scanf("%d",&a);

    res1=a/3;
    res2=a/7;

    if(res1==0){
        printf("%d no is divided by 3\n",res1);
    }
    else{
        printf("%d is a no divided by 7\n",res2);
    }
}