#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "definitions.h"

void printa_ppm(int x, int y){

    FILE *fp = fopen("terrain.ppm", "w");
    fprintf(fp, "P3\n");
    fprintf(fp, "%d %d\n", y, x);
    fprintf(fp, "255\n");
    fclose(fp);
}

void Draw_montain(int x, int y, ponto *vet)
{

    int j, k;
    FILE *fp = fopen("terrain.ppm", "a");
    for (j = 0; j < y; ++j)
    {

        for (k = 0; k < x; ++k)
        {

            if (j == vet[k].y || j > vet[k].y)
            {
                fprintf(fp, "%d %d %d\n", 255, 0, 127);
            }
            else
            {
                fprintf(fp, "%d %d %d\n", 0, 0, 153);
            }
        }
    }
    fclose(fp);





}