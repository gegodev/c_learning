#include <stdio.h>

int main(void){

    int edad = 19;
    printf("Eres %s\n", (edad >=18 ? "mayor." : "menor"));

    // EL %s espera un texto

    int volumen = 101;
    volumen = (volumen > 100) ? 100: volumen;
    printf("%d.\n", volumen);

    int n = 4;
    int signo = (n > 0) ? 1: (n < 0) ? -1 : 0;
    printf("%d.\n", signo);

    double k = 13;
    double r = (k != 0) ? 10 / k : -1;
    printf("%.2f\n", r);

    printf("Practica A:\n");

    int a = 7;
    int r1 = (a > 5) ? 10 : 20;     // a es mayor a 5 entonces es 10.
    int r2 = (a % 2 == 0) ? 1 : 0;  // el resto de la division de 7 / 2 es 1 asi que es 0.
    int r3 = (a > 5) ? (a < 10 ? 100 : 200) : 300;   // a es mayor a 5 porque es 7, y es menor a 10 por lo que es true entonces es 100.
    printf("%d %d %d\n", r1, r2, r3);  // 10, 0, 100

    printf("Practica B:\n");

    // 1. EL mayor de dos numeros.

    int m = 0;
    int x = 0;
    int comparador = (m < 0 || x < 0) ? -1 : (m != x) ? ((m > x) ? m : x) : 0;

    printf((comparador == -1 ) ? "No se aceptan numeros negativos.\n" : (comparador == 0) ? "Los numeros son iguales.\n" : "Numero mayor: %d\n", comparador);


    return 0;
}