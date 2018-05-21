#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main ()
{
    char nome[10];
    printf("Escreva um nome: ");
    scanf("%c", &nome);
    printf("%s\n\n", nome);
    system("sleep 10");
    return (0);
}
