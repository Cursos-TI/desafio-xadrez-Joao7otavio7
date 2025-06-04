#include <stdio.h>

int main() {

int torre, bispo, rainha, direcaotorre, direcaobisbo, direcaorainha;
int avancotorre = 1;
int avancobisbo = 1;

printf ("Para qual direção deseja mover a torre?\n 1. Vertical\n 2. horizontal\n");
scanf ("%d", &direcaotorre);

switch (direcaotorre)
{
case 1:
    printf ("Insira quantas casas deseja avançar com a torre. \n");
scanf ("%d", &torre);

while (avancotorre <= torre) {

    printf ("%d vertical\t", avancotorre);
    avancotorre++;
}
    break;
case 2:
printf ("Insira quantas casas deseja avançar com a torre. \n");
scanf ("%d", &torre);

while (avancotorre <= torre) {

    printf ("%d horizontal\n", avancotorre);
    avancotorre++;
}
break;

default:
    break;
}

printf ("\n");
printf ("Para qual direção deseja mover o bisbo?\n 1. Cima/Direita\n 2. Cima/esquerda\n");
scanf ("%d", &direcaobisbo);

switch (direcaobisbo)
{
case 1:
    printf ("Insira quantas casas deseja avançar com o bisbo. \n");
scanf ("%d", &bispo);

do {
    printf ("%d Cima/Diretia\n", avancobisbo);
    avancobisbo++;    
} while (avancobisbo <= bispo);
    break;
case 2:
printf ("Insira quantas casas deseja avançar com a bispo. \n");
scanf ("%d", &bispo);

do {
     printf ("%d Cima/Esguerda\n", avancobisbo);
    avancobisbo++;
} while (avancobisbo <= bispo);
break;

default:
    break;
}

printf ("\n");
printf ("Para qual direção deseja mover o bisbo?\n 1. Cima/Direita\n 2. Cima/esquerda\n");
scanf ("%d", &direcaorainha);

switch (direcaorainha)
{
case 1:
    /* code */
    break;

default:
    break;
}











    return 0;
}