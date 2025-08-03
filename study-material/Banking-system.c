#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int amount, totalAmount = 1000, amo, tra, totalDeposite = 0, totalWithraw = 0, totalTransfer;
int menu();
void deposite();
void transfer();
void withraw();
void checkDetails();
void last();
int acc;
char a[50];

int main()
{
    printf("enter your name:");
    gets(a);
    printf("enter your account no:");
    scanf("%d", &acc);
    while (1)
    {
        switch (menu())
        {
        case 1:
            deposite();
            totalDeposite += amount;
            break;
        case 2:
            withraw();

            totalWithraw += amo;
            break;

        case 3:

            transfer();

            totalTransfer += tra;
            break;
        case 4:
            checkDetails();
            break;
        case 5:
            last();
            getch();
            exit(0);
        default:
            printf("invalid choice");
        }
    }
}

int menu()
{
    int ch;

    printf("\n\n1.deposite amount:\n");
    printf("2.withraw amount:\n");
    printf("3.Transfer amount:\n");
    printf("4.Check details:\n");
    printf("5.exit:\n");
    printf("enter your choice:\n");
    scanf("%d", &ch);
    return ch;
}
void deposite()
{
    printf("enter amount:");
    scanf("%d", &amount);
    totalAmount += amount;
}

void withraw()
{
    printf("enter amount you want to withraw");
    scanf("%d", &amo);
    if (amo <= totalAmount)
    {
        totalAmount -= amo;
    }
    else
    {
        printf("insufficient amount in your account");
    }
}

void transfer()
{
    printf("how many amount you want to transfer");
    scanf("%d", &tra);
    if (tra <= totalAmount)
    {
        totalAmount -= tra;
    }
    else
    {
        printf("insufficient fund availble in your account");
    }
}

void checkDetails()
{
    printf("Total amount is %d\n", totalAmount);
    printf("Total deposite%d\n", totalDeposite);
    printf("Total withraw amount%d\n", totalWithraw);
    printf("Total transfer amount%d", totalTransfer);
}

void last()
{
    printf("*****************************************************\n");
    printf("your name:%s\n", a);
    printf("account no: %d\n", acc);
    printf("Total amount: %d\n", totalAmount);
    printf("Total deposite:%d\n", totalDeposite);
    printf("Total withraw amount:%d\n", totalWithraw);
    printf("Total transfer amount:%d\n", totalTransfer);
    printf("***********Thanks************");
}