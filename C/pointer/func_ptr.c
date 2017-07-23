

#include<stdio.h>

int counter(int, int);
void bubbleShort(int*, int, int (*counter)(int, int));
//int check_length(int* A);
void main(){

int A[]={1, 5 ,6, 10, 16, 54};
int size=6;
//size=check_length(A);
//printf("size of A is: %d\n", size);
bubbleShort(A, size, counter);
for(int i=0; i<size; i++){
printf("%d\t", A[i]);
}
}

int counter(int a, int b){
if(a>b) return 1;
else    return -1;
}


//int check_length(int* A){
//int size = sizeof(A)/sizeof(int);
//return size;
//}

void bubbleShort(int* A, int size, int (*counter)(int a, int b)){
int temp, i=0, j=0;
    for(i=0; i<size; i++){
        for(j=0; j<size-1; j++){
            if((counter(A[j],A[j+1]))>0){
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
}
