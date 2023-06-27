#include <stdio.h>
#include <conio.h>
int main()
{
    float a,b,c;
    int p;
    printf("somme de 2 nbres de type 'float'\n");

    printf("entrez la valeur de a : ");
    scanf("%f", &a);
    printf("adresse de a = "); printf("%d\n", &a);
    p = sizeof(a); printf("la taille de la donnee 'a' est : "); printf("%d\n", p);

    printf("entrez la valeur de b : ");
    scanf("%f", &b);
    printf("adresse de b = "); printf("%d\n", &b);

    c=a+b;
    printf("%f + %f = %f\n",a,b,c);
    printf("adresse de c = "); printf("%d\n", &c);
    p = sizeof(c); printf("la taille de la donnee 'c' est : "); printf("%d\n", p);
    getch();
    return 0;
}
