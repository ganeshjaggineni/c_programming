/*
Seetha, a Maths teacher taught her students about the multiplication table. Seetha decides to give chocolate to the students, who write the multiplication table of the given number. She asked the student to write the result of multiplied value as shown in the sample output. Help the students to get chocolate. 

Input format
Number

Output format
Result of 1st table in 1st line,

Result of 2nd table in 2nd line,

Result of 3rd table in 3rd line,

upto

Result of Nth table in Nth line



Refer the sample outputs for the exact format.

Sample testcases

Input 1
5

Output 1
1 2 3 4 5 
2 4 6 8 10 
3 6 9 12 15 
4 8 12 16 20 
5 10 15 20 25 

Input 2
9

Output 2
1 2 3 4 5 6 7 8 9 
2 4 6 8 10 12 14 16 18 
3 6 9 12 15 18 21 24 27 
4 8 12 16 20 24 28 32 36 
5 10 15 20 25 30 35 40 45 
6 12 18 24 30 36 42 48 54 
7 14 21 28 35 42 49 56 63 
8 16 24 32 40 48 56 64 72 
9 18 27 36 45 54 63 72 81 

*/

//program

#include<stdio.h>
int main()
{
    int table;
    scanf("%d",&table);
    for(int i=1;i<=table;i++)
    {
        for(int j=1;j<=table;j++)
            printf("%d ",i*j);
            printf("\n");
    }
    return 0;
}