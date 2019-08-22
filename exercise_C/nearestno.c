#include<stdio.h>
int main(){

    int a,b,temp;
    int i;

    printf("enter the no:");
    scanf("%d%d",&a,&b);

    
       if(a,b<=100){
           if(a==b){
              return 0;
           }
           else if(a>b){
               temp=a;
           }
           else if(b>a){
               temp=b;
               
           }
           printf("%d",temp);
        
       }
       else
       {
           printf("nthng");
       }
       

}