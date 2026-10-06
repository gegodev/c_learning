#include <stdio.h>

int main(void){

    int cantidad = 3600;

    // El resto de la cantidad son los segundos por que los minutos son 60 segundos.
    int segundos = cantidad % 60;

    int minutosTotales = cantidad / 60;

    int horas = minutosTotales / 60;

    int minutos = minutosTotales % 60;

    printf(  "%d h, %d m, %d s.\n", horas, minutos, segundos); 

    return 0;
}