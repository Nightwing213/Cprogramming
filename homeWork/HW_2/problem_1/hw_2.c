#include <stdio.h>

int main(void){
    double balance = 150.75;
    char choice;
    double amount;

    printf("Current Balance: $%.2f\n", balance);

    printf("Do you want to Add (A) or Spend (S) funds? ");
    scanf(" %c", &choice);
    if (choice == 'A' || choice == 'a'){
        printf("Enter the amount to add: $");
        scanf("%lf", &amount);
        balance += amount;
        printf("Updated Balance: $%.2f\n", balance);
    } else if (choice == 'S' || choice == 's') {
        printf("Enter the amount to spend: $");
        scanf("%lf", &amount);
        if(amount> balance){
            printf(" Insufficient funds! Please reconsider your spending amount.\n");
        } else {
            balance -= amount;
            printf("Updated Balance: $%.2f\n", balance);
        }
    }
    return 0;
}