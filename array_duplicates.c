/*
Write a program to find out the repeated element in an unsorted Array. Size of the array is N.

Input format

The first line of input contains number of elements in an array(N)

The second line of input contains N space separated array elements.

Output format
Output contains duplicate numbers present in the array.

Sample testcases

Input 1
8
4 2 1 9 8 4 8 1 

Output 1
4 1 8 

*/

//program

#include<stdio.h>
int main()
{
    int n,arr[500],i,j,count;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
     
    for(i=0;i<n;i++)
    {
        count=1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count>1)
        {
            printf("%d ",arr[i]);
        }
        
    }
        
    
    
    return 0;
}