    #include <stdio.h>
    int main()
    {
        int number, i,temp=0,minus=0;
        printf("Enter a positive integer: ");
        scanf("%d",&number);
        printf("Factors of %d are:\n ", number);
        for(i=1; i <= number; i++){
            if (number%i == 0){
                printf("%d \n",i);
                temp=temp+i;
            }
        }
            printf("sum of factors is:%d\n",temp);

            minus=temp-number;

            if(minus==number){

                printf("given no is prime:\n");
            }else{
                printf("no is not prime:\n");
            }
        return 0;
    }