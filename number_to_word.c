/*
Jennie is working in a bank and her daily task is to guide the customers to fill various bank challans. A part of this, customers need to write the numbers in word format. Jennie decided to write a program to read the number and print the number digit by digit in word format. Help Jennie to complete this task.

Input format
Number

Output format
Given number in word format

Sample testcases

Input 1
659803

Output 1
six five nine eight zero three 

*/
//program 
#include<stdio.h>
int main()
{
    int num,digit,rev=0;
    scanf("%d",&num);
    while(num>0)
    {
        digit=num%10;
        rev=rev*10+digit;
        num=num/10;
    }
    num=rev;
    while(num>0)
    {
        digit=num%10;
        switch(digit)
        {
            case 0:printf("zero");
                break;
            case 1:printf("one ");
                break;
            case 2:printf("two ");
                break;
            case 3:printf("three ");
                break;
            case 4:printf("four ");
                break;
            case 5:printf("five ");
                break;
            case 6:printf("six ");
                break;
            case 7:printf("seven ");
                break;
            case 8:printf("eight ");
                break;
            case 9:printf("nine ");
                break;
        }
        num=num/10;
    }
    
    return 0;
}