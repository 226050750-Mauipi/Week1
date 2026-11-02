#include <stdio.h>
#include <string.h>

int main() {
    
    float salaries[50];
    float budgets[10];
    char registrations[20][20];

    int salariesCaptured = 0;
    int budgetsCaptured = 0;
    int regsCaptured = 0;

    int mainChoice, subChoice;

    do {
        printf("\n=== MUNICIPAL INFORMATION MANAGEMENT SYSTEM ===\n");
        printf("1. Employee Salaries\n");
        printf("2. Department Budgets\n");
        printf("3. Vehicle Registration Numbers\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &mainChoice);

        switch (mainChoice) {

        // EMPLOYEE SALARIES  //
        case 1:
            do {
                printf("\n--- Employee Salaries ---\n");
                printf("1. Capture 50 salaries\n");
                printf("2. Display all salaries\n");
                printf("3. Calculate average\n");
                printf("4. Find highest salary\n");
                printf("5. Find lowest salary\n");
                printf("6. Search for a salary\n");
                printf("7. Back to main menu\n");
                printf("Choose an option: ");
                scanf("%d", &subChoice);

                if (subChoice >= 2 && subChoice <= 6 && !salariesCaptured) {
                    printf("Please capture the salaries first (option 1).\n");
                    continue;
                }

                if (subChoice == 1) {
                    for (int i = 0; i < 50; i++) {
                        printf("Enter salary %d: ", i + 1);
                        scanf("%f", &salaries[i]);
                    }
                    salariesCaptured = 1;
                }
                else if (subChoice == 2) {
                    printf("\nEmployee Salaries\n");
                    for (int i = 0; i < 50; i++) {
                        printf("%d. %.2f\n", i + 1, salaries[i]);
                    }
                }
                else if (subChoice == 3) {
                    float total = 0;
                    for (int i = 0; i < 50; i++) {
                        total = total + salaries[i];
                    }
                    printf("Average salary: %.2f\n", total / 50);
                }
                else if (subChoice == 4) {
                    float highest = salaries[0];
                    for (int i = 1; i < 50; i++) {
                        if (salaries[i] > highest) {
                            highest = salaries[i];
                        }
                    }
                    printf("Highest salary: %.2f\n", highest);
                }
                else if (subChoice == 5) {
                    float lowest = salaries[0];
                    for (int i = 1; i < 50; i++) {
                        if (salaries[i] < lowest) {
                            lowest = salaries[i];
                        }
                    }
                    printf("Lowest salary: %.2f\n", lowest);
                }
                else if (subChoice == 6) {
                    float search;
                    int found = 0;
                    printf("Enter salary to search for: ");
                    scanf("%f", &search);
                    for (int i = 0; i < 50; i++) {
                        if (salaries[i] == search) {
                            printf("Salary found at position %d\n", i);
                            found = 1;
                            break;
                        }
                    }
                    if (!found) {
                        printf("Salary not found.\n");
                    }
                }
                else if (subChoice != 7) {
                    printf("Invalid option.\n");
                }
            } while (subChoice != 7);
            break;

        // DEPARTMENT BUDGETS //
        case 2:
            do {
                printf("\n--- Department Budgets ---\n");
                printf("1. Capture 10 department budgets\n");
                printf("2. Display the budgets\n");
                printf("3. Calculate total budget\n");
                printf("4. Calculate average budget\n");
                printf("5. Sort budgets (lowest to highest)\n");
                printf("6. Back to main menu\n");
                printf("Choose an option: ");
                scanf("%d", &subChoice);

                if (subChoice >= 2 && subChoice <= 5 && !budgetsCaptured) {
                    printf("Please capture the budgets first (option 1).\n");
                    continue;
                }

                if (subChoice == 1) {
                    for (int i = 0; i < 10; i++) {
                        printf("Enter budget for department %d: ", i + 1);
                        scanf("%f", &budgets[i]);
                    }
                    budgetsCaptured = 1;
                }
                else if (subChoice == 2) {
                    printf("\nDepartment Budgets\n");
                    for (int i = 0; i < 10; i++) {
                        printf("%d. %.2f\n", i + 1, budgets[i]);
                    }
                }
                else if (subChoice == 3) {
                    float total = 0;
                    for (int i = 0; i < 10; i++) {
                        total = total + budgets[i];
                    }
                    printf("Total budget: %.2f\n", total);
                }
                else if (subChoice == 4) {
                    float total = 0;
                    for (int i = 0; i < 10; i++) {
                        total = total + budgets[i];
                    }
                    printf("Average budget: %.2f\n", total / 10);
                }
                else if (subChoice == 5) {
                    float temp;
                    for (int i = 0; i < 10 - 1; i++) {
                        for (int j = 0; j < 10 - i - 1; j++) {
                            if (budgets[j] > budgets[j + 1]) {
                                temp = budgets[j];
                                budgets[j] = budgets[j + 1];
                                budgets[j + 1] = temp;
                            }
                        }
                    }
                    printf("\nBudgets sorted from lowest to highest:\n");
                    for (int i = 0; i < 10; i++) {
                        printf("%.2f\n", budgets[i]);
                    }
                }
                else if (subChoice != 6) {
                    printf("Invalid option.\n");
                }
            } while (subChoice != 6);
            break;

        // VEHICLE REGISTRATION NUMBERS //
        case 3:
            do {
                printf("\n--- Vehicle Registration Numbers ---\n");
                printf("1. Capture 20 registration numbers\n");
                printf("2. Display all registration numbers\n");
                printf("3. Search for a registration number\n");
                printf("4. Back to main menu\n");
                printf("Choose an option: ");
                scanf("%d", &subChoice);

                if (subChoice >= 2 && subChoice <= 3 && !regsCaptured) {
                    printf("Please capture the registrations first (option 1).\n");
                    continue;
                }

                if (subChoice == 1) {
                    for (int i = 0; i < 20; i++) {
                        printf("Enter vehicle registration %d: ", i + 1);
                        scanf("%19s", registrations[i]);
                    }
                    regsCaptured = 1;
                }
                else if (subChoice == 2) {
                    printf("\nVehicle Registrations\n");
                    for (int i = 0; i < 20; i++) {
                        printf("%d. %s\n", i + 1, registrations[i]);
                    }
                }
                else if (subChoice == 3) {
                    char search[20];
                    int found = 0;
                    printf("Enter registration number to search for: ");
                    scanf("%19s", search);
                    for (int i = 0; i < 20; i++) {
                        if (strcmp(registrations[i], search) == 0) {
                            printf("Registration found at position %d\n", i);
                            found = 1;
                            break;
                        }
                    }
                    if (!found) {
                        printf("Registration not found.\n");
                    }
                }
                else if (subChoice != 4) {
                    printf("Invalid option.\n");
                }
            } while (subChoice != 4);
            break;

        case 4:
            printf("Goodbye.\n");
            break;

        default:
            printf("Invalid option.\n");
        }
    } while (mainChoice != 4);

    return 0;
}