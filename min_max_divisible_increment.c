/*
Ankit is new to programming class and his instructor asked him to write a simple program to check his programming knowledge.



The program should get minimum value, maximum value, increment value(N) and divisible value(M) from the user. It should display the series as per the increment(N) and sum of numbers divisible by M.



Refer to sample input and output.

Input format
Minimum Value

Maximum Value

Increment

Divisible Value

Output format
Series of element in one line separated by space

Sum of elements divisible by M in the second line

Sample testcases

Input 1
20
50
3
5

Output 1
20 23 26 29 32 35 38 41 44 47 50 
Sum : 105

Input 2
10
1000
50
50

Output 2
10 60 110 160 210 260 310 360 410 460 510 560 610 660 710 760 810 860 910 960 
Sum : 0

*/
//program

#include<stdio.h>
int main()
{
    int min,max,inc,divisible,sum=0;
    scanf("%d%d%d%d",&min,&max,&inc,&divisible);
    while(min<=max)
    {
        if(min%divisible==0)
        {
            sum=sum+min;
        }
        printf("%d ",min);
        min=min+inc;
       
        
    }
    printf("\nSum : %d",sum);
    return 0;
}