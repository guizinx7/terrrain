#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include "definitions.h"
#include "function.h"
#include "Mexe_no_arquivo.h"





int main()
{
    int altura = 500;
    int largura = 1000;
    int num = 1000;
    // aqui alocamos o ponteiro usando malloc, e usando n para ele ficar do tamanho certo.
    ponto *pontos = malloc(num * sizeof(ponto));
    // aqui alimentamos a seed com o horário do computador, para sempre que o programa for rodado, gerar valores montanhas diferentes.
    srand(time(NULL));
    // aqui utilizamos esse 60 para que a montanha comece de um valor mediano para ter uma aparência melhor.
    pontos[0].y = 60 + rand() % 300;
    define_vetor(num, pontos);
    printa_ppm(altura, largura);
    Draw_montain(largura, altura, pontos);

    return 0;
}