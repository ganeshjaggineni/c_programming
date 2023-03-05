/*
KG theatre in the city is newly renovated. So, they decided to give a 20% discount if one person buys more than 15 tickets. Also, they give an extra 5% discount, if he/she is a student. There won't be any discount if anyone purchases less than 15 tickets. The ticket rate may vary based on the movie.



Karthik has planned to book the tickets for his juniors and friends. Help Karthick to calculate the amount and display whether the discount is applied or not.

Input format
Ticket rate in first line

Number of tickets in second line

Category in third line

Output format
Discount details in first line

Total amount in second line

(Refer sample outputs for exact text and format)

Code constraints
Category =1 (for Students)

Category !=1 (for others)

Sample testcases

Input 1
100
20
1

Output 1
Discounts Applied - Maximum Tickets and Student
Total Amount - 1500.00

Input 2
100
20
2

Output 2
Discount Applied - Maximum Tickets
Total Amount - 1600.00

Input 3
100
10
1

Output 3
No Discount Applied
Total Amount - 1000.00

Input 4
100
10
2

Output 4
No Discount Applied
Total Amount - 1000.00
*/

//program

#include<stdio.h>
int main()
{
    float ticket_rate,ticket_count,category;
    float actualprice,discount,price;
    scanf("%f",&ticket_rate);
    scanf("%f",&ticket_count);
    scanf("%f",&category);
    
    actualprice=ticket_rate*ticket_count;
    if(ticket_count>15)
    {
        if(category==1)
        {
        discount=(25*actualprice)/100;
        price=actualprice-discount;
        printf("Discounts Applied - Maximum Tickets and Student");
        printf("\nTotal Amount - %.2f",price);
        }
        if(category==2)
        {
            discount=(20*actualprice)/100;
            price=actualprice-discount;
            printf("Discount Applied - Maximum Tickets");
            printf("Total Amount - %.2f",price);
        }
    }
    else if(ticket_count<15)
    {
        if(category==1||category==2)
        {
            printf("No Discount Applied");
            printf("Total Amount - %.2f",actualprice);
        }
    }
    return 0;
}