#include <stdio.h>

int main(void){

    int contador = 0;

    printf("Incremento:\n");
    contador++;
    printf("\n%d", contador );
    contador++;
    printf("\n%d", contador );
    contador++;
    printf("\n%d", contador );
    contador++;
    printf("\n%d", contador );
    contador++;
    printf("\n%d", contador );


    printf("\nDecremento:\n");
    printf("%d", contador );
    contador--;
    printf("\n%d", contador );
    contador--;
    printf("\n%d", contador );
    contador--;
    printf("\n%d", contador );
    contador--;
    printf("\n%d", contador );

    contador += 1;
    contador += 1;
    contador += 1;
    contador += 1;

    printf("\nSumando += : %d", contador);

    return 0;
}