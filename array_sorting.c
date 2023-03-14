/*
Ramu wants to get N elements in an array and a number to be multiplied with the array elements. He wants to display the multiplied result in descending order. Help Ramu to complete this task. 

Input format
Number of array elements in the first line(N)

N array elements in second-line separated by space

Number to be multiplied with array elements

Output format
Array elements in descending order after multiplied with given number (space separated)

Sample testcases

Input 1
5
10 30 20 50 40
2

Output 1
100 80 60 40 20

*/
//program

#include<stdio.h>
int main()
{
    int n,arr[500],mul_arr[500],mul,temp;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   
    scanf("%d",&mul);
    for(int i=0;i<n;i++)
    {
        mul_arr[i]=arr[i]*mul;
    }
    
    
    for(int i=0;i<n;i++)
    {
       
       for(int j=0;j<n;j++)
       {
           if(mul_arr[j]<mul_arr[j+1])
           {
               temp=mul_arr[j];
               mul_arr[j]=mul_arr[j+1];
               mul_arr[j+1]=temp;
           }
       }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",mul_arr[i]);
    }
    return 0;
} 