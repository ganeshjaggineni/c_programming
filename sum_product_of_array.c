/*
Given an array A consist of N number of elements.If the sum of the element is "even" print the sum of the element.If the sum of the element is "odd" print the product of the element.

Input format
The first line of input contains the number of elements N

The second line of input represents the elements A1 , A2 , A3 . . . . . AN

Output format
Print the desired result

Sample testcases

Input 1
5 
1 2 3 4 4

Output 1
14

Input 2
4 
10 20 52 5

Output 2
52000

*/

//program

#include<stdio.h>
int main()
{
    int n,arr[1500],sum=0,mul=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
  
   
        if(sum%2==0)
        {
            printf("%d",sum);
        }
        else
        {
            for(int i=0;i<n;i++)
                mul=mul*arr[i];
            printf("%d",mul);
        }
    
    return 0;
}