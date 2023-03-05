/*
John's little brother is struggling with maths.He decided to design a calculator with basic operations such as Addition, Subtraction, Multiplication and Division. The calculator should input two numbers and an operator from the user. It should perform an operation according to the operator entered and must take input in given format.

Input format
The inputs (number1 and number2 ) are given and followed by the operator, which is going to perform on those inputs.

Output format
Display the inputs as float number(with 2 decimal points) with operator and answer for that operation.



Refer sample output for exact format .

Sample testcases

Input 1
2 3 +

Output 1
2 + 3 = 5.00

Input 2
235 3 /

Output 2
235 / 3 = 78.33
*/

//program

#include<stdio.h>
int main()
{
    float num1,num2,res=0;
    char op;
    scanf("%f%f",&num1,&num2);
    scanf("\t%c",&op);
    
    switch(op)
    {
        case '+':res=num1+num2;
            break;
        case '-':res=num1-num2;
            break; 
        case '*':res=num1*num2;
            break;
        case '/':res=num1/num2;
            break;
    }
    printf("%.f %c %.f = %.2f",num1,op,num2,res);
    return 0;
}