/*
Get the input(N) as float number from the user and display the numbers in one, two and three digit floating numbers as displayed in sample output.

Input format

A float number (N).

Output format

One digit floating number

Two digit floating number

Three digit floating number.

*/
//program
#include <stdio.h>
#include <math.h>
int main()
{
    float num;
    scanf("%f",&num);
    printf("%.1f\n",num);
    printf("%.2f\n",num);
    printf("%0.3f\n",num);
    return 0;
}