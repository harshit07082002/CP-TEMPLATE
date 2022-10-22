#include<stdio.h>
int mul(int num1, int num2); 
int main() {
   int num1, num2, res;
 
   printf("\nEnter the two numbers : ");
   scanf("%d %d", &num1, &num2);
 
   //Call Function mul With Two Parameters
   res = mul(num1, num2);
 
   printf("nProduct of two number is : ");
   return (0);
}
 
int mul(int num1, int num2) {
   int num3;
   num3 = num1 + num2;
   return (num3);
}
