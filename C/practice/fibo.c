#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fibo(int i);
int main() {
       int n, x, p;
           /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
       scanf("%d",&n);
       int f=fibo(0);
       printf("%d", f);
       for(p=0; p<n; p++){
       x=fibo(p+1);
       printf("%d", x);
       }
       return 0;
		       }
int fibo(int k){
int m;
    if(k==0)
    {
        //printf("%d", k);
        return 0;}
    else if(k==1)
    {
        //printf("%d", l);
        return 1;}
    else
    {
        m=fibo(k-2)+fibo(k-1);
        return m;
        }
        
										           
											   }

