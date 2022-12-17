#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter any number: \n");
    scanf("%d",&a);
    if( a<= 100){
        if( a <= 50){
            printf("The number is less than 50");
        }
        else{
            printf("The number is more than 50 but less than 100");
        }
    }
    else{
        printf("The number is more than 100");
    }
    return 0;
}
