#include<stdio.h>

void main(){
    short n, t1, t2, t3;
    printf("enter the hex number: ");
    scanf("%x", &n);
    
    t1=n&0x00ff;
    t1=t1<<8;
    t2=n&0xff00;
    t2=t2>>8;
    t3=t1|t2;
    printf("%x", t3);
    }