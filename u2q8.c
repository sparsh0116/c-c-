#include <stdio.h>
int main()
{
    int A,B;
    printf("Enter the value of A:");
    scanf("%d",&A);
    printf("Enter value of B:");
    scanf("%d",&B);
    if (A<B)
    {
        printf("The point is 1");
    }
    else if (A%B==0)
    {
        printf("The point is %d",A/B);
    }
    else if (A%B!=0)
    {
        printf("the point is %d",A/B+1);
    }
    
    
    return 0;
}
