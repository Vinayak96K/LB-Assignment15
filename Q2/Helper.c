#include"MyHeader.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: Pattern
//  Description: Accepts number from user and that number of capital and small alphabets randomly on the screen.
//  Input: int[IN]
//  Output: NA
//  Author: Vinayak Mahendra Patil
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    char ch='A';
    int i=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(i=0;i<=iNo;i++)
    {
        if(ch<='Z')
        {
            if(i%2==0)
            {
            printf("%c\t",ch);
            ch++;
            }
            else
            {
            printf("%c\t",ch+32);
            ch++;
            }
        }
        else
        {
            ch='A';
            if(i%2==0)
            {
            printf("%c\t",ch);
            ch++;
            }
            else
            {
            printf("%c\t",ch+32);
            ch++;
            }
        }
    }
    printf("\n");
}