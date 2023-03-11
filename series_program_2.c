/*
Arjun wants to test the mathematical knowledge of his brother. So he asked his brother to find the sum of below series.



a1!+a22!+a33!+.......+ann!



Sample Calculation:

Input : a = 2 and n = 5



2/1! + 22/2! + 23/3! + 24/4! +25/5! = 2/1 + 4/2 + 8/6 + 16/24 + 32/120 = 6.26667



Input format
Value of a in first line

Value of n in second line

Output format
Print the sum of series

Sample testcases

Input 1
2
5

Output 1
6.266667

*/
//program

#include<stdio.h>
#include<math.h>
int main()
{
    int a,n;
    unsigned long fact=1;
    float sum=0.0f;
    double result;
    scanf("%d",&a);
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
        sum=sum+(float(pow(a,i))/float(fact));
    
        
    }
    printf("%f",sum);
    return 0;
}