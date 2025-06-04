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
printf ("Para qual direção deseja mover o bisbo?\n 1. Cima/Direita\n 2. Cima/Esquerda\n");
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
printf ("Para qual direção deseja mover o bisbo?\n 1. Cima\n 2. Esquerda\n 3. Direita\n 4. Baixo\n 5. Cima/Esquerda\n 6. Cima/Direita\n");
scanf ("%d", &direcaorainha);

switch (direcaorainha)
{
case 1:
   printf ("Insira quantas casas deseja avançar com a rainha. \n");
scanf ("%d", &rainha);
        for (int avancorainha = 1; avancorainha <= rainha; avancorainha++) {
            printf ("%d Cima\n", avancorainha);
        }
    break;
case 2:
      printf ("Insira quantas casas deseja avançar com a rainha. \n");
scanf ("%d", &rainha);
        for (int avancorainha = 1; avancorainha <= rainha; avancorainha++) {
            printf ("%d Esquerda\n", avancorainha);
        }
    break;
case 3:
       printf ("Insira quantas casas deseja avançar com a rainha. \n");
scanf ("%d", &rainha);
        for (int avancorainha = 1; avancorainha <= rainha; avancorainha++) {
            printf ("%d Direita\n", avancorainha);
        }
    break;
case 4:
       printf ("Insira quantas casas deseja avançar com a rainha. \n");
scanf ("%d", &rainha);
        for (int avancorainha = 1; avancorainha <= rainha; avancorainha++) {
            printf ("%d Baixo\n", avancorainha);
        }
    break;
case 5:
       printf ("Insira quantas casas deseja avançar com a rainha. \n");
scanf ("%d", &rainha);
        for (int avancorainha = 1; avancorainha <= rainha; avancorainha++) {
            printf ("%d Cima/Esquerda\n", avancorainha);
        }
    break;
case 6:
      printf ("Insira quantas casas deseja avançar com a rainha. \n");
scanf ("%d", &rainha);
        for (int avancorainha = 1; avancorainha <= rainha; avancorainha++) {
            printf ("%d Cima/Direita\n", avancorainha);
        }
    break;

default:
    break;
}











    return 0;
}