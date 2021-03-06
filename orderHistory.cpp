void view_order_history()
{
    if (orderCtr == 0)
    {
        system("cls || clear");
        printf("There is no order history\n");
        printf("Press Enter to continue");
        getchar();
        getchar();
        main_menu();
    }
    else
    {
        system("cls || clear");
        printf("| %-3s | %-20s | %-6s | %-10s | %-10s | %-10s | %-5s | %-20s |\n", "No", "Name", "Price", "Topping", "Calories", "Flavor", "Size", "Order Time");
        puts("-------------------------------------------------------------------------------------------------------------");
        curr2 = head2;
        int i = 1;
        while (curr2)
        {
            printf("| %-3d | %-20s | %-6d | %-10s | %-10.2lf | %-10s | %-5c | %-30s |\n", i, curr2->Orders.Food.name, curr2->Orders.Food.price, curr2->Orders.Food.topping, curr2->Orders.Food.calories, curr2->Orders.Food.flavor, curr2->Orders.Food.size, curr2->Orders.orderedtime);
            curr2 = curr2->next;
            i++;
        }
        printf("Press Enter to return to main menu\n");
        getchar();
        getchar();
        main_menu();
    }
}
