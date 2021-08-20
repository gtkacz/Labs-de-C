#include <stdio.h>

void tabuada(int n){
    int na;
    for (int i = 2; i <= n; i++){
        for (int j = 1; j <= n; j++){
            na = i*j;
            printf("%i ", na);
        }
        printf("\n");
    }
}

int main() {
    int n2;

    printf("Digite n: ");
    scanf("%d", &n2);
    tabuada(n2);

    return 0;
}