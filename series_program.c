/*
Ankita is interested in finding the sum of a certain series. Write a program to obtain the value of n and find the sum of the following series.

1/1-1/2+1/3-1/4+....1/n

Input format
The input consists of a single value n.

Output format
The output prints the sum of the series.

Sample testcases

Input 1
5

Output 1
0.783333

*/
//program

#include<stdio.h>
int main()
{
    int num;
    double sum=0;
    int i;
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(i%2==0)
        {
            sum=sum-(1.0/i);
        }
        else
        {
            sum=sum+(1.0/i);
        }
    }
    printf("%lf",sum);
    return 0;
}