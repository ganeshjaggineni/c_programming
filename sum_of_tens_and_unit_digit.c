/*
Keerthana is learning about units and tens digit in school. Her teacher gives a task for find the sum of the units and tens digit of any given number.

For example, in 231, 1 is the units digit and 3 is tens digit. Hence the sum is 4.

She feels to lazy to do this assignment and hence allocates the job to her toy robot. Write the code that is required to do this assignment.

Input format
The first line denotes the value of N.    

Output format
The first line contains the sum of tenth and unit digits.

Sample testcases
Input 1
231
Output 1
4
*/
//program
#include <stdio.h>
int main()
{
    int num,unit,tens,sum,temp;
    scanf("%d",&num);
    unit=num%10;
    temp=num/10;
    tens=temp%10;
    sum=unit+tens;
    printf("%d",sum);
    return 0;
}