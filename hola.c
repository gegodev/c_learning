#include <stdio.h>

// VARIABLE GLOBAL: Visible en todo el archivo. Se inicializa en 0 automaticamente.
int contador_global; 

void funcion_demostracion() {
    // VARIABLE LOCAL ESTÁTICA: Mantiene su valor entre llamadas
    static int llamadas = 0; 
    
    // VARIABLE LOCAL AUTOMÁTICA: Se destruye y recrea en cada llamada
    int control_local = 0; 

    llamadas++;
    control_local++;

    printf("Local estatica (llamadas): %d | Local automatica: %d\n", llamadas, control_local);
}

int main() {
    printf("--- 1. Pruebas de Alcance y static ---\n");
    funcion_demostracion(); // Imprime: llamadas: 1 | automatica: 1
    funcion_demostracion(); // Imprime: llamadas: 2 | automatica: 1
    funcion_demostracion(); // Imprime: llamadas: 3 | automatica: 1

    // printf("%d", control_local); // ERROR: control_local no existe aqui (alcance local)

    printf("\n--- 2. Alcance de Bloque ---\n");
    int x = 10;
    if (x > 5) {
        int variable_bloque = 99; // Solo existe dentro de este 'if'
        printf("Dentro del bloque if: %d\n", variable_bloque);
    }
    // printf("%d", variable_bloque); // ERROR: variable_bloque ya no existe fuera del 'if'

    printf("\n--- 3. Variables sin inicializar (Riesgo) ---\n");
    int variable_basura; // Variable local SIN inicializar
    
    printf("Global automatica (segura): %d\n", contador_global);
    // ADVERTENCIA: Lo siguiente imprimira un numero aleatorio ("basura")
    // Tu terminal con -Wall te lanzara un warning por hacer esto:
    printf("Local sin inicializar (BASURA): %d\n", variable_basura); 

    return 0;
}