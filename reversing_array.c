/*
Write a program to get an array with N integer elements, and reverse all elements of given array using program.

Input format
Number of array of elements

Array elements in second line separated by space

Output format
Reversed array elements

Sample testcases

Input 1
5
10 10 20 30 10

Output 1
10 30 20 10 10 

*/

//program

#include<stdio.h>
int main()
{
    int num,arr[100];
    int i;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    for(i=num-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}