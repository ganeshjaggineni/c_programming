/*
A Numerologist tells a name of a person is lucky or not based on the Destiny number and Life path number calculation.

Destiny number is calculated from your name and
Life path number is calculated from your date of birth. 


Finding life path number from date of birth by Pythagorean method:

·        Bring down your day, month and year to single digit number by adding them

·        add the resultant single digits to get a single digit.



Ex. 19/10/2012

Month: 1 + 0 = 1

Day: 1+9 = 10 = again add 1+0 = 1

Year: 2 + 0 + 1 + 2 = 5

Adding the single digit resultants gives, 1 + 1 +5 = 7. life path number is 7.



Finding life Destiny number from name:

·        Assign the corresponding number for each character in your name and add the Sum the digits further to get a single digit number, your Destiny number

Pythagorean Numerology

1   2   3   4   5   6   7   8   9

A   B   C   D   E   F   G   H   I

J   K   L   M    N  O   P   Q   R

S   T   U   V    W  X   Y   Z



Ex:IsaacSandeep

I = 9     S = 1

S = 1     A = 1

A = 1     N = 5

A = 1     D = 4

C = 3     E = 5

              E = 5

              P = 7



Now add the digits assigned to each name. If the resultant is a two-digit number add them again to bring it down to a single digit.

ISAAC (9+1+1+1+3) = 15 = 1+5 = 6

SANDEEP (1+1+5+4+5+5+7) = 28 = 2+8 = 10 = 1



Finally, add the individual destiny numbers to get the single digit that will be your final destiny number.

For Isaac Sandeep,  6 + 1 = 7

Therefore, the destiny number is 7.

Input format
Date of Birth (DD-MM-YYYY) format

Name wihtout space

Output format
Life path number

Destiny number

Lucky /Not Lucky

Sample testcases

Input 1
19-10-2012
IsaacSandeep
Output 1
Life path number : 7
Destiny number : 7
Lucky

Input 2

22-03-1986
ram
Output 2
Life path number : 4
Destiny number : 5
Not Lucky

*/

//program

#include<stdio.h>
#include<string.h>
int main()
{
    int day,month,year;
    char name[100];
    int first,second,addday,addmonth,digit=0,addyear=0,res,i,dest=0;
    scanf("%d%d%d",&day,&month,&year);
    scanf("%s",name);
    if(day>0&&day<32)
    {
      second=day%10;
      first=day/10;
      addday=first+second;
      if(addday>=10)
      {
          addday=addday%10+addday/10;
      }
    }
    month=-(month);
    if(month>0&&month<13)
    {
        addmonth=month%10+month/10;
        if(addmonth>=10)
        {
            addmonth=addmonth%10+addmonth/10;
        }
    }//month end
    
    //year start
    year=-(year);
    if(year>0)
    {
        while(year>0)
        {
            digit=year%10;
            addyear=addyear+digit;
            year=year/10;
            
        }//year while end
       
    }//year if end
    res=addday+addmonth+addyear;
    if(res>10)
    {
        res=res%10+res/10;
    }
    printf("Life path number : %d",res);
    
    for(i=0;i<=strlen(name);i++)
    {
        if(name[i]>=6&&name[i]<=90)
        {
            name[i]=name[i]+32;
        }
    }
    
   
    for(i=0;i<strlen(name);i++)
    {
        switch(name[i])
        {
            case 'a':
            case 'j':
            case 's':dest=dest+1;
                break;
            case 'b':
            case 'k':
            case 't':dest=dest+2;
                break;
            case 'c':
            case 'l':
            case 'u':dest=dest+3;
                break;
            case 'd':
            case 'm':
            case 'v':dest=dest+4;
                break;
            case 'e':
            case 'n':
            case 'w':dest=dest+5;
                break;
            case 'f':
            case 'o':
            case 'x':dest=dest+6;
                break;
            case 'g':
            case 'p':
            case 'y':dest=dest+7;
                break;
            case 'h':
            case 'q':
            case 'z':dest=dest+8;
                break;
            case 'i':
            case 'r':dest=dest+9;
                break;
        }
    }
    if(dest>=10)
    {
        dest=dest%10+dest/10;
    }
    printf("\nDestiny number : %d",dest);
    if(res==dest)
    {
        printf("\nLucky");
    }
    else
    {
        printf("\nNot Lucky");
    }
    return 0;
}