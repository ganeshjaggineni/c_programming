/*
John faced a difficulty in calculating the purchase value of same product with varied quantity. So he tries to transfer this multiplication job to his robot.

Help John by writing a program to the robot to reduce his difficulty.

Input format
Two positive integers which are cost and number of the product purchased in each line

Output format
Single positive integer which is the quantitative total value of that product purchased



Note: Printing unwanted or ill-formatted data to output will cause the test cases to fail

Sample testcases
Input 1
10
8

Output 1
80

*/

//program
#include <stdio.h>
int main()
{
    int cost;
    int no_of_product;
    scanf("%d",&cost);
    scanf("%d",&no_of_product);
    printf("%d",cost*no_of_product);
    return 0;
}
