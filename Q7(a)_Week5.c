#include <stdio.h>
struct student {
    char firstName[50];
    int account;
    float balance;
} s[11];

int main() {
    int i;
    printf("Enter information of customer:\n");

    // storing information
    for (i = 0; i < 5; ++i) {
        s[i].account = i + 1;
        printf("\nFor account%d,\n", s[i].account);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter balance: ");
        scanf("%f", &s[i].balance);
    }
    printf("Displaying Information:\n\n");

    // displaying information
    for (i = 0; i < 5; ++i) {
        printf("\nAccount number: %d\n", i + 1);
        printf("First name: ");
        puts(s[i].firstName);
        printf("Balance: %.1f", s[i].balance);
        printf("\n");
    }
    return 0;
}
