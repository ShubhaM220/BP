#include<stdio.h>


void func(){
    extern int a;
    a=10;
    printf("\n%d", a);
    }
void func_1(){
    extern int a;
    a=20;
    printf("\n%d", a);
    }