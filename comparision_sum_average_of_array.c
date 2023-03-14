/*
In a gymnastics or diving competition, each contestant’s score is calculated by dropping the lowest and highest scores and then adding the remaining scores. Write a program that allows the user to enter eight judges scores and then outputs the point received by the contestant. A judge awards point between 1 and 10, with 1 being the lowest and 10 being the highest. 

Input format
Input consists of 8 scores separated by a space.

Output format
The first line of the output consists of the lowest score.

The second line of the output consists of the highest score.

The third line of the output consists of the total dropping the lowest and highest scores.

The fourth line of the output prints the average.

Code constraints
Round off the output to two decimal places.



Sample testcases

Input 1
9.1  9.0  8.9  8.8  9.4  7.9  8.6  9.8

Output 1
Lowest score : 7.90
Highest score : 9.80
Total point : 53.80
Average : 8.97

*/
//program

#include<stdio.h>
int main()
{
    float arr[500],min,max,sum=0,total;
    for(int i=0;i<8;i++)
    {
        scanf("%f",&arr[i]);
    }
    min=arr[0];
    max=arr[0];
    for(int i=0;i<8;i++)
    {
        if(arr[i]<=min)
        {
            min=arr[i];
        }
        if(arr[i]>=max)
        {
            max=arr[i];
        }
        sum=sum+arr[i];
    }
    printf("Lowest score : %.2f",min);
    printf("\nHighest score : %.2f",max);
    total=sum-min-max;
    
    printf("\nTotal point :%.2f",total);
    printf("\nAverage : %.2f",total/6);
    return 0;
}