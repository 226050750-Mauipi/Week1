#include <stdio.h>

int main() {
    char municipal[20];
    char mayor[20];
    int population;

    printf("Welcome to Windhoek Municipality\n\n");

    printf("Enter municipal name : ");
    scanf("%19s", municipal);

    printf("Enter the mayor's name : ");
    scanf("%19s", mayor);

    printf("Enter the population: ");
    scanf("%d", &population);

    printf("\n");
    printf("Municipal  : %19s\n", municipal);
    printf("Mayor      : %19s\n", mayor);
    printf("Population : %19d\n", population);

    return 0;
}