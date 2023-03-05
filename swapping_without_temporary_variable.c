/*
Reethu wants to check the mathematical skills of Swetha and Savitha. She asks Swetha and Savitha to swap two numbers without using the third variable. Help them to swap two numbers without using the third variable.

Input format
A single line of space-separated Input consists of 2 integers.

Output format
A single line of space-separated output consists of 2 swapped integers.

Code constraints
Don't use temporary variables.

Sample testcases
Input 1
4 5
Output 1
5 4
*/
//program
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,M;
    scanf("%d%d",&N,&M);
N=N+M;
M=N-M;
N=N-M;
    printf("%d %d",N,M);
    return 0;
}