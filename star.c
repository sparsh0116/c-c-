#include<stdio.h>

int main() {
   #include<stdio.h>
#include<string.h>
struct student
{
    char name[10];
    int roll;
    float marks;
}st[3];
int main() {
    int i,j;
    i=0;
    j=0;
    for ( i = 0; i < 3; i++)
    {
        printf("Enter the name of the student:");
        gets(st[i].name);
        printf("Enter the roll no. of the student:");
        scanf("%d",&st[i].roll);
        printf("Enter the marks of the student:");
        scanf("%f",&st[i].marks);
    }
    for ( j = 0; j < 3; j++)
    {
        printf("Enter the name of the student: %s",st[j].name);   
        printf("Enter the roll no. of the student: %d",st[j].roll);
        printf("Enter the marks of the student: %.2f",st[j].marks);
    }
    
    return 0;
}
    return 0;
}
