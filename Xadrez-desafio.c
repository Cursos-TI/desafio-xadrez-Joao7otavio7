#include <stdio.h>
// Recursividade para chamar o movimento da torre.
void movimentoTorre () {
    int torre, direcaotorre, avancotorre = 1; //Variaveis para chamar ações na torre

    printf ("Para qual direção deseja mover a torre?\n 1. Vertical\n 2. horizontal\n");
scanf ("%d", &direcaotorre);

switch (direcaotorre) // Menu para selecionar as direções da torre
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


}
// Recursividade para chamar o movimento da Bispo.
void movimentoBispo () {
    int bispo, direcaobispo; //Variaveis para chamar ações na Bispo

printf ("\n");
printf ("Para qual direção deseja mover o bisbo?\n 1. Cima/Direita\n 2. Cima/Esquerda\n");
scanf ("%d", &direcaobispo);

switch (direcaobispo) // Menu para selecionar as direções da bispo
{
case 1:
printf ("Insira quantas casas deseja avançar com a bispo. \n");
scanf ("%d", &bispo);
for (int avancobispo1 = 1; avancobispo1 <= bispo; avancobispo1++) {

   for (int avancobispo2 = 0; avancobispo2 < 1; avancobispo2++) {
    printf ("Cima\t");
   }
    printf ("Direita\n");
}
   
    break;
case 2:
printf ("Insira quantas casas deseja avançar com a bispo. \n");
scanf ("%d", &bispo);

for (int avancobispo1 = 1; avancobispo1 <= bispo; avancobispo1++) {

   for (int avancobispo2 = 0; avancobispo2 < 1; avancobispo2++) {
    printf ("Cima\t");
   }
    printf ("Esquerda\n");
}
break;

default:
    break;
}

}
// Recursividade para chamar o movimento da Rainha.
void movimentoRainha () {
    int rainha, direcaorainha; //Variaveis para chamar ações na Rainha
    printf ("\n");
printf ("Para qual direção deseja mover a rainha?\n 1. Cima\n 2. Esquerda\n 3. Direita\n 4. Baixo\n 5. Cima/Esquerda\n 6. Cima/Direita\n");
scanf ("%d", &direcaorainha);

switch (direcaorainha) // Menu para selecionar as direções da rainha
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

}

int main() {


int direcaocavalo, cavalo = 1; //Variaveis para chamar ações no cavalo

// Apresentação

 printf("===================================\n");
    printf("         JOGO DE XADREZ            \n");
    printf("===================================\n");

// Recursividade Torre
movimentoTorre();
// Recursividade Bispo
movimentoBispo();
// Recursividade Rainha
movimentoRainha ();

printf ("Para qual direção deseja mover o cavalo?\n 1. Cima/Direta\n 2. Cima/Esquerda\n");
scanf ("%d", &direcaocavalo);

switch (direcaocavalo) // Menu para escolher a direção do cavalo.
{
case 1:
    while (cavalo--)
    {
        for (int i = 0; i < 2; i++) {
            printf ("Cima\n");
    }
        printf ("Direta\n");

    }

    
    break;
case 2:
while (cavalo--)
    {
        for (int i = 0; i < 2; i++) {
            printf ("Cima\n");
    }
        printf ("Esquerda\n");

    }
break;
default:
    break;
}









    return 0;
}