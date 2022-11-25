#include<stdio.h>
int sum(int a,int b){
    int c;
    c = a+b;
    return c;
}
int main(){
    int x,y;
    printf("Enter the value to find sum: \n");
    scanf("%d %d" ,&x,&y);
    int add;
    add = sum(x,y);
    printf("%d \n",add);
    return 0;
}