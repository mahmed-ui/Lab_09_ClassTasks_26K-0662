#include <stdio.h>
#include <string.h>

int main() {
    char email[100];
    char domain[100];

    printf("Enter employee email address: ");

    if (scanf("%99s", email) != 1) {
        printf("Error reading input.\n");
        return 1;
    }


    char *at_symbol = strchr(email, '@');

    if (at_symbol != NULL) {

        strcpy(domain,at_symbol+1);
        printf("Extracted Domain: %s\n", domain);
        
    } else {
        printf("Invalid email address: '@' symbol not found.\n");
    }

    return 0;
}