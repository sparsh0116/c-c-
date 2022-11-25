#include <stdio.h>

int main()
{
    int n,sum=0,num;
    printf("Enter a Number\n");
    scanf("%d",&n);
    num=n;
    while(num!=0)
    {
        sum=sum+(num%10);
        num=num/10;
    }
    if(sum%4==0)
        printf("%d is a Special Number",n);
    else
    printf("%d is not a Special Number",n);
    return 0;
}
