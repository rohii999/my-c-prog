#include<stdio.h>

void swap(int *a,int *b)
    {
        int temp;
        temp=*a;
        *a=*b;
        *b=temp;
    }
    
int main(){
    int q=1,w=2;

    int x=5,y=10;
	void swap(int *,int *);
	printf("%d %d\n",x,y);
	swap(&x, &y);
	printf("%d %d\n",x,y);
	return 0;
   
    
}