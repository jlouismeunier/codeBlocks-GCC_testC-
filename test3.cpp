#include <stdio.h>
#include <conio.h>
int f(int);
int main()
{
    int x=1;
    printf("test de la fonction : f(x)=x*x-3\n");
    for(x=0;x<=40;x++)
    printf("f(%d)=%d\n",x,f(x));
    getch();
    return 0;
}
int f(int x)
{
    return x*x-3;
}
