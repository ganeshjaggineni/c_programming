/*
Check if a car number plate is a fancy number or not. You consider a number as fancy number if the digits are continuous either incontinuous increasing or decreasing number. (Ex.1234, 7654 are fancy and 7765 is not fancy)

Input format
Four digit number in first line

Output format
Fancy number type

(Refer sample output for statement and format )

Code constraints
Number should not more than four digits

Sample testcases
Input 1
1234
Output 1
Increasing fancy number
Input 2
7654
Output 2
Decreasing fancy number
Input 3
1256
Output 3
Not fancy number
*/

//program

#include<stdio.h>
int main()
{
    int num;
    int first=0,second=0,third=0,fourth=0;
    scanf("%d",&num);
    first=num/1000;
    second=(num/100)%10;
    third=(num/10)%10;
    fourth=num%10;
    
    if((first==second-1)&&(second==first+1)&&(third==second+1)&&(fourth==third+1))
    {
        printf("Increasing fancy number");
    }
    else if((first==second+1)&&(second==first-1)&&(third==second-1)&&(fourth==third-1))
    {
        printf("Decreasing fancy number");
    }
    else
    {
        printf("Not fancy number");
    }
    return 0;
}