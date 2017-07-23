#include<stdio.h>

void main(){
    int x=10;
    int y=20;
    int* const ptr=&x;
    //ptr=&x;
    printf("value of x(before increment) : %d\n", x);
    ++(*ptr);
    
    printf("value of x(after  increment) : %d\n", x);
    
    const int *pt=&y;
    printf("value of y(before increment) : %d\n", y);
    //++(*pt);
    pt=&x;
    //++(*pt);
    
    printf("value of y(after  increment) : %d\n", *pt);
    
     }