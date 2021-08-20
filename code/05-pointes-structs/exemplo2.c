#include <stdio.h>

void ret_c(int a, int b, int *parea, int *pper) {
    *parea = a * b;
    *pper = 2*a + 2*b;

    printf("Área: %i\nPerímetro: %i", parea, pper);
}

int main(){
    int n;
    int n2;

    printf("Digite a altura: ");
    scanf("%d", &n);

    printf("Digite a largura: ");
    scanf("%d", &n2);

    ret_c(n, n2, &n, &n2);

    return 0;
}