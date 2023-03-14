/*
Niranjan has a set of numbers stored in an array in which he has to find the identical numbers and its positions along with the number of occurrences. Write a program to find the same.

Input format
The first line of the input consists of a single value n.

The next n lines consists of the elements of the array.

Output format
The first line of the output consists of the duplicate element.

The second line of the output consists of its index values.

The third line of the input contains number of occurrences.



Refer sample output for more than one duplicate element.

Sample testcases

Input 1
8
45 23 78 64 11 22 77 23

Output 1
Similar element : 23
Positions : 2 8
Occurence : 2

Input 2
5
15 15 23 15 23

Output 2
Similar element : 15
Positions : 1 2 4
Occurence : 3
Similar element : 23
Positions : 3 5
Occurence : 2

*/
//program

#include<stdio.h>
int main()
{
    int n,arr[500],repeat[500],similar=0,occur=1,checked=0,k=1;
    
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n;i++)
    {
       
        for(int j=i+1;j<n;j++)
        {
            
            if(arr[i]==arr[j]&&arr[i]>=0)
            {
               
                occur++;
                arr[j]=-1;
                if(k==1)
                {
                printf("Similar element : %d\n",arr[i]);
                printf("Positions :%d ",i+1);
                k=0;
                }
            printf("%d ",j+1);
                
            
            }
        }
            
            if(occur>1)
            {
                printf("\nOccurence : %d\n",occur);
                k=1;
                occur=1;
            }
        
       
        
    
        
    }
    return 0;
}
