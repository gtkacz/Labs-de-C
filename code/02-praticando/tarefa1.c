// Configurações do mutirão. Não mexer.
#include "../macros_correcoes.h"
#define LABNUM "lab2-"
#define SOLUTIONFILE "tarefa1.c"


#include <stdio.h>

int main() {
    int s;
    int i;

    s = 0;
    i = 1;
    while(i <= 10) {
        s += i;
        i++;
    }

    printf("Resultado: %i\n", s);

    // TODO: corrija o código acima e use printf para
    // mostrar a soma de 1 a 10


    // Configurações do mutirão. Não mexer.
    #include "../telemetry.c"

    return 0;
}