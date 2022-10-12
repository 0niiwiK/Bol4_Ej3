#include <stdio.h>

int main() {
    float kilos,total;
    int contadorinferior=0, contadorentre=0, contadorsuperior=0;
    do {
        printf("Introduce el peso en kilogramos: ");
        fflush(stdin);
        scanf("%f",&kilos);
        fflush(stdin);
        if (kilos<9.8)
            contadorinferior++;
        else if (kilos>=9.8 && kilos<=10.2)
            contadorentre++;
        else
            contadorsuperior++;
    } while (kilos!=0);
    printf("Peso comprendido entre 9.8 y 10.2: %d"
           "\nPiezas con un peso superior a 10.2:  %d"
           "\nPiezas con un peso inferior a 9.8: %d",contadorentre,contadorsuperior,contadorinferior);
    printf("\nTotal de piezas: %d",contadorinferior+contadorsuperior+contadorentre);
    return 0;
}
