/*
Mukesh recently started to prepare aptitude for his placement. He wants to calculate xn without using built in function.Help Mukesh to complete the task.

Note that, x0 = 1 and x-n = 1/xn

Input format
First line of input is x

Second line of input is n

Output format
Calculated value as shown in sample outputs

Sample testcases

Input 1
2
4

Output 1
16

Input 2
2
-4

Output 2
1/16

Input 3
2
0

Output 3
1

*/

//program 
#include<stdio.h>

int main()
{
    int x,n,res=0,i=1,count=0;
    scanf("%d",&x);
    scanf("%d",&n);
    if(n<0)
    {
        n=-n;
        count++;
    }
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            res=res+1;
        }
        else
        {
       res=res+x*i;
        }
    }
    if(count==1)
    {
        printf("1/%d",res+1);
    }
    else
        printf("%d",res+1);
    
}