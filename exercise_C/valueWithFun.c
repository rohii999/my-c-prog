#include<stdio.h>
void circle();

int main(){

    int a,b,area;

    printf("enter the radius of circle\n");
    scanf("%d",&a);
    circle(a);
    circumference(a);
   
    return 0;
}

void circle(int a){
        int area;
        area=3.14*a*a;
    printf("%d\n",area);
        
}

void circumference(int a){
    int cir;
    cir=2*3.14*a;
    printf("%d\n",cir);
}