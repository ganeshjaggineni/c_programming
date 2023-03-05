/*
Jennie's friend Siva has joined in a bank as a cashier. He has currency notes of denominations 10, 50, 100 and 500. If the amount to be withdrawn is input through the keyboard in thousands, find the total number of minimum currency notes of each denomination the cashier will have to give to the withdrawer. 

Input format
Amount as integer

Output format
Denomination as shown in sample output

Code constraints
Amount should be multiples of 10

Sample testcases
Input 1
1260

Output 1
Denomination
500 = 2
100 = 2
50 = 1
10 = 1

Input 2
3000

Output 2
Denomination
500 = 6
100 = 0
50 = 0
10 = 0
*/

//program

#include <stdio.h>
int main()
{
    int amount;
    int fivehundred,hundred,fifty,ten,rem=0;
    scanf("%d",&amount);
    
    
        fivehundred=amount/500;
        rem=amount%500;
        hundred=rem/100;
        rem=rem%100;
        fifty=rem/50;
        rem=rem%50;
        ten=rem/10;
        
    
    printf("Denomination\n");
    printf("500 = %d\n100 = %d\n50 = %d\n10 = %d\n",fivehundred,hundred,fifty,ten);
    return 0;
}