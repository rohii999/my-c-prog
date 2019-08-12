#include<stdio.h>
int main(){
    int a[5]={1,2,3,4,5};
    int totalsum=0,even_sum=0,odd_sum=0;
    int i=0;

     for(i=0;i<5;i++)
    printf("%d\n",a[i]);
    
    for(i=0;i<5;i++){
        totalsum=totalsum+a[i];

    }
    printf("%d\n",totalsum);

    for(i=0;i<5;i++){
       if(a[i]%2==0)
       {
           even_sum+=a[i];
       }

    } printf("%d\n",even_sum);

    for(i=0;i<5;i++){
       if(a[i]%2!=0)
       {
           odd_sum+=a[i];
       }

    } printf("%d\n",odd_sum);

    

    return 0;


}