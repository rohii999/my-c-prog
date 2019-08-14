#include<stdio.h>
#include<string.h>

void main(){
    char str1[]="hello";
    char str2[]="hii";
    char *a;
    int b,i;



    printf("enter the no which string fun u want:\n");
     scanf("%d",&b);
    
    switch (b){

        case 1:
                 a = strcat(str2,str1);
                 printf("result string %s\n",a);
        break;

        case 2:

            a=strcpy(str2,str1);
            printf("result string is %s\n",a);

        break;

        case 3:
            a=strncpy(str2,str1,2);
            printf("result string is %s\n",a);

        break;

        case 4:
            i=strlen(str2);
            printf("result string is %d\n",i);

        break;

        case 5:
            i=strcmp(str1,str2);
            printf("result string is %d\n",i);

        break;

        

    }
    
}