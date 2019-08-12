#include<stdio.h>
int main(){

    int var=20;
    int *ip;

    ip=&var;

    printf("adress value of variable %d\n",&var);//addess value of variable

    printf("pointer variable value %d\n",ip);//store the address value in pointer variable 

    printf("access the value of var variable in pointer variable %d\n",*ip);
    var=10;
     
     printf("value of pointer variable %d \n ",*ip);
    return 0;
}