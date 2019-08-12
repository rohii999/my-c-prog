#include<stdio.h>
#define count 5
int main(){

    int a[count];
    int i=0;

     printf("enter the no \n");
    
    for(i=0;i<count;i++){
         scanf("%d",&a[i]);
 
    }
        printf("givrn array is \n");
          for(i=0;i<count;i++){
         printf("%d\t",a[i]);
    }
        printf("\n");
        printf("result is \n");
        for(i=0;i<count;i++){
             
            if(a[i]<0)
            {
               
                 printf("%d\t",a[i]);
               // a[i]=a[i];
            }
        }
        
          //  for(i=0;i<count;i++){
          //      printf("%d\t",a[i]);
          //  }
         printf("\n");
         
    
     return 0;
}