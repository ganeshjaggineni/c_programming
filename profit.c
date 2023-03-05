/*
John made a huge profit out of his grocery shop. But, his profit got reduced due to his wrong calculation in providing the balance amount to his customers.



Once he started to realize his mistakes, he is trying to make out this work with his robot. So that his profit is safe.

He finds you to provide a programming solution to his problem. Get purchase value and cash given by the customer and calculate the balance amount.

Input format
Two positive integers,

First one is the purchase value and other one is the Cash given by the customer in each line

Output format
Numerical value which is the balance amount to be given back to the Customer



Note: Printing unwanted or ill-formatted data to output will cause the test cases to fail

Sample testcases
Input 1
28
100
Output 1
72

*/
//program
#include<stdio.h>
int main()
{
    int purchase;
    int cost;
    scanf("%d%d",&cost,&purchase);
    printf("%d",-(cost-purchase));
    return 0;
}