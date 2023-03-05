/*
GSP school has arranged a quiz competition for children under the age of 5. Vikaram is participating in this quiz. The first question is based on the English alphabet. The participants need to find the given alphabet is vowel or consonant. So, Help Vikram to check whether the given alphabet is vowel or consonant.

Input format
A single character

Output format
Display consonant/ vowel if it is alphabet.

Display a warning message if it is not alphabet



Refer sample outputs

Sample testcases
Input 1
E
Output 1
E is a vowel
Input 2
p
Output 2
p is a consonant
Input 3
$
Output 3
$ is not an alphabet
*/

//program

#include<stdio.h>
int main()
{
    char ch;
    int lowervowel,uppervowel;
    scanf("%c",&ch);
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
    {
        lowervowel=(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
        uppervowel=(ch=='A'||ch=='E'||ch=='I'||ch=='0'||ch=='U');
    
   
    if(lowervowel||uppervowel)
    {
        printf("%c is a vowel",ch);
    }
    else
    {
        printf("%c is a consonant",ch);
    }
    }
    else
        printf("%c is not an alphabet",ch);

    return 0;
}