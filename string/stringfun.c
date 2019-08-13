#include<stdio.h>
#include<string.h>

void main(){
    char str1[]="hello";
    char str2[]="hii";
    char *a;

    a = strcat(str2,str1);
    printf("result string %s",a);
    // printf("enter the no which string fun u want:");
    // scanf("%d",&a);
    
   /*   switch (a){

        case 1:
        strcat(str2,str1);
        break;

        case 2:
        strcpy(str2,str1);
        break;

        case 3:
        strncpy(str2,str1,2);
        break;

        case 4:
        strlen(str2);
        break;

        case 5:
        strcmp(str1,str2);
        break;

        

    }*/

}