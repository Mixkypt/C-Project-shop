#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>


struct login
{
    char fname[30];
    char lname[30];
    char username[30];
    char password[20];
};

void login (void)
{
    char username[30],password[20];

    printf("\nPlease Enter your login credentials below\n\n");
    printf("Username:  ");
    fgets(username, 30, stdin);
    printf("\nPassword: ");
    fgets(password, 20, stdin);
    printf("\nSuccessful Login\n");
}


void registration(void)
{
    struct login l;

    printf("\nWelcome to your online course provider. We need to enter some details for registration.\n\n");
    printf("\nEnter First Name:");
    scanf("%s",l.fname);
    printf("\nEnter Surname:");
    fflush(stdin);
    scanf("%s",l.lname);

    printf("Thank you.\nNow please choose a username and password as credentials for system login.\nEnsure the username is no more than 30 characters long.\nEnsure your password is at least 8ixcharacters long \nand contains lowercase, uppercase, numerical and special character values.\n");

    printf("\nEnter Username:\n");
    scanf("%s",l.username);
    printf("\nEnter Password:\n");
    scanf("%s",l.password);

    printf("\nConfirming details...\n...\nWelcome, %s!\n\n",l.fname);
    printf("\nRegistration Successful!\n");
    printf("Press any number to continue...");
    scanf("%d");
        getchar();
    system("CLS");
    login();
}

int main ()
{
    int option;

    printf("Press '1' to Register\nPress '2' to Login\n\n");
    scanf("%d",&option);

    getchar();

    if(option == 1)
        {
            system("CLS");
            registration();
        }

    else if(option == 2)
        {
            system("CLS");
            login();
        }
    int price = 0, num = 0, total = 0;
    int menu = 0;
    int pr1 = 0, pr2 = 0, np = 0; // np = Net price (ราคาสุทธิ), pr = Promotion (ส่วนลด)
    int id;

    printf("\n");
    printf("\n");
    printf("----------- Everlasting :) -----------"); // Shop's name
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("---------- Personal History ----------");
    printf("\n");
    printf("\n");
    printf("ID : ");
    scanf("%d", &id); // Number of person (use for replace name)
    printf("\n");
    printf("---------------- Menu ----------------");
    printf("\n");
    printf("\n");
    printf("1. Turtleneck : 500 Bth\n");
    printf("2. Leather Jacket : 1200 Bth\n");
    printf("3. Hooded Sweater : 700 Bth\n");
    printf("4. Half zip Turtleneck Sweater : 900 Bth\n");
    printf("5. Shirts : 350 Bth\n");
    printf("6. Suits : 550 Bth\n");
    printf("7. Leather Pants : 500 Bth\n");
    printf("8. Levi's Pants : 1000 Bth\n");
    printf("9. Lee Pants : 850 Bth\n");
    printf("10. Nudie Pants : 500 Bth\n");
    printf("\n");
    printf("---------------- Menu ----------------");
    printf("\n");

    do
    {
        printf("\nChoose menu : "); //Choose Menu of shop
        scanf("%d", &menu);
        if (menu < 1 || menu > 10)
        {
            printf("!!! Errors !!!\n");
            printf("... Try AGAIN ...\n");
            printf("*** Please choose only 1 2 3 4 ***\n");
        }
    } while (menu < 1 || menu > 10);

    do
    {
        printf("Choose number : "); //Choose quantity of product
        scanf("%d", &num);
        if (num <= 0)
        {
            printf("!!! Errors !!!\n");
            printf("... Please choose correct number ...\n");
            printf("... Number must more than 0 ...\n");
        }
    } while (num <= 0);

    printf("\n");
    printf("--------------- OUTPUT ---------------\n");
    printf("\n");
    switch(menu)
    {
        case 1:
           {
               price = num * 500;
               printf("Turtleneck");
               break;
           }
        case 2:
           {
               np = num * 1200;
               pr1 = num / 2;
               pr2 = pr1 * 300; // Buy 2 ; Discount 300 Bath
               price = np - pr2;
               printf("Leather Jacket");
               break;
           }
        case 3:
           {
               np = num * 700;
               pr1 = num / 3;
               pr2 = pr1 * 150; // Buy 3 ; Discount 150 Bath
               price = np - pr2;
               printf("Hooded Sweater");
               break;
           }
        case 4:
           {
               np = num * 900;
               pr1 = num / 3;
               pr2 = pr1 * 200; // Buy 3 ; Discount 200 Bathth
               price = np - pr2;
               printf("Half zip Turtleneck Sweater");
               break;
           }
        case 5:
           {
               np = num * 350;
               pr1 = num / 2;
               pr2 = pr1 * 100; // Buy 2 ; Discount 100 Bath
               price = np - pr2;
               printf("Shirts");
               break;
           }
        case 6:
           {
               np = num * 550;
               pr1 = num / 4;
               pr2 = pr1 * 200; // Buy 4 ; Discount 200 Bath
               price = np - pr2;
               printf("Suits");
               break;
           }
        case 7:
           {
               np = num * 500;
               pr1 = num / 2;
               pr2 = pr1 * 150; // Buy 2 ; Discount 150 Bath
               price = np - pr2;
               printf("Leather Pants");
               break;
           }
        case 8:
           {
               np = num * 1000;
               pr1 = num / 2;
               pr2 = pr1 * 100; // Buy 2 ; Discount 100 Bath
               price = np - pr2;
               printf("Levi's Pants");
               break;
           }
        case 9:
           {
               np = num * 850;
               pr1 = num / 3;
               pr2 = pr1 * 200; // Buy 3 ; Discount 200 Bath
               price = np - pr2;
               printf("Lee Pants");
               break;
           }
        case 10:
           {
               np = num * 500;
               pr1 = num / 2;
               pr2 = pr1 * 100; // Buy 2 ; Discount 100 Bath
               price = np - pr2;
               printf("Nudie Pants");
               break;
           }
    }

    printf("\nNumber : %d\n", num); // จำนวน

    if (num >= 3) // ถ้าซื้อสินค้า >= 3 ตัว -> Free EMS , ถ้า < 3 -> +50 Bath
    {
        printf("EMS : Free\n");
    } else {
        printf("EMS : 50 Bath\n");
        price = price + 50;
    }

    printf ("Discount : %d Bath\n", pr2); // Number discount price
    printf ("Price : %d Bath\n", price); // Total price
    printf("\n");
    printf("\n");
    printf ("--------------------------------------");
    printf("\n");
    printf("- :) Thanks for using our service :) -");
    printf("\n");
    printf ("--------------------------------------");
    printf("\n");

    getch();
}
