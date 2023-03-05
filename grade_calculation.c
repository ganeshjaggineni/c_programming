/*
Kalpana is working in the data entry section in Diamond Jubilee Hr Sec School. She needs to assign grades to the students based on the given marks. Since it is difficult to assign grades manually for all students, she decided to write a program to automate her work. Help Kalpana to complete his work by writing a suitable program.

Range of score (x)     Grade

80<=x<=100                 A

70<=x<=80                B

60<=x<=70                  C

0<=x<=60                   D

Others		     Error message


Input format
Mark in first line

Output format
Grade as per given conditions /Invalid Mark

Code constraints
1<=Mark<=100

Sample testcases
Input 1
96

Output 1
A

Input 2
125

Output 2
Invalid Mark
*/

//program

#include<stdio.h>
int main()
{
    int marks;
    scanf("%d",&marks);
    
    if(marks<=100&&marks>=80)
    {
        printf("A");
    }
    else if(marks<80&&marks>=70)
    {
        printf("B");
    }
    else if(marks<70&&marks>=60)
    {
        printf("C");
    }
    else if(marks<60&&marks>=0)
    {
        printf("D");
    }
    else
    {
        printf("Invalid Mark");
    }
    return 0;
}