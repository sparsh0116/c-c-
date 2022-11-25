#include<stdio.h>
int payroll(int basicpay){
    printf("The HRA of the employee is:%d\n",basicpay*1/10);
    printf("The DA of the employee is:%d\n",basicpay*1/4);
    printf("The Gross Pay of the employee is:%d\n",basicpay+basicpay*1/10);
    printf("The Net Pay of the employee is:%d\n",2*basicpay+basicpay*1/10);
    return 0;
}

int main() {
    int a,b;
    printf("Enter the basic salary of the employee:");
    scanf("%d",&a);
    b=payroll(a);

    return 0;
}