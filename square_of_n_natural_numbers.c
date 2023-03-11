/*
Renu and Banu are playing a number game. Renu asked Banu to display the square of N natural numbers and their sum.

Input format
Number of terms in the series

Output format
Display the square of natural number in first line separated by space in first line

Sum of squares of natural number in second line

Sample testcases

Input 1
5

Output 1
1 4 9 16 25 
55

*/
//program

#include<stdio.h>
int main()
{
    int num,sum=0,res=0,i;
    scanf("%d",&num);
    
    for(i=1;i<=num;i++)
    {
        res=i*i;
        sum=sum+res;
        printf("%d ",res);
    }
    printf("\n%d",sum);
    return 0;
}