#include "definitions.h"

void Draw_montain(int x, int y,ponto *vet);
//Essa é a função principal do programa, ela recebe dois inteiros e um ponteiro do registro, também é a que envia 
//para a entrada as cores que serão pintadas usando os valores do vetor feito na função define_vetor.


void printa_ppm(int x, int y);
//Essa é uma função que recebe dois inteiros e é usada apenas para a impressão do painel utilizado
//em imagens PPM do tipo P3. Imprimindo o tipo(P3), a altura(y) e a largura(x) e também o limite pro rgb(255).