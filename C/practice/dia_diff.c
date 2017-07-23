#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n, i, k=0, l=0, m=0; 
    scanf("%d",&n);
    int a[n][n];
    for(int a_i = 0; a_i < n; a_i++){
       for(int a_j = 0; a_j < n; a_j++){
          
          scanf("%d",&a[a_i][a_j]);
       }
    }
    for(i=0; i<n; i++){
        k=k+a[i][i];
        l=l+a[i][n-1-i];
    }
    m=abs(k-l);
    printf("%d",m);
    return 0;
}