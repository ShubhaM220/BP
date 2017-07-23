#include<stdio.h>
#include<stdlib.h>

int main() {
    long long int sum=0;
    long long int max, min, g, h;
    int n=5;
    int *arr = malloc(sizeof(long long int) * 5);
    for(int arr_i = 0; arr_i < n; arr_i++){
        scanf("%d",&arr[arr_i]);
    }
    max=arr[0];
    min=arr[4];
    for(int i=0; i<n; i++){
        sum=sum+arr[i];
    
    
    }
    for(int i=0; i<n; i++){
        if(arr[i]>max)
            max=arr[i];
        else 
            max=max;
    
    }
    for(int i=0; i<n; i++){
        if(arr[i]<min)
            min=arr[i];
        else 
            min=min;
    }
    g= sum-max;
    h= sum-min;
    printf("%lld %lld", g, h);
    
    
    return 0;
}