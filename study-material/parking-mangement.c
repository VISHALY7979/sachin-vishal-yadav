#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int nor = 0, nob = 0, noc = 0, amount = 0, count = 0;
int menu();
void bus();
void cycle();
void riksaw();
void delete();
void showDetails();
int main()
{
    while (1)
    {
        switch (menu())
        {
        case 1:
            bus();
            break;
        case 2:
            cycle();
            break;
        case 3:
            riksaw();
            break;
        case 4:
            showDetails();
            break;
        case 5:
            delete();
            break;
        case 6:
            exit(0);
        default:
            printf("invalid choice");
        }
    }
}
int menu()
{
    int ch;
    printf("1.enter bus\n");
    printf("2.enter cycle\n");
    printf("3.enter rikshaw\n");
    printf("4.show status\n");
    printf("5.delete data\n");
    printf("6.exit\n");
    printf("enter your choice\n");
    scanf("%d", &ch);
    return ch;
}
void showDetails()
{
    printf("number of bus%d\n", nob);
    printf("number of cycle%d\n", noc);
    printf("number of rikshaw%d\n", nor);
    printf("Total no of vechicle%d\n", nob + noc + nor);
    printf("total gain amount%d\n", amount);
}
void delete()
{
    nob = 0;
    noc = 0;
    nor = 0;
    amount = 0;
    count = 0;
}
void riksaw()
{
    printf("entry succesfull\n");
    nor++;
    amount += 50;
    count++;
}
void cycle()
{
    printf("entry succesfull\n");
    noc++;
    amount += 20;
    count++;
}
void bus()
{
    printf("entry succesfull\n");
    nob++;
    amount += 100;
    count++;
}