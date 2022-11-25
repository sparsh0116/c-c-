#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("\n");
    printf("Enter the second number:");
    scanf("%d",&num2);
    printf("\n");
    int opt;
    printf("1. +\n2. -\n3. *\n4. /\n \n");
    printf("Enter the operator you want to perform:");
    scanf("%d",&opt);
    if (opt== 1)
    {
        printf("\nThe sum of the nos. is: %d\n",(num1+num2));
    }
    else if(opt==2)
    {
        printf("The difference of the nos. is: %d\n",(num1-num2));
    }
    else if (opt== 3)
    {
        printf("The multiplication of the two nos. is:%d\n",(num1*num2));
    }
    else if (opt== 4)
    {
        printf("The division of the two nos. is:%d\n",(num1/num2));
    }
    else
    {
        printf("Invalid entry\n \n");
    }
    return 0;
    

}