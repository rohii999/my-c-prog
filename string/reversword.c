#include<stdio.h>
int main(){


    
   char str[]="Codekul gurukul";
    
    int i = 0, counter = 0 , j=0, temp=0;

    printf("the original string is %s\n",str);
    for(i = 0; str[i] != '\0'; i++) {
        if (str[i] == 32) {
            counter++;
        }
    }
        ++counter;
    printf("Number of words: %d\n", counter);

    for(i=0,j=counter-1;i<j;i++,j--){
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }

    printf("\nreverse word is %s\n",str);
}
