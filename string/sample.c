#include<stdio.h>
void count()
{
    
   char str[]="Codekul - The Gurukul for Coders! C-Programming Batch: 11am:12pm";
    int i = 0, ch_count = 0, dig_count = 0, sp_count = 0;

    while (str[i] != 0) {
        if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)) {
            ch_count++;
        }
        else if (str[i] >= 48 && str[i] <= 57) {
            dig_count++;
        }
        else {
            sp_count++;
        }
        i++;
    }
    printf("Character count: %d\nDigit count: %d\nSpecial char count: %d\n", ch_count, dig_count, sp_count);

    
}
int replace_ch(){
   
   
    char str[]="Codekul - The Gurukul for Coders! C-Programming Batch: 11am:12pm";
    char search_ch, replace_ch;
    int i = 0;

    printf("Enter search char: ");
    scanf(" %c", &search_ch);

    printf("Enter replace char: ");
    scanf(" %c", &replace_ch);

    while (str[i] != 0) {
        if (str[i] == search_ch) {
            str[i] = replace_ch;
        }
        i++;
    }
    
    printf("Replaced str: %s\n", str);
    
    return 0;
}
int touppercase() {

    char str[] = "Codekul - The Gurukul for Coders!";
    int i = 0;

    while (str[i] != 0) {
        if (str[i] >= 97 && str[i] <= 122) {
            str[i] = str[i] - 32;
        }
        i++;
    }
    
    printf("Uppercase: %s\n", str);
    return 0;
}
int wordcount() {

    char str[] = "Codekul C Programming Batch morning 11am to 12pm";
    int i = 0, counter = 0;

    for(i = 0; str[i] != '\0'; i++) {
        if (str[i] == 32) {
            counter++;
        }
    }

    printf("Number of words: %d\n", ++counter);

    return 0;
}
    
int main(){

    
   
    count();
    replace_ch();
    touppercase();
    wordcount();
    return 0;
}