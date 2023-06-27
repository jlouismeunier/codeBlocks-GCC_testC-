#include <stdio.h>
#include <conio.h>
int main()
{
    int a,b,c;
    printf("somme de 2 nbres\n");

    printf("entrez la valeur de a : ");
    scanf("%d", &a);
    int *p = &a;
    printf("adresse memoire de a = ");
    printf("%d\n",p);

    printf("entrez la valeur de b : ");
    scanf("%d", &b);
    int *q = &b;
    printf("adresse memoire de b = "); printf("%d\n",q);

    c=a+b;
    printf("%d + %d = %d\n",a,b,c);
    int *r = &c;
    printf("adresse memoire de c = "); printf("%d\n",r);
    printf("le contenu de adresse = "); printf("%d\t",r); printf("est : "); printf("%d\n",*r);
    getch();
    return 0;
}
