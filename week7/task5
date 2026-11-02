#include <stdio.h>
#include<string.h>

int main() {
    char supplier[100]; 
    char town[50]; 
    char description[200]="";
    
    

    printf("Enter supplier name :");
    fgets(supplier,sizeof(supplier),stdin);
     supplier[strcspn(supplier,"\n")] = '\0';
    
    printf("Enter  town :");
    fgets(town,sizeof(town),stdin);
    town[strcspn(town,"\n")] = '\0';

    strcat(description,supplier);
     strcat(description," operates in ");
     strcat(description,town);
     strcat(description, ".");


    printf("\nSupplier Description:\n");
    printf("%s\n",description);

   return 0;
}