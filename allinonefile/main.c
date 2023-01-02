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

int main()
{

}