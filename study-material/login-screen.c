#include <stdio.h>
struct student
{
    int id;
    int marks;
    char name[50];
};

int main()
{
    struct student s;
    // taking user input

    printf("enter id:");
    scanf("%d", &s.id);
    printf("enter marks:");
    scanf("%d", &s.marks);
    printf("enter name:");
    scanf("%s", s.name);

    // display details
    printf("Name:%s\n", s.name);
    printf("ID:%d\n", s.id);
    printf("Marks:%d", s.marks);
}