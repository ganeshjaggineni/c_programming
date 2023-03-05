/*
Raju is a Civil Engineer. He is writing software to automate his work. As a part of his requirement, he wants to calculate the circle diameter, circumference, and area. Help Raju to complete his task. Get radius as input.

Input format
Circle radius

Output format
Diameter, Area and Circumference as shown in the sample output

Sample testcases

Input 1
7

Output 1

Diameter: 14.000000
Area: 154.000000
Circumference: 44.000000
*/

//program
#include<stdio.h>
#include <math.h>
int  main()
{
    double radius;
    double diameter,area,circumference;
    scanf("%lf",&radius);
    diameter=2*radius;
    area=22*radius*radius/7;
    circumference=2*22*radius/7;
    printf("Diameter: %f\n",diameter);
    printf("Area: %f\n",area);
    printf("Circumference: %f",circumference);
    
}