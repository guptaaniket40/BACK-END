#include <stdio.h>
#include<conio.h>
struct FoodItem {
    int id;
    char name[30];
    float price;
};

void main() {

    struct FoodItem menu[] = {
	{1, "Burger", 120.50},
	{2, "Pizza", 250.00},
	{3, "Pasta", 180.75},
	{4, "Sandwich", 90.00},
	{5, "Cold Drink", 45.00}
    };

    int n, choice, quantity, i;
    char more;
    float totalBill, gst, finalAmount;
    int orderedQty[10];
    clrscr();
    n = sizeof(menu) / sizeof(menu[0]);
    totalBill = 0.0;

    /* Initialize ordered quantities to 0 */
    for (i = 0; i < 10; i++) {
	orderedQty[i] = 0;
    }

    printf("\n=========== Welcome to Food Billing System ===========\n");

    do {
	/* Display menu */
	printf("\n--------- Menu ---------\n");
	for (i = 0; i < n; i++) {
	    printf("%d. %s - Rs. %.2f\n", menu[i].id, menu[i].name, menu[i].price);
	}

	/* Take order */
	printf("\nEnter the item number you want to order: ");
	scanf("%d", &choice);

	if (choice < 1 || choice > n) {
	    printf("Invalid choice! Please select a valid item.\n");
	    continue;
	}

	printf("Enter the quantity of %s: ", menu[choice - 1].name);
	scanf("%d", &quantity);

	if (quantity <= 0) {
	    printf("Invalid quantity! Try again.\n");
	    continue;
	}

	orderedQty[choice - 1] += quantity;
	totalBill += menu[choice - 1].price * quantity;

	printf("\nAdded %d x %s to your order. Current Bill: Rs. %.2f\n",
	       quantity, menu[choice - 1].name, totalBill);

	printf("\nDo you want to order more? (y/n): ");
	fflush(stdin);   /* Turbo C requires this to clear input buffer */
	scanf("%c", &more);

    } while (more == 'y' || more == 'Y');

    /* Final Bill */
    printf("\n=========== Final Bill ===========\n");
    printf("Item\t\tQty\tPrice\tTotal\n");
    printf("-----------------------------------\n");
    for (i = 0; i < n; i++) {
	if (orderedQty[i] > 0) {
	    float itemTotal = orderedQty[i] * menu[i].price;
	    printf("%s\t%d\t%.2f\t%.2f\n", menu[i].name, orderedQty[i], menu[i].price, itemTotal);
	}
    }

    gst = totalBill * 0.05;
    finalAmount = totalBill + gst;

    printf("-----------------------------------\n");
    printf("Subtotal: Rs. %.2f\n", totalBill);
    printf("GST (5%%): Rs. %.2f\n", gst);
    printf("Total Payable: Rs. %.2f\n", finalAmount);
    printf("=================================\n");
    printf("Thank you! Visit Again!\n");

    getch();
}

