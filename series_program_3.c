/*
Ragu is attending his placement test online. This is the last chance for him to get placed. He wants to write a code to find the sum of a series. Write a program for the same. The series is

1/1! + 2/2! + 3/3! + 4/4! +…….+ n/n! .

Input format
Input consists of a single integer n.

Output format
Output consists of a single value that represents the sum of the series.

Note : Print 2 digits after decimal

Sample testcases

Input 1
5

Output 1
2.71

*/

//program

#include<stdio.h>
int main()
{
    double n,fact=1,i,j;
    double sum=0;
    scanf("%lf",&n);
    for(int i=1;i<=n;i++)
    {
    
            fact=fact*i;
            sum=sum+(i/fact);
            
    }
    printf("%.2lf",sum);
            

    return 0;
}