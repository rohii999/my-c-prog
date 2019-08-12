#include<stdio.h>
int main(){
    int i,j,p,q;
    int a[5][5];

            printf("enter the no of rows and column in matrix \n");
            scanf("%d%d",&i,&j);
        
    
    printf("Enter elements of 1st matrix\n");
   for(p=0; p<i; p++){
    for(q=0; q<j; q++)
    {
      printf("Enter a :%d%d \n",p+1,q+1);
       scanf("%d", &a[p][q]);
    }
   }
   for(p=0; p<i; p++){
    for(q=0; q<j; q++)
    {

            printf("%d\t",a[p][q]);
        }
        printf("\n");
   }
    return 0;
}