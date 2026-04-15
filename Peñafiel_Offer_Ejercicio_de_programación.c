#include <stdio.h>
int main() {
    int  inicio;
    int fin;
    int incremento;
    printf("Ingrese el número inicial: ");
    scanf("%d", &inicio);
    printf("Ingrese el número final: ");
    scanf("%d", &fin);
    printf("Ingrese el número de incremento: ");
    scanf("%d", &incremento);
    if (incremento >0){
        for(int i=inicio; i<=fin; i+=incremento){
        printf("%d ", i);
        }
    } else if (incremento <0){
        for (int i=inicio; i>=fin;i+=incremento){
        printf("%d ", i);
        }
    } else {
        printf("El incremento no puede ser cero");
    }
    printf("\n");

    return 0;
}
