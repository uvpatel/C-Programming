#include <stdio.h>

int main() {
    int choice, qty;
    int total = 0;

    // Item-wise quantity and total
    int pizza_qty = 0, burger_qty = 0, pasta_qty = 0, sandwich_qty = 0, coffee_qty = 0;

    printf("======= Welcome to Our Restaurant =======\n");
    printf("Menu:\n");
    printf("1. Pizza     - ₹250\n");
    printf("2. Burger    - ₹120\n");
    printf("3. Pasta     - ₹180\n");
    printf("4. Sandwich  - ₹90\n");
    printf("5. Coffee    - ₹70\n");

    while (1) {
        printf("\nEnter item number to order (0 to finish): ");
        scanf("%d", &choice);

        if (choice == 0) {
            break;
        }

        printf("Enter quantity: ");
        scanf("%d", &qty);

        if (choice == 1) {
            pizza_qty += qty;
            total += qty * 250;
        } else if (choice == 2) {
            burger_qty += qty;
            total += qty * 120;
        } else if (choice == 3) {
            pasta_qty += qty;
            total += qty * 180;
        } else if (choice == 4) {
            sandwich_qty += qty;
            total += qty * 90;
        } else if (choice == 5) {
            coffee_qty += qty;
            total += qty * 70;
        } else {
            printf("Invalid item number!\n");
        }
    }

    // Print Bill
    printf("\n======= Bill Summary =======\n");
    printf("%-20s %-10s %-10s\n", "Item", "Qty", "Total");

    if (pizza_qty > 0)
        printf("%-20s %-10d ₹%-10d\n", "Pizza", pizza_qty, pizza_qty * 250);
    if (burger_qty > 0)
        printf("%-20s %-10d ₹%-10d\n", "Burger", burger_qty, burger_qty * 120);
    if (pasta_qty > 0)
        printf("%-20s %-10d ₹%-10d\n", "Pasta", pasta_qty, pasta_qty * 180);
    if (sandwich_qty > 0)
        printf("%-20s %-10d ₹%-10d\n", "Sandwich", sandwich_qty, sandwich_qty * 90);
    if (coffee_qty > 0)
        printf("%-20s %-10d ₹%-10d\n", "Coffee", coffee_qty, coffee_qty * 70);

    printf("\nTotal Bill: ₹%d\n", total);
    printf("======= Thank You! Visit Again =======\n");

    return 0;
}
