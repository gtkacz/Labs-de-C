// Configurações do mutirão. Não mexer.
#include "../macros_correcoes.h"
#define LABNUM "lab2-"
#define SOLUTIONFILE "tarefa6.c"


#include <stdio.h>

void multiple(int n){
    for(int i = 1; i <= n; i++){
        if (i % 3 == 0 && i % 5 == 0) {
           printf("\nNumero %d: por três e por cinco", i);
       } else if (i % 3 != 0 && i % 5 == 0) {
           printf("\nNumero %d: apenas por cinco", i);       
       } else if (i % 3 == 0 && i % 5 != 0) {
           printf("\nNumero %d: apenas por três", i);
       } else if (i % 3 != 0 && i % 5 != 0) {
           printf("\nNumero %d: nenhum", i);
       }
    }
    printf("\n");
}

int main() {
    // TODO implemente seu programa aqui
    int n2;

    printf("Digite n: ");
    scanf("%d", &n2);
    multiple(n2);

    // Configurações do mutirão. Não mexer.
    #include "../telemetry.c"

    return 0;
}