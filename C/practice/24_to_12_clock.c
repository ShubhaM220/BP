//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//void main(){
//int n;
//printf("enter the string: ");
//char *s;
//s=(char*)malloc(sizeof(char)*20);
//scanf(" %s", s);
//
//printf("\n%s", s);
//n=strlen(s);
//*(s+n-2)='P';
//printf("\n%s", s);
//*(s+0)=1+*(s+0);
//printf("\n%s", s);
//}

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

char* timeConversion(int n, char* s) {
    // Complete this function
    if(*(s+n-2)=='A'){
        
        if(*(s+0)=='1' && *(s+1)=='2')
        {
            *(s+0)='0';
            *(s+1)='0';
            *(s+n-2)='\0';
            return s;
        }
        else
            {
            *(s+n-2)='\0';
            return s;
        } 
    }
    else if((*(s+n-2)=='P') && (*(s+0)=='1') && (*(s+1)=='2')){
        *(s+n-2)='\0';
          return s;
    }
    else{
        *(s+n-2)='\0';
        *(s+0)=1+*(s+0);
        *(s+1)=2+*(s+1);
        return s;
    }
     
}

int main() {
    int n;
    printf("enter the string: ");
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s);
        int result_size;
    n=strlen(s);
    char* result = timeConversion(n,s);
    printf("%s\n", result);
    return 0;
}
