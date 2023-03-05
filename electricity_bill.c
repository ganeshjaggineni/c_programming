/*
Magesh, the electrician of the famous textile industry in Bangalore wants to calculate the electricity bill for his company. The electricity rates for industrial units in Bangalore is Rs 4.25 per unit for the first 500 units and Rs 4.95 per units for consumption from 501 to 1000 units and Rs.5.25 per unit for consumption above 1000 units.



Help Magesh by writing a suitable program to get the previous reading and current reading and calculate the electricity bill amount.

Input format
Previous reading in first line

Current reading in second line

Output format
Calculated electric city bill as per given information

Code constraints
Last Reading <=Current Reading

Sample testcases

Input 1
23500
23800

Output 1
1275.000000

Input 2
42560
43256

Output 2
3095.200000

Input 3
67890
68895

Output 3
4626.250000

*/

//program

#include <stdio.h>
#include<math.h>
int main()
{
    double prev,curr,diff_unit,price;
    scanf("%lf%lf",&prev,&curr);
    diff_unit=curr-prev;
    
    if(diff_unit<=500)
    {
        price=diff_unit*4.25;
    }
    else if(diff_unit>=501&&diff_unit<=1000)
    {
        price=500*4.25+(diff_unit-500)*4.95;
    }
    else if(diff_unit>1000)
    {
        price=500*4.25+500*4.95+(diff_unit-1000)*5.25;
    }
    printf("%.6lf",price);
    return 0;
}