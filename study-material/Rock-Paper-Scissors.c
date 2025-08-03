#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int you, computer;
int menu()
{
    int ch;
    printf("1.select Rock\n");
    printf("2.Select Paper\n");
    printf("3.Select Scissors\n");
    printf("4.exit\n");
    printf("enter your choice");
    scanf("%d", &ch);
    return ch;
}
void setup()
{
label:
    computer = rand() % 4;
    if (computer == 0)
    {
        goto label;
    }

    you = menu();
}
void makeLogic()
{
    switch (you)
    {
    case 1:
        if (computer == 1)
        {
            printf("game draw");
            printf("you=rock\ncomputer=rock\n");
        }
        else if (computer == 2)
        {
            printf("computer won");
            printf("you=rock\ncomputer=paper\n");
        }
        else
        {
            printf("you won");
            printf("you=rock\ncomputer=scissors\n");
        }
        break;
    case 2:
        if (computer == 1)
        {
            printf("you won");
            printf("you=paper\ncomputer=rock\n");
        }
        else if (computer == 2)
        {
            printf("game draw");
            printf("you=paper\ncomputer=paper\n");
        }
        else
        {
            printf("computer won");
            printf("you=paper\ncomputer=scissors\n");
        }
        break;
    case 3:
        if (computer == 1)
        {
            printf("computer won");
            printf("you=scissors\ncomputer=rock\n");
        }
        else if (computer == 2)
        {
            printf("you won");
            printf("you=scissors\ncomputer=paper\n");
        }
        else
        {
            printf("game draw");
            printf("you=scissors\ncomputer=scissors\n");
        }
        break;
    case 4:
        exit(0);
    default:
        printf("invalid user choice");
    }
}

int main()
{
    while (1)
    {
        setup();
        makeLogic();
    }
    return 0;
}