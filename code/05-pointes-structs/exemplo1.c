#include <stdio.h>

void sum_sub(int a, int b, int *psum, int *psub) {
    *psum = a + b;
    *psub = a - b;

    printf("a + b: %i\na - b: %i", psum, psub);
}

int main(){
    int n;
    int n2;

    printf("Digite a: ");
    scanf("%d", &n);

    printf("Digite b: ");
    scanf("%d", &n2);

    sum_sub(n, n2, &n, &n2);

    return 0;
}