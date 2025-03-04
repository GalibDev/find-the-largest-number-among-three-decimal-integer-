
#include <stdio.h>

int main()
{
   int num1,num2,num3;

   printf("Enter the first decimal number:=");

   scanf("%d",&num1);

   printf("Enter the second decimal number:=");

   scanf(" %d",&num2);

   printf("Enter the third decimal number =");

scanf("%d",&num3);

   if (num1 >= num2 && num1 >= num3){

   printf("The lergest number is...%d\n",num1);


   }


   else if (num2 >= num1 && num2 >= num3){

   printf("The lergest number is..%d\n",num2);

   }

   else {


   printf("The lergest number is_____%d\n",num3);


   }












}
