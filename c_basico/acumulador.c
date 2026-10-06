#include <stdio.h>

int main(void){

    double saldo = 100;

    saldo += 25;
    printf("Suma: %.2f", saldo);

    double porcentaje = saldo * 10;    
    porcentaje /= 100;

    saldo -= porcentaje;

    printf("\nDescuento (10%%): %.2f", saldo);

    saldo -= 8;
    printf("\nResta: %.2f\n", saldo);


    return 0;
}