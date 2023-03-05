/*
Ankith's brother Bharat is working in an IT services company in the USA. Ankith wants to pay his college fees and asked his brother to send money. Since Bharat is working in the USA, he will send money in Dollars. Ankit needs to calculate how much rupees he will get from his brother. Help Ankith to convert from Dollar to Rupee by writing a suitable program.



(Note: 1 Dollar =72.10 Rupee).

Input format
Dollar in the first line without symbol or unit

Output format
Equivalent Rupee for the given Dollar value as shown in the sample output.

Sample testcases
Input 1
10
Output 1
10.00 Dollar = 721.00 Rupees
*/
//program
#include <stdio.h>
int main()
{
    double dollar,rupees;
    scanf("%lf",&dollar);
    rupees=dollar*72.10;
    printf("%.2lf Dollar = %.2lf Rupees",dollar,rupees);
    return 0;
}