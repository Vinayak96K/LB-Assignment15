#include"MyHeader.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: Pattern
//  Description: Accepts two numbers from user and displays a particular pattern.
//  Input: int[IN,In]
//  Output: NA
//  Author: Vinayak Mahendra Patil
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow,int iCol)
{
    int iCnt1,iCnt2,iCnt3=1;
    if(iRow<0)
    {
        iRow=-iRow;
    }
    if(iCol<0)
    {
        iCol=-iCol;
    }

    for(iCnt1=1;iCnt1<=iRow;iCnt1++)
    {
        iCnt3=1;
        for(iCnt2=1;iCnt2<=iCol;iCnt2++)
        {
            if(iCnt2%2==1)
            {
            printf("%d\t",iCnt3++);
            }
            else
            {
            printf("$\t");  
            }
        }
        printf("\n");
    }

}