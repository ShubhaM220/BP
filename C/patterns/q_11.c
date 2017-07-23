#include<stdio.h>

void main(){

int n, k=0;
printf("enter the number :");
scanf("%d", &n);

for(int i=1; i<n; i++ ){
    for(int j=1; j<=i; j++){
        k=i*j;
        printf("%d ", k);
        
        }
        printf("\n");
        }
}