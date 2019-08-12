#include<stdio.h>
void main(){
    int i,j,m,n;
    int a1[5][5],a2[5][5],a3_sum[5][5];
    
    printf("enter the no of rows n column:\n");
    scanf("%d%d",&i,&j);

    printf("enter the element in 1st matrix \n");

    for(m=0;m<i;m++){
        for(n=0;n<j;n++){
            scanf("%d",&a1[m][n]);

        }

    }
    
            printf("MATRIX array1 is \n");
            for(m=0;m<i;m++){
            for(n=0;n<j;n++)
            {

                printf("%3d\t", a1[m][n]);

            }

            printf("\n");

             }

    
    printf("enter the element in 2nd matrix \n");

    for(m=0;m<i;m++){
        for(n=0;n<j;n++){
            scanf("%d",&a2[m][n]);

        }

    }
    
            printf("MATRIX array2 is \n");
            for(m=0;m<i;m++){
            for(n=0;n<j;n++)
            {

                printf("%3d\t", a2[m][n]);

            }

            printf("\n");

             }
             printf("sum of matrix is");
           

}