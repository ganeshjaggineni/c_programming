/*
Aravind wants to write a program that prompts the user for an integer value and then prints the individual digits of the number on a line with a space between the digits. The first line is to start with left most digit and print all remaining digits; the second line is to start with the second digit from the left and print out remaining digits, and so on. 

Input format
A number in the first line

Output format
Display the number as shown in sample outputs

Sample testcases
Input 1
8712345
Output 1
8 7 1 2 3 4 5 
7 1 2 3 4 5 
1 2 3 4 5 
2 3 4 5 
3 4 5 
4 5 
5 
Input 2
5005
Output 2
5 0 0 5 
0 0 5 
0 5 
5
*/

//program

#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int i=0,j=0,arr[10],count=0,rem;
    while(num>0)
    {
        rem=num%10;
        arr[i]=rem;
        num=num/10;
        i++;
        count++;
    }
    
    for(j=count-1;j>=0;j--)
    {
        printf("%d ",arr[j]);
    }
    return 0;
}