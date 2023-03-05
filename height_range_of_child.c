/*
Ram is watching the children playing in a park. He wants to write a program that will get the age and height of a child from the user and decide whether the child is normal, tall or short based on the below criteria.



Age 2 - 3 :

"SHORT" if height < 55

"NORMAL" if 55 <= height < 75

"TALL" if height >=75



Age 4- 5 :

"SHORT" if height < 75

"NORMAL" if 75 <= height < 100

"TALL" if height >=100



If they enters an age outside this range, the program should output the message "OUT OF RANGE". 

Input format
Age in first line

Height in second line

Output format
SHORT or NORMAL or TALL or OUT OF RANGE

Sample testcases

Input 1
2
54

Output 1
SHORT

//program

#include<stdio.h>
int main()
{
    int age;
    double height;
    scanf("%d%lf",&age,&height);
    
    if(age==2||age==3)
    {
        if(height<55)
        {
            printf("SHORT");
        }
        else if(height<75&&height>=55)
        {
            printf("NORMAL");
        }
        else if(height>=75)
        {
            printf("TALL");
        }
    }
    else if(age==4||age==5)
    {
        if(height<75)
        {
            printf("SHORT");
        }
        else if(height<100&&height>=75)
         {
            printf("NORMAL");
         }
         else if(height>=100)
         {
             printf("TALL");
         }
    }
    else
    {
        printf("OUT OF RANGE");
    }
    return 0;
}