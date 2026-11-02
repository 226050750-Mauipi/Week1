#include <stdio.h>

int main() {
    float budgets[10];
    float total = 0;
    float average;
    float temp;
    int i;
    int j;

    
    for(i = 0; i < 10; i++) {
        printf("Enter budget for department %d: ", i + 1);
        scanf("%f", &budgets[i]);

        total = total + budgets[i];
    }

    printf("Department budgets:\n");

    for(i = 0; i < 10; i++) {
        printf("%.2f\n", budgets[i]);
    }

    
    average = total / 10;

    printf("Total budget: %.2f\n", total);
    printf("Average budget: %.2f\n", average);

    for(i = 0; i < 10; i++) {
        for(j = i + 1; j < 10; j++) {

            if(budgets[i] > budgets[j]) {
                temp = budgets[i];
                budgets[i] = budgets[j];
                budgets[j] = temp;
            }
        }
    }

    
    printf("Budgets from lowest to highest:\n");

    for(i = 0; i < 10; i++) {
        printf("%.2f\n", budgets[i]);
    }

    return 0;
}