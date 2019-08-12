#include<stdio.h>
#define count 5
int main(){
    int a[count];
    int i=0;
    int sum=0;


    for(i=0;i<count;i++){
    scanf("%d\t",&a[i]);
    }

    for(i=0;i<count;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");

    printf("sum of given array elements \n");
    for(i=0;i<count;i++){
        sum=sum+a[i];
    }
    printf("%d",sum);

    return 0;
}