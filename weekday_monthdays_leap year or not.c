/*
Balaji Kamal, a famous astrologer is developing software to automate his work. He wants to find weekday, number of days in the given month and year type (Leap year or not). Write a program to implement the following based on the user’s choice.



Read weekday number (1-7) and print weekday name (Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, and Saturday) according to given weekday number using switch case statement. 
Read month value and print the total number of days in input month using switch.
Check whether the given year is a leap year or not
Input format
First line of input is Week Day Number (Sunday=1, Monday=2, Tuesday=3, Wednesday=4, Thursday=5, Friday=6, Saturday=7)



Second line of input is Month Number



Third line of input is the year

Output format
Weekday name

Number of days in the given month

Leap year or not



Refer sample outputs for exact statement and format

Code constraints
1<=Weekday Number<=7

1<=Month Number<=12



Sample testcases
Input 1
5
8
2018

Output 1
Thursday
31 Days
2018 is not a leap year

Input 2
8
25
1996

Output 2
Invalid Input

Input 3
6
2
2015

Output 3
Friday
Either 28 or 29 Days in this Month
2015 is not a leap year
*/

//program

#include<stdio.h>
int main()
{
    int weekday,month,year;
    scanf("%d",&weekday);
    scanf("%d",&month);
    scanf("%d",&year);
    
    if((weekday>0&&weekday<=7)&&(month>1&&month<=12))
    {
    switch(weekday)
    {
        case 1:printf("Sunday");
            break;
        case 2:printf("Monday");
            break;
        case 3:printf("Tuesday");
            break;
        case 4:printf("Wednesday");
            break;
        case 5:printf("Thursday");
            break;
        case 6:printf("Friday");
            break;
        case 7:printf("Saturday");
        break;
    }
    
    
    switch(month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:printf("\n31 Days\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:printf("\n30 Days\n");
            break;
        case 2:printf("\nEither 28 or 29 Days in this Month\n");
        break;
    }
    
   
    if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
                printf("%d is a leap year",year);
            else
            printf("%d is not a leap year",year);
        }
        else
            printf("%d is  a leap year",year);
    }
    else 
    {
        printf("%d is not a leap year",year);
    }
    }
    
    
    else
    {
        printf("\nInvalid Input");
    }
    
    
    
    
    return 0;
}