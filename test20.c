#include<stdio.h>
int main(){
    int a=1;
    float b=102020;
    char c='s';
    FILE *fp;
    fp=fopen("textfile","w");
    fprintf(fp,"%d %f %c",a,b,c);
    
}