#include<stdio.h>
#include<stdlib.h>

int sec_smallest, smallest_val;
int* ptr;
int n, count=0;
int second_smallest(int* , int );
int smallest_func(int* , int );
int difference(int(*ptr1)(int*, int), int(*ptr2)(int*, int));
int main2(int *arr, int size);

void main(){

    int  i, ans;
    
    printf("enter number of colleague : ");
    scanf("%d", &n);

    ptr=(int*)malloc(sizeof(int)*n);
    for(i=0; i<n; i++){
        scanf("%d", &ptr[i]);
    }
//printf("\n%d", sec_smallest);
    //difference(smallest_func, second_smallest);
    ans=main2(ptr, n);
    printf("%d", ans);
}

int main2(int* arr, int size ){
    
    int diffr, sec_small_main2, quotient, remainder;
    
    diffr=difference(smallest_func, second_smallest);
    sec_small_main2=second_smallest(arr,size);
    quotient=diffr%5;
    remainder=diffr%5;
    
    if(quotient>0){
        for(int k=0; k<quotient; k++){
            for(int i=0; i<size; i++){
                if(arr[i]!=sec_small_main2)
                    arr[i]=arr[i]+5;
                    count++;
            }
        }
    }
    if(remainder==4){
        for(int i=0; i<2; i++){
            for(int j=0; j<size; j++){
                if(arr[i]!=sec_small_main2)
                    arr[j]=arr[j]+2;
                    count++;
            }
        }
    }
    else if(remainder==3){
        for(int i=0; i<size; i++){
            if(arr[i]!=sec_small_main2)
                arr[i]=arr[i]+2;
                count++;
        }
        for(int i=0; i<size; i++){
            if(arr[i]!=sec_small_main2)
                arr[i]=arr[i]+1;
                count++;
        }
    }
    else if(remainder==2){
        for(int i=0; i<size; i++){
            if(arr[i]!=sec_small_main2)
                arr[i]=arr[i]+2;
                count++;
        }
    }
    else if(remainder==1){
        for(int i=0; i<size; i++){
            if(arr[i]!=sec_small_main2)
                arr[i]=arr[i]+1;
                count++;
        }
    }
    else{
        for(int i=0; i<size; i++){
            if(arr[i]!=sec_small_main2)
                arr[i]=arr[i]+0;
                count++;
        }
    
    }
    
    
    for(int i=0; i< size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i]!=arr[j])
                main2(arr, size);
        }    
        
    }
    return count;
}

int second_smallest(int* arr, int size){
    
    int smallest, sec_smallest, pos;
    smallest =arr[0];
    sec_smallest= arr[1];
    for(int j=1; j<size; j++){
        if(arr[j]<smallest)
        {    
            sec_smallest=smallest;
            smallest=arr[j];
        }
    }
    return sec_smallest;
    }
int smallest_func(int* arr, int size){
    int smallest;
    smallest=arr[0];
    for(int i=1; i<size; i++){
        if(arr[i]<smallest)
            smallest=arr[i];
    }
    return smallest;
    }

int difference(int(*ptr1)(int*, int), int(*ptr2)(int*, int)){
    int x1,x2, diff;
    x1=ptr1(ptr, n);
    x2=ptr2(ptr, n);
    diff=abs(x1-x2);
    printf("\n%d", diff);
    
    }
    