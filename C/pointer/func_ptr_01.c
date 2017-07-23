#include<stdio.h>

void print(char* ch){
    printf("%s\n", ch);
    }
    
void call_print(void (*ptr)(char* ch)){
    char* name ="Shubham Sharma";
    print(name);
}    

void main(){
    call_print(print);
    }