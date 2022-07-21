#include<stdio.h>
int main() {
    int num1,num2,num;
    printf("enter first number");
    scanf("%d",&num1);
    printf("enter second number");
    scanf("%d",&num2);
    num=num1*num2;
    num1=num/num1;
    num2=num/num1;
    printf("after swapping, first number = %d",num1);
    printf("\nafter swapping, second number = %d",num2);
    return 0;

}