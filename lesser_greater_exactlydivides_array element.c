/*
Naren wants to play a number game with his friends. He will give a set of numbers and select one number from it. His friends have to say the number of elements greater than and smaller than that particular element and find how many elements exactly divides the selected element.



Write a program to get integer inputs in an array and select an element from the input and count the 



Number of elements which are greater than the selected element 

Number of elements which are lesser than the selected element 

Number of elements that exactly divides the selected element 

Input format
The first line consists of N

The second line of the Input consists of the set of elements separated by a space.

The third line of the input consists of the selected input.

Output format
The first line of the output consists of the number of elements greater than the particular element.

The second line consists of the number of elements lesser than the particular element.

The third line of the output consists of the number of elements that exactly divides the selected element.

Code constraints
Don't include the selected number in any of the cases.

Sample testcases

Input 1
10
12 18 98 72 42 6 3 9 10 11
72

Output 1

Greater : 1
Lesser : 8
Exactly divides : 5

*/
//program

#include<stdio.h>
int main()
{
    int n,arr[500],key,greater=0,lesser=0,divide=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&key);
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]>key)
        {
            greater++;
        }
        else if(arr[i]<key)
        {
            lesser++;
        }
        if(key%arr[i]==0)
        {
            if(key!=arr[i])
            {
            divide++;
                
            }
    
        }
    }
    printf("Greater : %d",greater);
    printf("\nLesser : %d",lesser);
    printf("\nExactly divides : %d",divide);
    return 0;
}