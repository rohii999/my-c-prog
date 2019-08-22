#include<stdio.h>
int main(){

    char arr[10];
    int i=0,j=0,k=0,len=0,temp=0,a;

    printf("enter the no:");
    scanf("%d",&a);
    
   while(a!=0)
    {
       temp= temp * 10;
      temp = temp + a%10;
           a = a/10;
      
    }
    printf("%d",temp);
    /* for(i=0;arr[i]!=0;i++)
    {
        len=arr[i];
    }
    printf("length of array:%d\n",len);

   for(i=0,j=len-1;i<j;i++,j--){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;

    }
    
      for (i = 0; i < len; i++) {
        printf("%d\n", arr[i]);
      }
*/
    return 0;
     


}