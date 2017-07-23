#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

//int getTotalX(int a_size, int* a, int b_size, int* b){
    // Complete this function
//}

//int main() {
   // int n; 
   // int m; 
   // scanf("%d %d", &n, &m);
   // int *a = malloc(sizeof(int) * n);
    //for(int a_i = 0; a_i < n; a_i++){
     //  scanf("%d",&a[a_i]);
   // }
    //int *b = malloc(sizeof(int) * m);
    //for(int b_i = 0; b_i < m; b_i++){
  //     scanf("%d",&b[b_i]);
   
//}

int gcd(int , int);
int func_gcd(int* arr_gcd, int size, int(*ptr)(int x, int y));
int func_lcm(int* arr_lcm, int size, int(*ptr)(int x, int y));

int main(){
    int n, m;//*a; 
    //*arr2; //n2,
    int gcd_cal, ans=0;
    int lcm_cal;
    //printf("enter the size of array 1: ");
    scanf("%d %d",&n, &m);
    int* arr1=(int*)malloc(sizeof(int)*n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr1[i]);
    }
    
//    printf("\nenter the size of array 2: ");
//    scanf("%d",&n2);
      int* arr2=(int*)malloc(sizeof(int)*m);
      for(int i=0; i<m; i++){
          scanf("%d", &arr2[i]);
      }
    gcd_cal=func_gcd(arr2, m, gcd );
    printf("GCD is : %d", gcd_cal);
    lcm_cal=func_lcm(arr1, n, gcd);
    printf("\nLCM is : %d", lcm_cal);
    //ans=gcd_cal/lcm_cal;
    //ans=(ans/2)+1;
    for(int i=lcm_cal; i<=gcd_cal; i++){
        if((i%lcm_cal)==0 && (gcd_cal%i)==0)
            ans++;
        else
            ans=ans;
    }
    printf("%d", ans);
}


int gcd(int x, int y){
	if(y==0)
		return x;
	else 
    gcd(y,x%y);
//    while(x!=y){
//        if(x>y)
//            x=x-y;
//        else
//            y=y-x;
//        }
//        return x;
}	

int func_gcd(int* arr_gcd, int size, int(*ptr)(int x, int y)){
    
    int gcd_val=arr_gcd[0];
    for(int i=1; i<size; i++){
	      gcd_val=gcd(gcd_val, arr_gcd[i]);
    }
    return gcd_val;
    }

int func_lcm(int* arr_lcm, int size, int(*ptr)(int x, int y)){

    int lcm_val=arr_lcm[0];
    for(int i=1; i<size; i++){
	      lcm_val=(lcm_val * arr_lcm[i])/gcd(lcm_val, arr_lcm[i]);
    }
    return lcm_val;
    }























