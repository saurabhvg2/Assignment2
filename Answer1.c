#include<stdio.h>
int main() {
   int num1,num2;
   printf("\nenter a number");
   scanf("%d" , &num1);
   num2=num1%10;   
   printf("unit digit of %d is: %d",num1,num2);
   return 0;
}