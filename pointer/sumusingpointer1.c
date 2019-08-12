 #include<stdio.h>
int main(){
    int i,j,c;
    int *ptr,*ptr2,*ptr3;
    ptr=&i;
    ptr2=&j;
    ptr3=&c;

    printf("enter the elements\n");
    scanf("%d%d",&i,&j);

    *ptr3=*ptr+ *ptr2;
    printf("sum of given elements %d\n",*ptr3);
   
    return 0;

}

 
 