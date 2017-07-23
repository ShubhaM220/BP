#include<stdio.h>

void main(){

int x;
printf("enter the number: ");
scanf("%d", &x);

if((x>>3)<<3 ==x)
    printf("number is divisible by 8");
else 
    printf("number is not divisible by 8");}