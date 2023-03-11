/*
Ankith was not able to identify the sequence in the above image. He asked his friends to identify the sequence and help him. His friend Karthick identified the sequence and ready to help. But Karthick is not good at coding. Help Karthick by writing the program to print the series.

Input format
Integer - Number of elements in series

Output format
Display series as shown in sample output.

Sample testcases

Input 1
10

Output 1
0 1 1 2 3 5 8 13 21 34 

*/

//program

#include<stdio.h>
int fib(int);
int main()
{
    int num,num1,num2,num3,i=0;
    scanf("%d",&num);
    
    num1=0;
    num2=1;
    printf("%d ",num1);
    printf("%d ",num2);
    while(i<num-2)
    {
        num3=num1+num2;
        printf("%d ",num3);
        num1=num2;
        num2=num3;
        i++;
    }
    return 0;
}