#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int apple_count=0, orange_count=0;
    //printf("enter the values of S and T: ");
    int s; 
    int t; 
    scanf("%d %d",&s,&t);
    int a; 
    int b; 
    //printf("\nenter the values of a and b: ");
    scanf("%d %d",&a,&b);
    int m; 
    int n; 
    //printf("\nenter the values of m and n: ");
    scanf("%d %d",&m,&n);
    int *apple = malloc(sizeof(int) * m);
    //printf("\nenter the values m: ");
    for(int apple_i = 0; apple_i < m; apple_i++){
       scanf("%d",&apple[apple_i]);
    }
    int *orange = malloc(sizeof(int) * n);
    //printf("enter the n:");
    for(int orange_i = 0; orange_i < n; orange_i++){
       scanf("%d",&orange[orange_i]);
    }
    
    for(int i=0; i<m; i++){
        if(apple[i]>0)
        {   int dis_apple=a+apple[i];
            if(dis_apple<=t && dis_apple>=s)
                apple_count++;
            else
                apple_count=apple_count;      
        }
        else
            apple_count=apple_count;
    }
    for(int j=0; j<n; j++){
        if(orange[j]<0)
        {  
            int dis_orange=b+orange[j];
            if(s<=dis_orange && dis_orange<=t)
                orange_count++;
            else
                orange_count=orange_count;
                
        }
        else
            orange_count=orange_count;
    }
    printf("%d",apple_count);
    printf("\n%d",orange_count);
    return 0;
}
