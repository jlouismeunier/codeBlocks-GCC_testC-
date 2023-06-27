#include<stdio.h>
#include<iostream>
int main(){
   int i;
   float a=5.25;
   char *ptr, p;
   std::cout << a << std::endl;
   ptr=(char *)&a;
   printf("%f ",a);
   for(i=0;i<=3;i++){
      printf("%d ",*ptr++);
      printf("%x ",*ptr++);}
   p=a;
   printf("%d ",p);
    char array[64];
    int myInteger = 4711;
    sprintf( array, "%d ", myInteger );
    printf( "%s\n ", array );
}
