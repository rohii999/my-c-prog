#include<stdio.h>
int main(){

    int a[10]={1, 2, 5, 3, 5, 4, 6, 9, 11},a1[10],a2[10];
    int i=0,j=0,k,n,l;

        printf("enter the no of array:");
        scanf("%d",&n);

    while(i!=n){
        if(a[i]%2==0){           
             a1[j]=a[i]; 
             j++;
        } 
        i++;    
    }  
   // Printing segregated array 
    for (int k = 0; k < j; k++) {
        printf("%d \n",a1[k]);
        // cout << arr[i] << " ";        
        }
    while(i!=n){
        if(a[i]%2!=0){           
             a2[k]=a[i]; 
             k++;
        } 
        i++;    
    }  
   // Printing segregated array 
    for (int l= 0; l < k; l++) {
        printf("%d \n",a2[l]);
        // cout << arr[i] << " ";        
        }

       
    }

    
