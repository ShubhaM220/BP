#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int factorial(int);
int main() {
    int d;
    scanf("%d", &d);
    
    int ans=factorial(d);
    printf("%d", ans);
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

int factorial(int a){
    static int fact=1;
    while(a){
    fact = fact*a;
    a--;
    }
    return fact;
    }