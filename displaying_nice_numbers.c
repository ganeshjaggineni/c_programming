/*
The car number plate number is a number in the range of 0001 to 9999. Get the current number (Can be any number in the range 1 - 9999) and display the next nice numbers you like next after the current number.



You want a number that holds the following rule:

First two digit and third & forth digit are same.(Ex.1212)

Input format
First line of input is Current car number plate number

Output format
Display the nice number as per given rule

Code constraints
1<=Current car number plate number<=9999

Sample testcases

Input 1
8765

Output 1
8787
8888
8989
9090
9191
9292
9393
9494
9595
9696
9797
9898
9999

*/
//program

#include<stdio.h>
int main()
{
    int num,firstnum,secondnum,thirdnum,fourthnum,i;
    scanf("%d",&num);
    for(i=num;i<=9999;i++)
    {
        firstnum=i/1000;
        thirdnum=(i/10)%10;
        if(firstnum==thirdnum)
        {
            secondnum=(i/100)%10;
            fourthnum=i%10;
            if(secondnum==fourthnum)
            {
                printf("%d\n",i);
            }
        }
    }
    return 0;
    
}