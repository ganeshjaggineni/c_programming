/*
Manoj lives in a snowy country like Canada. He records the rainfall each month and wants to identify the rate of rainfall for that particular year. Store the rainfall of each of the 12 months in an array. Calculate the sum, average and the month with low and high rainfall. Write a program for the same.

Input format
Input consists of the list of 12 integers that represents the value of rainfall each month.

Output format
The first line of the output consists of the sum.

The second line has an integer that represents the average rainfall.

The third line prints the month with lowest rainfall.

The fourth line of the output prints the month with highest rainfall.

Sample testcases

Input 1
9 8 5 4 2 3 1 16 13 18 17 27

Output 1
Total rainfall : 123
Average rainfall : 10
Lowest rainfall month : 7
Highest rainfall month : 12

Input 2
9 8 -5 4 2 3 1 16 13 18 17 27

Output 2
Invalid input

*/

//program

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num,arr[500],sum,avg,min,max,min_month,max_month;
    
    for(int i=0;i<12;i++)
    {
        scanf("%d",&num);
        
        if(num>=0)
        {
            arr[i]=num;
        }
        else
        {
            printf("Invalid input");
            exit(0);
        }
    }
    min=max=arr[0];
    for(int i=0;i<12;i++)
    {
        sum=sum+arr[i];
        
        
        if(arr[i]<=min)
        {
            min=arr[i];
            min_month=i+1;
        }
        if(arr[i]>=max)
        {
            max=arr[i];
            max_month=i+1;
            
        }
        
    }
    
    avg=sum/12;
    printf("Total rainfall : %d",sum);
    printf("Average rainfall : %d",avg);
    printf("\nLowest rainfall month : %d",min_month);
    printf("\nHighest rainfall month : %d",max_month);
    return 0;
}