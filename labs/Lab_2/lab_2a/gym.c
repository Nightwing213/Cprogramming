#include <stdio.h>
int main(void){
    int months = 0;
    int sessions = 0;
    double discount_precent;
    int membership_cost;
    int training_cost;
    double subtotal;
    double discount_amount;
    double final_total;

    printf("Enter number of months: ");
    scanf("%d",&months);

    printf("Enter number of training sessions: ");
    scanf("%d",&sessions);

    printf("Enter discount percentage: ");
    scanf("%lf",&discount_precent);

    if (months > 12){
        printf("Long-term member discount applied!\n");
    }
    if (sessions > 20){
        printf("You are training hard this year! \n");
    }

    membership_cost = months * 25;
    training_cost = sessions * 10;
    subtotal = training_cost + membership_cost;
    discount_amount = subtotal * (discount_precent / 100.0);
    final_total = subtotal - discount_amount;

    if (final_total > 500.0){
        printf("Premium membership package selected.\n");
    } 
        else {
        printf ("Standard membership package selected.\n");
    }

    printf("Membership cost: $%d\n", membership_cost);
    printf("Training cost: $%d\n", training_cost);
    printf("Subtotal: $%.0f\n", subtotal);
    printf("Discount amount: $%.2f\n", discount_amount);
    printf("Final total: $%.2f\n", final_total);
    
    return 0;
}