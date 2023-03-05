/*
Seetha, a maths teacher has started to learn the C programming language. She writes a program to do basic arithmetic operations. Help Seetha to complete her first program.

Input format
First number

Second number

Output format
Result of all arithmetic operations as shown in the sample output

Sample testcases
Input 1
6.8
3.2
Output 1
Addition: 10.000000
Subtraction: 3.600000
Multiplication: 21.760000
Division: 2.125000

//output
//program
#include <stdio.h>
int main()
{
    float num1,num2;
    scanf("%f%f",&num1,&num2);
    printf("Addition: %f\n",num1+num2);
    printf("Subtraction: %f\n",num1-num2);
    printf("Multiplication: %f\n",num1*num2);
    printf("Division: %f\n",num1/num2);
    
    return 0;
}