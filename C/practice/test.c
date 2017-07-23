#include<stdio.h>

void main(){
int a, b, c;
printf("enter three numbers:\n");
scanf("%d %d %d", &a, &b, &c);
if(a>b && a> c)
    printf("greatest number is: %d", a);
    else if(b>a && b>c)
        printf("greatest number is: %d", b);
	else 
	    printf("greatest number is: %d", c);
	    }
