#include<stdio.h>
int array(int arr[],int start,int len);
int main()
{
    int a,i;
    int arr[10];
    
    printf("enter the no of array");
    scanf("%d",&a);
   
   for(i=0;i<a;i++)
   {
       scanf("%d",&arr[i]);
   }
   array(arr,0,a);
    return 0;
}


int array(int arr[],int start,int len) 
{  
   
       
    /* Recursion base condition */
    if(start >= len)
        return;
        
    /* Prints the current array element */
    printf("%d\t", arr[start]);
     array(arr, start + 1, len); 
    
}

