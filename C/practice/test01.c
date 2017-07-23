#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int* solve(int a0, int a1, int a2, int b0, int b1, int b2, int *result_size){
    // Complete this function
    int s, k, l, m;
    s=*result_size;
    int* p = (int*)calloc(s,sizeof(int));
    int* q = (int*)calloc(s,sizeof(int));
    int* r = (int*)calloc(s,sizeof(int));
    q[0]=a0;
    q[1]=a1;
    q[2]=a2;
    r[0]=b0;
    r[1]=b1;
    r[2]=b2;
    
    for(k=0; k<=s; k++){
        if(q[k]>r[k])
            p[0]++;
        else
            p[1]++;
    }
    return p;
}
    

int main() {
    int a0; 
    int a1; 
    int a2; 
    scanf("%d %d %d", &a0, &a1, &a2);
    int b0; 
    int b1; 
    int b2; 
    scanf("%d %d %d", &b0, &b1, &b2);
    int result_size=2;
    int* result = solve(a0, a1, a2, b0, b1, b2, &result_size);
    for(int result_i = 0; result_i < result_size; result_i++) {
        if(result_i) {
            printf(" ");
        }
        printf("%d", result[result_i]);
    }
    puts("");
    

    return 0;
}

