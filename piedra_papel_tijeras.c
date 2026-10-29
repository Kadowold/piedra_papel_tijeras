#include <stdio.h>
#include <stdlib.h> // nos da rand() y srand(), que sirven para generar numeros aleatorios.
#include <time.h>   // nos da time(), que lee la hora actual. La usamos para que el azar cambie en cada partida.

const char *nOpcion(int opcion) {
    if (opcion == 1) {
        return "Piedra";
    } else if (opcion == 2) {
        return "Papel";
    } else {
        return "Tijeras";
    }
}

int main() {
    srand(time(0));
    char otraVez;

    do {
        int j;

        printf("\n=== PIEDRA, PAPEL O TIJERAS ===\n");
        printf("1. Piedra\n");
        printf("2. Papel\n");
        printf("3. Tijeras\n");
        printf("Elige tu opcion: ");
        scanf("%d", &j);

        if (j < 1 || j > 3) {
            printf("Eso no es valido. Intenta de nuevo.\n");
        } else {
            int computadora = rand() % 3 + 1;
            printf("Tu elegiste: %s\n", nOpcion(j));
            printf("La PC eligio: %s\n", nOpcion(computadora));

            if (j == computadora) {
                printf("Resultado: Empate!\n"); // si eligieron lo mismo, es empate
            } else if ((j == 1 && computadora == 3) ||
                       (j == 2 && computadora == 1) ||
                       (j == 3 && computadora == 2)) {
                printf("Resultado: Ganaste!\n");
                       } else {
                           printf("Resultado: Perdiste.\n");
                       }
        }

        printf("Jugar otra vez? (s/n): ");
        scanf(" %c", &otraVez); // El espacio antes de %c limpia el buffer de entrada

    } while (otraVez == 's' || otraVez == 'S');

    printf("Gracias por jugar el proyecto de logica de programacion. Hasta luego!\n");
    return 0;
}