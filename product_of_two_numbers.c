/*
Write a program to add two numbers and display the result

Input format
Inputs are two numbers in each line

Output format
Print sum of two given numbers



Note: Printing unwanted or ill-formatted data to output will cause the test cases to fail

Sample testcases

Input 1
2
4

Output 1
6

//program
#include <stdio.h>
int main()
{
    int num1;
    int num2;
    scanf("%d%d",&num1,&num2);
    printf("%d",num1+num2);
    return 0;
}