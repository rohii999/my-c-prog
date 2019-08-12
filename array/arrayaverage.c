#include<stdio.h>
 int main(){
     int i,a,sum=0,aver;
     int a1[5];
     
    printf("enter the array elements \n");
    scanf("%d",&a);

    for(i=0;i<a;i++){

        scanf("%d",&a1[i]);
    }
    for(i=0;i<a;i++){

        sum=sum+a1[i];
       
    }
    printf("sum of array is %d\n",sum);

     aver=sum/a;
     printf("average of array is %d",aver);
     
         

    

    return 0;


 }