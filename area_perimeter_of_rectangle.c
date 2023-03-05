/*
After Vivek's coaching, his sister's performance in maths has improved very much. So, Vivek wants to test her knowledge of geometry. So he asked her sister to calculate, Hypotenuse, Area and Perimeter of a right-angled triangle. He will give values of two sides.



Note : Use suitable formula to calculate Hypotenuse, Area and Perimeter

Input format
Length of Side A

Length of Side B

Output format
Display area and Perimeter as shown in sample output

Sample testcases
Input 1
3
4
Output 1
Area: 6.000000
Perimeter: 12.000000
*/
#include <stdio.h>
#include <math.h>
int main()
{
    double side_a,side_b,side_c;
    double area,perimeter,hypotenuse;
    scanf("%lf%lf",&side_a,&side_b);
    
    hypotenuse=(side_a*side_a)+(side_b*side_b);
    side_c=sqrt(hypotenuse);
    area=0.5*side_a*side_b;
    perimeter=side_a+side_b+side_c;
    printf("Area: %lf\n",area);
    printf("Perimeter: %lf",perimeter);
    return 0;
}