/*
Naren and Aravind play a game. They have to tell all the prime numbers between any two numbers entered by the user. Write a C program for the same.

Input format
Input consists of two values separated by a space.

Output format
Output consists of a list of prime numbers between those two values separated by a space.

Sample testcases

Input 1
1 50
Output 1
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 

Input 2
1580 2000
Output 2
1583 1597 1601 1607 1609 1613 1619 1621 1627 1637 1657 1663 1667 1669 1693 1697 1699 1709 1721 1723 1733 1741 1747 1753 1759 1777 1783 1787 1789 1801 1811 1823 1831 1847 1861 1867 1871 1873 1877 1879 1889 1901 1907 1913 1931 1933 1949 1951 1973 1979 1987 1993 1997 1999 

*/

//program

#include<stdio.h>
int main()
{
    int low,high,count=0;
    scanf("%d%d",&low,&high);
    for(int i=low;i<=high;i++)
    {
        count=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==2)
            printf("%d ",i);
    }
    return 0;
}