#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define charmax 10001
#define intmax 101

//FOR GETTING TIME--------------------------------------------------------------------------------------------
int get_date() {
    time_t now = time(NULL);
    struct tm *cur_time = localtime(&now);
    return("%d", cur_time->tm_mday);
}
int get_month() {
    time_t now = time(NULL);
    struct tm *cur_time = localtime(&now);
    return("%d", cur_time->tm_mon + 1);
}
int get_year() {
    time_t now = time(NULL);
    struct tm *cur_time = localtime(&now);
    return("%d", cur_time->tm_year + 1900);
}
int get_hour() {
    time_t now = time(NULL);
    struct tm *cur_time = localtime(&now);
    if (cur_time->tm_hour < 10) {
        return("0%d", cur_time->tm_hour);
    }
    else {
        return("%d", cur_time->tm_hour);
    }
}
int get_minute() {
    time_t now = time(NULL);
    struct tm *cur_time = localtime(&now);
    if (cur_time->tm_min < 10) {
        return("0%d", cur_time->tm_min);
    }
    else {
        return("%d", cur_time->tm_min);
    }
}

//--------------------------------------------------------------------------------------------------------------

//STRUCTURES----------------------------------------------------------------------------------------------------
typedef struct {
    char month_name[13][20];
}months;

months month_list = {
    "January", 
    "February", 
    "March", 
    "April", 
    "May", 
    "June", 
    "July", 
    "August", 
    "September", 
    "October", 
    "November", 
    "December"
};

typedef struct {
    int date;
    int month;
    int year;

    int hour;
    int minute;
}full_date;

typedef struct {
    char item_name[charmax];
    int item_id;
    int item_price;
    int item_quantity;


} item_properties;

typedef struct {
    char customer_name[charmax];
    full_date order_date;
    item_properties item_list[intmax];

    int total_price;
    int total_quantity;
} order;
//--------------------------------------------------------------------------------------------------------------

//FUNCTIONS DECLARATION-----------------------------------------------------------------------------------------
void cashier_menu();    //for making transactions
void inventory_menu();  //for managing inventory
    void view_inventory();  //viewing inventory menu
    void add_items();   //adding items to inventory
    void remove_items();    //removing items from inventory
    void modify_items();    //modifying items in inventory
void invoices_menu();   //for viewing invoices
    void view_invoices();   //showing transactions history

void show_items();  //showing items in inventory
//--------------------------------------------------------------------------------------------------------------

//DRIVER CODE---------------------------------------------------------------------------------------------------
int main(void)
{
    while(true) {
        int command;
        int flag = 0;

        printf("--------------\n");
        printf("> STORE MENU <\n");
        printf("--------------\n\n");

        printf("[1] Make Transaction\n");
        printf("[2] Manage Inventory\n");
        printf("[3] View Transactions\n");
        printf("[0] Exit\n\n");

        printf("Enter your choice: ");
        scanf("%d", &command);

        switch(command) {
            case 1:
                system("cls"); //clears the screen
                printf("Make Transaction\n");
                break;
            case 2:
                system("cls"); //clears the screen
                printf("Manage Inventory\n");
                inventory_menu();
                break;
            case 3:
                system("cls"); //clears the screen
                printf("View Invoices\n");
                break;
            case 0:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid input!\n");
                system("cls"); //clears the screen
                flag = 1;
                break;

        }

        if (flag == 0) {
            break;
        }
        
    }

    return 0;
}
//--------------------------------------------------------------------------------------------------------------

//FUNCTIONS DEFINITION------------------------------------------------------------------------------------------
void inventory_menu() {
    int command;
    int flag = 0;

    printf("--------------------\n");
    printf(">> INVENTORY MENU <<\n");
    printf("--------------------\n\n");

    printf("[1] View Inventory\n");
    printf("[2] Add Items\n");
    printf("[3] Remove Items\n");
    printf("[4] Modify Items\n");
    printf("[0] Back\n\n");

    printf("Enter your choice: ");
    scanf("%d", &command);

    switch(command) {
        case 1:
            system("cls");
            view_inventory;
            break;
        case 2:
            system("cls");
            add_items;
            break;
        case 3 :
            system("cls");
            remove_items;
            break;
        case 4:
            system("cls");
            modify_items;
            break;
        case 0:
            system("cls");
            main();
            break;
        default:
            printf("Invalid input!\n");
            system("cls");
            flag = 1;
            break;
    }

    if (flag != 0) {
        inventory_menu;
    }

}

void add_items() {
    fopen 
}