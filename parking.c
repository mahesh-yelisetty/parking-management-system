#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int car_slot = 5, bike_slot = 20, auto_slot = 15;
int earings = 0, car_count = 0, bike_count = 0, auto_count = 0;
int index1 = 0, index2 = 0;
struct customer
{
    char customerName[10][20], date[10][13];
    int vehicleNumber[10];
} c_data;
void print_receipt(int fees)
{
    //this function use to print receipt
    printf("\nHere you receipt!\n");
    printf("***************************************\n");
    printf("Name: %s\n", c_data.customerName[index2]);
    printf("Vehicle number: %d\n", c_data.vehicleNumber[index1]);
    printf("Your name :%d\n", fees);
    printf("***************************************\n");
}

void car_park()
{
    //this function use to handle car parking operations
    int fees;
    printf("Enter your name: ");
    fflush(stdin);
    gets(c_data.customerName[index2]);
    printf("Enter vehicle number: ");
    scanf("%d", &c_data.vehicleNumber[index1]);
repeat:
    printf("Enter parking fees: ");
    scanf("%d", &fees);
    if (fees < 300 || fees > 300)
    {
        printf("Please enter valid amount");
        goto repeat;
    }
    else
    {
        earings = earings + fees;
        printf("Your payment is successfully done\n");
    }
    print_receipt(fees);
    index1++;
    index2++;
    car_count++;
}
void bike_park()
{
    //this function use to handle bike parking operations
    int fees;
    printf("Enter your name: ");
    fflush(stdin);
    gets(c_data.customerName[index2]);
    printf("Enter vehicle number: ");
    scanf("%d", &c_data.vehicleNumber[index1]);
repeat:
    printf("Enter parking fees: ");
    scanf("%d", &fees);
    if (fees < 100 || fees > 100)
    {
        printf("Please enter valid amount");
        goto repeat;
    }
    else
    {
        earings = earings + fees;
        printf("Your payment is successfully done\n");
    }
    print_receipt(fees);
    index1++;
    index2++;
    bike_count++;
}
void auto_park()
{
    //this function use to handle auto parking operations
    int fees;
    printf("Enter your name: ");
    fflush(stdin);
    gets(c_data.customerName[index2]);
    printf("Enter vehicle number: ");
    scanf("%d", &c_data.vehicleNumber[index1]);
repeat:
    printf("Enter parking fees: ");
    scanf("%d", &fees);
    if (fees < 150 || fees > 150)
    {
        printf("Please enter valid amount");
        goto repeat;
    }
    else
    {
        earings = earings + fees;
        printf("Your payment is successfully done\n");
    }
    print_receipt(fees);
    index1++;
    index2++;
    auto_count++;
}
void park_vehicle()
{
    //this function use to handle parking operations
    int choice;
again:
    printf("\n1.Car                    2.Bike\n");
    printf("3.Auto\n");
    printf("Which vehicle do you want to park: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        if (car_slot == 0)
        {
            printf("\nSorry! Car parking slot is not available\n");
        }
        else
        {
            car_park();
            car_slot--;
        }
        break;
    case 2:
        if (bike_slot == 0)
        {
            printf("\nSorry! Bike parking slot is not available\n");
        }
        else
        {
            bike_park();
            bike_slot--;
        }
        break;
    case 3:
        if (auto_slot == 0)
        {
            printf("\nSorry! Auto parking slot is not available\n");
        }
        else
        {
            auto_park();
            auto_slot--;
        }
        break;
    default:
        printf("Invalid number try again\n");
        goto again;
    }
}
void check_vehicle()
{
    //This function use to check your vehicle is available or not
    char customerName1[20], date1[13];
    int vehicleNumber;
    int i = 0, check1, check2;
    printf("\nPlease enter some details\n");
    printf("Enter Name: ");
    fflush(stdin);
    gets(customerName1);
    printf("Enter vehicle number: ");
    scanf("%d", &vehicleNumber);
    while (1)
    {
        check1 = strcmp(customerName1, c_data.customerName[i]);
        if (vehicleNumber == c_data.vehicleNumber[i])
        {
            check2 = 0;
        }
        if (check1 == 0 && check2 == 0)
        {
            printf("\nYour vehicle is available here\n");
            break;
        }
        else
        {
            if (index1 == 9)
            {
                printf("\nSorry! your vehicle is not available here\n");
                break;
            }
        }
        i++;
    }
}
void display()
{
    //This function use to check parking insight
    printf("\n************Today's Vehicle And Earnings**************\n");
    printf("Total Car parked: %d\n", car_count);
    printf("Total Bike parked: %d\n", bike_count);
    printf("Total Auto parked: %d\n", auto_count);
    printf("Total earnings: %d\n", earings);
}
void main()
{
    //This function use to handle start menu
    int choose;
        printf("\n\t\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
        printf("\t\t\t\t\xdb                                               \xdb\n");
        printf("\t\t\t\t\xdb       =============================           \xdb\n");
        printf("\t\t\t\t\xdb         PARKING MANAGEMENT SYSTEM             \xdb\n");
        printf("\t\t\t\t\xdb       =============================           \xdb\n");
        printf("\t\t\t\t\xdb                                               \xdb\n");
        printf("\t\t\t\t\xdb                                               \xdb\n");
        printf("\t\t\t\t\xdb                                               \xdb");
        printf("\n\t\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
        printf(" \n\t Press Any Key To Continue:");
        getch();
        system("cls");


    do
    {
        printf("This is vehicle fees chart\n");
        printf("Car fees 300\n");
        printf("Bike fees 100\nAuto fees 150\n");
        printf("\nEnter 1 to park your vehicle\n");
        printf("Enter 2 to check your vehicle\n");
        printf("Enter 3 to display number of vehicles\n");
        printf("Enter 4 for exit\n");
    again1:
        printf("Please choose any option: ");
        scanf("%d", &choose);
        switch (choose)
        {
        case 1:
            park_vehicle();
            break;
        case 2:
            check_vehicle();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Thank you for using our parking stand\n");
            exit(0);
            break;
        default:
            printf("Invalid number try again\n");
            goto again1;
            break;
        }
         getch();
        system("cls");

    } while (choose != 4);
}
