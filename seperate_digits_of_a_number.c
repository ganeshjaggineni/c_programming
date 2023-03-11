/*
Ranjitha wants to separate the individual digits of a 5 digit number and print it to pass in her tests. Write a C program for the same. 

Input format
Input consists of a single 5 digit number.

Output format
Output consists of the individual digits of the 5 digit number separated by 3 spaces each.

Sample testcases

Input 1
42139

Output 1
4   2   1   3   9   

*/
//program
#include<stdio.h>
int main()
{
    int num,first=0,second,third,fourth,last;
    scanf("%d",&num);
    
    first=num/10000;
    second=(num/1000)%10;
    third=(num/100)%10;
    fourth=(num/10)%10;
    last=num%10;
    
    printf("%d %d %d %d %d",first,second,third,fourth,last);
    return 0;
}
