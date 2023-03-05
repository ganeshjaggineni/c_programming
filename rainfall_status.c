Rainfall is classified as per the table below.




Classification     One-hour category(mm)

No Rain            0-1

Light Rain         ≥1-5

Moderate Rain      ≥ 5-10

Heavy Rain         ≥ 10



Write a program to display the rainfall status based on the above information

Input format
Rainfall (one hour category)

Output format
Classification of rainfall based on given information

Sample testcases
Input 1
3.4
Output 1
Light Rain

//program
#include<stdio.h>
int main()
{
    float r;
    scanf("%f",&r);
    if(r>=10)
    {
        printf("Heavy Rain");
    }
    else if(r>=5&&r<10)
    {
        printf("Moderate Rain");
    }
    else if(r>=1&&r<5)
    {
        printf("Light Rain");
    }
    else
    {
        printf("No Rain");
    }
    
    return 0;
}