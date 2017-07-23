#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int* solve(int grades_size, int* grades, int *result_size){
    //int* p=(int*)malloc(sizeof(int)*grade_size);
    int k, j;
    for(int grades_i = 0; grades_i < grades_size; grades_i++){
        if(grades[grades_i]>=38){
            k=grades[grades_i]%5;
            j=5-k;
            if(k>=3)
                grades[grades_i]=grades[grades_i]+j;
            else
                grades[grades_i]=grades[grades_i];
        }
        else
            grades[grades_i]=grades[grades_i];
    }
    return grades;
    
    }

int main() {
    int n; 
    scanf("%d", &n);
    int *grades = malloc(sizeof(int) * n);
    for(int grades_i = 0; grades_i < n; grades_i++){
       scanf("%d",&grades[grades_i]);
    }
    int result_size;
    result_size=n;
    int* result = solve(n, grades, &result_size);
    printf("\n");
    for(int result_i = 0; result_i < result_size; result_i++) {
        if(result_i) {
            printf("\n");
        }
        printf("%d", result[result_i]);
    }
    puts("");
    

    return 0;
}
