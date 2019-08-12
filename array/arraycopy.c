#include<stdio.h>
int main(){
    int i, j , r, c;
     int p[10],q[10];

     printf("enter the no of element in array");
     scanf("%d",&r);

       for(i=0;i<r;i++){
         scanf("%d",&p[i]);
           
     }
     for(i=0;i<r;i++){
       printf("\np[%d] = %d\n",i, p[i]);
      
       q[i]=p[i];
       }
       
       for(i=0;i<r;i++){
       printf("\nq[%d] = %d",i, p[i]);
       }

}