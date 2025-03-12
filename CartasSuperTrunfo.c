#include <stdio.h>


int main() {

    int popu;
    int turis;
    char nome[30];
    char esta[30];
    char cida[30];
    float pib, area;
    
    printf("Nome de um país:");
    scanf("%[^\n]s", nome);

    printf("Nome de um estado desse país:\n");
    scanf("%[^\n]s", esta);

    printf("Nome de uma cidade desse estado:\n");
    scanf("%[^\n]s", cida);

    printf("Coloque a população dessa cidade:\n");
    scanf("%d", popu);

    printf("O número de pontos turísticos:\n");
    scanf("%d", turis);

    printf("A área dessa cidade:\n");
    scanf("%f", area);

    printf("O PIB desse estado:\n");
    scanf("%f", pib);

    printf("País: %s\n", nome);
    printf("Estado: %s\n", esta);
    printf("Cidade: %s\n", cida);

    printf("População: %d\n", popu);
    printf("Pontos turísticos: %d\n", turis);

    printf("Área da cidade: %f\n", area);
    printf("PIB da cidade: %f\n", pib);





    return 0;
}
