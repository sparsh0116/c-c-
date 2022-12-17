#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter the number you want the multiplication table of: ");
    scanf("%d", &a);
    for(int i=1; i<=10; i++){
        printf("%d * %d = %d", a,i, a*i);
        printf("\n");
    }
    return 0;
}
