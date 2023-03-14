/*
Write a program to create an array of numbers upto given number (N) that do not appear in the Fibonacci series. [Fibonacci series is formed by sum of previous two numbers: 0 1 1 2 3 5 ...]



Input format
An integer

Output format
Non Fibonacci numbers upto given number

Sample testcases

Input 1
20

Output 1
4 6 7 9 10 11 12 14 15 16 17 18 19 20 

*/

//program
#include<stdio.h>
int main()
{
    int n,num1,num2,num3,i,j=0,arr[100];
    scanf("%d",&n);
    num1=0;
    num2=1;
    arr[1]=num1;
    arr[2]=num2;
    j=3;
    for(i=1;i<=n;i++)
    {
        num3=num1+num2;
        arr[j]=num3;
        num1=num2;
        num2=num3;
        
    }
   for(i=0;i<20;i++)
   {
       printf("%d ",arr[i]);
   }
   
    return 0;
}