#include<stdio.h>

int main() {
    int temp;
    float final;
    printf("Enter the temperature in F:");
    scanf("%d",&temp);
    final=  ((temp - 32)*5)/9;
    printf("The temperature in celsius is: %f \n", final);

    return 0;
}