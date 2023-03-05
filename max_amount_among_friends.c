/*
There are 3 friends named John, Ram, Joseph who worked together. After their work, they spent their money. Given their salaries and expenditures, find the friend who has more money. 

Input format
The input line contains their salaries and followed by their corresponding expenditures.

Example :

Input : 230 200 240 40 50 20

Here 230,200 & 240 are salaries and 40,50 & 20 are their expenditure respectively.

Output format
Print the maximum amount among those friends, after spending their expenditures.

Sample testcases
Input 1
230 200 240 40 50 20
Output 1
220
*/
//program
#include <stdio.h>
int main()
{
    int sal1,sal2,sal3;
    int exp1,exp2,exp3;
    int rem_amt1,rem_amt2,rem_amt3;
    int max_amt;
    scanf("%d%d%d",&sal1,&sal2,&sal3);
    scanf("%d%d%d",&exp1,&exp2,&exp3);
    rem_amt1=sal1-exp1;
    rem_amt2=sal2-exp2;
    rem_amt3=sal3-exp3;
    if(rem_amt1>rem_amt2&&rem_amt1>rem_amt3)
    {
        max_amt=rem_amt1;
    }
    else if(rem_amt2>rem_amt1&&rem_amt2>rem_amt1)
    {
        max_amt=rem_amt2;
    }
    else
    {
        max_amt=rem_amt3;
    }
    printf("%d",max_amt);
    return 0;
}