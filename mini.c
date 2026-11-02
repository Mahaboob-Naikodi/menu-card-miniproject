#include <stdio.h>

int main()
{
    int choice = -1, quantity;
    int totalitems = 0;
    int  Pizza = 0, Veg_Roll = 0, Burger = 0;
    int Biryani = 0, tea = 0;
    float price, totalbill = 0;

    printf("\n=============== Hyderabadi Cafe ==============\n");
    printf("\n----------------------------------------------");
    printf("\nEntry  |       Item                  | Price");
    printf("\n----------------------------------------------\n");
    printf(" 1.          Pizza                     200");
    printf("\n 2.          Veg_Roll                100");
    printf("\n 3.          Burger                  300");
    printf("\n 4.         Biryani                  500");
    printf("\n 5.          Tea                      10");
    printf("\n\nNote: Enter 0 to exit.\n");

    while (choice != 0)
    {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 0)
        {
            break;
        }

        switch (choice)
        {
            case 1:
                price = 200;
                break;

            case 2:
                price = 100;
                break;

            case 3:
                price = 300;
                break;

            case 4:
                price = 500;
                break;

            case 5:
                price = 10;
                break;

            default:
                printf("Invalid choice!\n");
                continue;
        }

        printf("Enter the quantity: ");
        scanf("%d", &quantity);

        if (quantity <= 0)
        {
            printf("Invalid quantity! Enter a positive number.\n");
            continue;
        }

        switch (choice)
        {
            case 1:
                Pizza += quantity;
                break;

            case 2:
                Veg_Roll += quantity;
                break;

            case 3:
                Burger += quantity;
                break;

            case 4:
                Biryani += quantity;
                break;

            case 5:
                tea += quantity;
                break;
        }

        printf("Price per unit: %.2f\n", price);
        printf("Quantity: %d\n", quantity);
        printf("Subtotal: %.2f\n", price * quantity);

        totalitems += quantity;
        totalbill += price * quantity;
    }

    printf("\n=============== Hyderabadi Cafe ================\n");
    printf("\n---------------- BILL -----------------------\n");

    if (Pizza != 0)
        printf("%d x Pizza       = %d\n", Pizza, Pizza * 200);

    if (Veg_Roll != 0)
        printf("%d x Veg_Roll   = %d\n", Veg_Roll, Veg_Roll * 100);

    if (Burger != 0)
        printf("%d x Burger  = %d\n", Burger, Burger * 300);

    if (Biryani != 0)
        printf("%d x Biryani  = %d\n", Biryani, Biryani * 500);

    if (tea != 0)
        printf("%d x Tea         = %d\n", tea, tea * 10);

    printf("---------------------------------------------\n");
    printf("Total items = %d\n", totalitems);
    printf("Total bill  = %.2f\n", totalbill);
    printf("---------------------------------------------\n");

    return 0;
}