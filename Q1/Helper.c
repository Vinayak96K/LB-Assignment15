#include"MyHeader.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: Pattern
//  Description: Accepts number from user and that number of capital Alphabets on the screen.
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
            printf("%c\t",ch);
            ch++;
        }
        else
        {
            ch='A';
            printf("%c\t",ch);
            ch++;
        }
    }
    printf("\n");
}