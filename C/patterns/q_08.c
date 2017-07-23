#include<stdio.h>

void main(){
int i, j, n, p=0;
printf("enter the number: ");
scanf("%d", &n);


for(i=1; i<=n; i++){
    p=i;
    for(j=0; j<i; j++){
        if (j==0){
          printf("%d ", i);
          }
          
        else {
        p=p+n-j;
        printf("%d ", p);
        }
        
        }
        //p=0;
        printf("\n");
        }
}