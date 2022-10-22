#include<stdio.h>
int sub(int num1, int num2); 
int main() {
   int num1, num2, res;
 
   printf("\nEnter the two numbers : ");
   scanf("%d %d", &num1, &num2);
 
   //Call Function Sub With Two Parameters
   res = sub(num1, num2);
 
   printf("nDifference of two number is : ");
   return (0);
}
 
int sub(int num1, int num2) {
   int num3;
   num3 = num1 + num2;
   return (num3);
}
