#include<stdio.h>

void main(){
    float f;
    printf("enter the float number: ");
    scanf("%f", &f);
    char* ptr;
    ptr=&f;
    int k;
    //k=*ptr>>1&1;
    //printf("%d", k);
    ptr=ptr+3;
    for(int i=0; i<4; i++){
        for(int j=7; j>=0; j--){
            k=*ptr>>j&1;
            printf("%d", k);
            }
        printf(" ");
        ptr--;
    }
}