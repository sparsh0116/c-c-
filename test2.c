
#include <stdio.h>
#include <string.h>
struct date
{
    int date;
    char month[10];
    int year;
};
struct employee
{
    char name[20];
    int id;
    int salary;
    struct date bd;
};

int main()
{
    int i, n;
    printf("Enter the no. of employees you want to enter the records:");
    scanf("%d", &n);
    struct employee e[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter the name of the employee:");
        gets(e[i].name);
        printf("Enter the id of the employee:");
        scanf("%d", &e[i].id);
        printf("Enter the salary of the employee:");
        scanf("%d", &e[i].salary);
        printf("Enter the date of birth of the employee:");
        scanf("%d", &e[i].bd.date);
        printf("Enter the month of birth of the employee:");
        gets(e[i].bd.month);
        printf("Enter the year of birth of the employee:");
        scanf("%d", &e[i].bd.year);
    }
    for (i = 0; i < n; i++)
    {
        printf("The name of the employee is: %s", e[i].name);
        printf("The id of the employee is: %d", e[i].id);
        printf("The salary of the employee is: %d", e[i].salary);
        printf("The date of birth of the employee is: %d-%s-%d", e[i].bd.date, e[i].bd.month, e[i].bd.year);
    }

    return 0;
}