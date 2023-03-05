/*
A Person invests some amount in a savings account yielding 5% interest. Assuming that all interests is left on deposit in the account, calculate and print the amount of money in the account at the end of each year for 10 years.



Use the following formula for determining these amounts:

           a=p(1+r)n

Where

p is Original amount invested(user input)

r is annual interest rate (5%)

n is the number of years(10 Years)

a is the amount on deposit at the end of the nth year.



Refer Sample input and output

Input format
Amount to be deposited in account

Output format
Amount at the end of every year for 10 years as shown in sample output

Sample testcases
Input 1
1000
Output 1
1050.00
1102.50
1157.62
1215.51
1276.28
1340.10
1407.10
1477.46
1551.33
1628.89
*/
//program
#include<stdio.h>
#include<math.h>
int main()
{
    float  amount_end_a,amount_p,rate_r=0.05;
    int years_n=10;
    int i=0;
    scanf("%f",&amount_p);
    while(i<=years_n)
    {
        amount_end_a=(amount_p*(1+rate_r)^years_n;
        printf("%.2f\n",amount_end_a);
        i++;
    }
    return 0;
}