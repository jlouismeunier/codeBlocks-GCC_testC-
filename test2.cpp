#include <stdio.h>
#include <conio.h>
void BonjourJL(void);
void BonjourJLM(void);
int main()
{
    BonjourJL();
    BonjourJLM();
    BonjourJL();
    BonjourJLM();
    getch();
    return 0;
}
void BonjourJL(void)
{
    printf("Bonjour\n");
    printf("JL Meunier.\n");
    printf("Ceci est un test\n");
    printf(" \n");
}

void BonjourJLM(void)
{
    printf("Bonjour de JLM\n");
    printf("Jean-Louis Meunier.\n");
    printf("Ceci est un autre test\n");
    printf(" \n");
}
