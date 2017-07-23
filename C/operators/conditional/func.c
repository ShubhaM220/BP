#include<stdio.h>


int add_func(int, int);
void main(){

int a,b;
printf("Enter the numbers: ");
scanf("%d %d", &a, &b);

add_func(a,b)>5 ? printf("success\n") : printf("failure\n");
//printf("\n%d", add_func(a,b));
}

int add_func(int a, int b){
      return a+b;
}