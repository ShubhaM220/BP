#include<stdio.h>

int a ,b ,c =0;
void Fun_at_Google(void);
main ( )
{
      static int a=1 ;                //   Line1
      printf("\n(main)a=%d", a);
      Fun_at_Google ( );
      printf("\ntest1 a=%d", a);
      a+=2;
      printf("\ntest2 a=%d", a) ;
      Fun_at_Google ( );
      printf ( "\n%d  %d  \n " ,a ,b);
}

void Fun_at_Google(void)
{
      static int a=2;                //   Line 2
      printf("\n(func)a=%d",a);
      int b=1;
      a+=++b;
      printf ( "\n%d  %d  \n " ,a ,b);
}