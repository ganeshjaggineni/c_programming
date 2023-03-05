/*
Siva noticed a dog, which runs from one side of a park to the other. He wants to calculate the speed of the dog. He measures the length of the park(in meters) and monitors the time take(in seconds) by dog to cross the edge. Help Siva to calculate the speed of the dog.

Input format
Distance

Time taken

Output format
Speed of dog with proper units

Sample testcases
Input 1
80
16
Output 1
5.00 m/s
*/
//program
#include <stdio.h>
int main()
{
    float distance,timetaken;
    float speed;
    scanf("%f",&distance);
    scanf("%f",&timetaken);
    speed=distance/timetaken;
    printf("%.2f m/s",speed);
    
 return 0;   
}