#include <stdio.h>
#include <stdlib.h>


#include "definitions.h"


void define_vetor(int num, ponto *pixel)
{
    int i = 0;

    for (i = 1; i < num; ++i)
    {
        //nesse laço utilizamos rand para que a partir do ponto inicial, o proximo ponto tenha alguma diferença de no maximo 2 para mais ou no minimo 2 para menos que o ponto anterior
        pixel[i].y = (pixel[i - 1].y + ((rand() % 5)) - 2);

        //Esse if é utilizado para que a montanha não fique maior que a altura maxima, nem menor que o chão.
        if (pixel[i].y >= 500)
        {
            pixel[i].y = (pixel[i].y - (rand() % 10));
        }
        else if (pixel[i].y <= 0)
        {
            pixel[i].y = (pixel[i].y + (rand() % 10));
        }
    }
}
