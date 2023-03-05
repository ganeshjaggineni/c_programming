/*
Vivek's sister is studying in 4th standard. She is struggling to score marks in mathematics. So Vivek decided to help her by teaching basic multiplication to her. He explained the multiplication concept and asked her sister to multiply three numbers. Meantime Vivek writes a program to multiply three numbers. Help Vivek to write a suitable program.



Note : Display the result with two decimals

Input format
Three numbers in first line separated by space

Output format
Product of three numbers as shown in the sample output

Sample testcases
Input 1
3 4 5
Output 1
The Product is 60.00
*/
//program
#include <stdio.h>
int main()
{
   float num1,num2,num3;
   scanf("%f %f %f",&num1,&num2,&num3);
   float multiplication=num1*num2*num3;
   printf("The Product is %0.2f",multiplication);
   return 0; 
}