#include <stdio.h>

int main(int argc, char *argv[]) {
    int n1;
    int n2;

    printf("Digite dois inteiros:\n");
    scanf("%d", &n1);
    scanf("%d", &n2);

    if (n2 == 0) {
        printf("Erro! Numero nao pode ser zero.\n");
    }
    else if (n1 % n2 == 0 || n2 % n1 == 0) {  
        printf("%d é múltiplo de %d\n", n1, n2);
    }
    else {
        printf("Os número não são múltiplos.\n");
    }

    return 0;

}