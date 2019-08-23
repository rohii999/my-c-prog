// decimal to binary conversion 
#include<stdio.h>
int main(){
    int i,num=0,k;

    printf("enter the decimal no:");
    scanf("%d",&num);
    for(i=31;i>=0;i--){
         k = num <<i;
 
    if (k & 1)
      printf("1");
    else
      printf("0");
  }
 
  printf("\n");
 

    }


