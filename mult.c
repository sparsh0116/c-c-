#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter the number you want the multiplication table of: ");
    scanf("%d", &a);
    int i=1;
    while(i<=10){
        printf("%d * %d = %d \n", a, i, a*i);
        i++;
    }
    return 0;
}
