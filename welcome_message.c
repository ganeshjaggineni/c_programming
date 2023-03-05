/*
John's new robot in his Grocery Shop has attracted many customers. Now he plans to make the robot to wish a customized welcome message for his regular customers. Write a program to help him in the task.

Input format
Input is a name of a person [character array]

Output format
Welcome message as shown in sample output



Note: Printing unwanted or ill-formatted data to output will cause the test cases to fail

Sample testcases
Input 1
Karthic

Output 1
Hi Karthic, Welcome to John's Grocery Shop

*/
//program
#include <stdio.h>
int main()
{
    char name[20];
    scanf("%s",name);
    printf("hi %s\, Welcome to John\'s Grocery Shop");
    return 0;
}