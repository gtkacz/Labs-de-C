#include <stdio.h>

typedef struct {
    int x;
    int y;
} ponto;

void manhattan(ponto p1, ponto p2){
    double dist = abs(p1.x - p2.x) + abs(p1.y - p2.y);
    printf("Distância: %lf\n", dist);
}

int main(){
    ponto p1, p2;

    printf("Digite as coordenadas do primeiro ponto:\n");
    printf("x: ");
    scanf("%d", &p1.x);
    printf("y: ");
    scanf("%d", &p1.y);

    printf("Digite as coordenadas do segundo ponto:\n");
    printf("x: ");
    scanf("%d", &p2.x);
    printf("y: ");
    scanf("%d", &p2.y);

    manhattan(p1, p2);

    return 0;
}