#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

struct Campos{
    int campo1, campo2;
};

void trocar(struct Campos *c)
{
    int aux = c->campo1;
    c->campo1 = c->campo2;
    c->campo2 = aux;
}

int main ()
{
    struct Campos c;
    printf("Campo 1: ");
    scanf("%d", &c.campo1);
    printf("Campo 2: ");
    scanf("%d", &c.campo2);
    trocar(&c);
    printf("\nCampo 1: %d\n", c.campo1);
    printf("\nCampo 2: %d\n", c.campo2);

    system ("sleep 10");
    return (0);
}
