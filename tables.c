/*
Seetha, a Maths teacher taught her students about multiplication table. Seetha decides to give chocolate to the students, who write multiplication table of given number upto the given limit. Help the students to get a chocolate. Display multiplication table as shown in sample output.

Input format
Table Number in first line as integer

Table Limit in second line as integer

Output format
Display multiplication table as shown in sample output.

Sample testcases
Input 1
26
12

Output 1
1 * 26 = 26
2 * 26 = 52
3 * 26 = 78
4 * 26 = 104
5 * 26 = 130
6 * 26 = 156
7 * 26 = 182
8 * 26 = 208
9 * 26 = 234
10 * 26 = 260
11 * 26 = 286
12 * 26 = 312

*/

//program

#include<stdio.h>
int main()
{
    int tablenum,limit;
    scanf("%d%d",&tablenum,&limit);
    for(int i=1;i<=limit;i++)
    {
        printf("%d * %d = %d\n",i,tablenum,i*tablenum);
    }
    return 0;
}