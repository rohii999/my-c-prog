#include<stdio.h>
int main(){
int i,len=0,len1=0,j=0,len2;
char arr[10]="spear";
char arr1[10]="pears";
char arr2[10];


for(i=0; arr[i] != '\0'; i++ ){
    len++;
    
      }
    printf("length of the string is %d\n",len);

for(i=0; arr1[i] != '\0'; i++ ){
    len1++;
    
      }
    printf("length of the string is %d\n",len1);


 if(len==len1){

        printf("strings are equal:\n");
        
        for(i=0;i<len;i++){
         for(j=0;j<len;j++){
             if(arr[i]==arr1[j]){
                    // arr2[i]=arr[i];
                 printf("%c\n",arr[i]);
               
    
                 }
                   
                 }
            }
     
   
        printf("given string is anagram\n");
    }else{
        printf("given string is not anagram\n");
          
    }
 }
