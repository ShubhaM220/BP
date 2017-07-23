#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int gcd(int , int);
int func_gcd(int* arr_gcd, int size, int(*ptr)(int x, int y));
int func_lcm(int* arr_lcm, int size, int(*ptr)(int x, int y));

void main(){
    int n1,  *arr1; 
    //*arr2; //n2,
    int gcd_cal, lcm_cal;
    
    printf("enter the size of array 1: ");
    scanf("%d",&n1);
    arr1=(int*)malloc(sizeof(int)*n1);
    for(int i=0; i<n1; i++){
        scanf("%d", &arr1[i]);
    }
    
//    printf("\nenter the size of array 2: ");
//    scanf("%d",&n2);
//    arr2=(int*)malloc(sizeof(int)*n2);
//    for(int i=0; i<n2; i++){
//        scanf("%d", &arr2[i]);
//    }
    gcd_cal=func_gcd(arr1, n1, gcd );
    printf("GCD is : %d", gcd_cal);
    lcm_cal=func_lcm(arr1, n1, gcd);
    printf("\nLCM is : %d", lcm_cal);
    
}


int gcd(int x, int y){
	if(y==0)
		return x;
	else gcd(y,x%y);
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
	      lcm_val=(lcm_val * arr_lcm[i])/(gcd(lcm_val, arr_lcm[i]));
    }
    return lcm_val;
    }






















