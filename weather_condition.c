/*
Jim likes to travel. He goes to a different place during his vacation and enjoy. Wherever he goes, he will update the weather status to his parents based on the temperature. He wants to write a program to get temperature(C) in Celsius as input and display the weather status as per the below conditions. Help Jim.



COLD -40 <= C < 10
COMFORTABLE 10 <= C < 20
HOT 20 <= C < 50
OUT OF RANGE C < -40 or C >= 50 
Input format
Temperature without units

Output format
Weather status as per the given conditions

Sample testcases

Input 1
8.5

Output 1
COLD

Input 2
-42

Output 2
OUT OF RANGE
*/

//program

#include<stdio.h>
int main()
{
    float temperature;
    scanf("%f",&temperature);
    
    if(temperature<10&&temperature>=-40)
    {
        printf("COLD");
    }
    else if(temperature<20&&temperature>=10)
    {
        printf("COMFORTABLE");
    }
    else if(temperature<50&&temperature>=20)
    {
        printf("HOT");
    }
    else
    {
        printf("OUT OF RANGE");
    }
    return 0;
}