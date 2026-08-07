#include <stdio.h>

int main() {

    char municipal[20];
    char mayor[20];
    int population;

    printf("Welcome to windhoek Municipality");

    printf("Enter municipal name : ");
    scanf("%19s", municipal);

    printf("Enter the mayors name : ");
    scanf("%19s", mayor);

    printf("Enter the population: ");
    scanf("%d", &population);

    printf("Municipal:%19s",municipal );
    printf(" Mayor :%19s", mayor);
    printf("population :%19s", population);

    return 0;
}